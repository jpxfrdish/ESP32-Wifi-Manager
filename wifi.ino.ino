#include <WiFi.h>
#include <WiFiManager.h>

#define BOOT_BUTTON 0

WiFiManager wm;

unsigned long buttonPressTime = 0;
bool buttonPressed = false;
bool settingsReset = false;

void setup() {
  Serial.begin(115200);
  pinMode(BOOT_BUTTON, INPUT_PULLUP);

  Serial.println();
  Serial.println("BCA188 WiFi Manager");
  Serial.println("Starting ESP32...");

  // Set the configuration portal timeout to 3 minutes
  wm.setConfigPortalTimeout(180);

  // Start WiFiManager using your assigned network name
  bool connected = wm.autoConnect("BCA188-ESP32-07");

  if (!connected) {
    Serial.println("WiFi connection failed or timed out.");
    Serial.println("Restarting ESP32...");
    delay(2000);
    ESP.restart();
  }

  Serial.println("========================");
  Serial.println("WiFi Connected!");
  Serial.print("Network: ");
  Serial.println(WiFi.SSID());

  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  Serial.println("========================");
}

void loop() {

  // Check if BOOT button is pressed
  if (digitalRead(BOOT_BUTTON) == LOW) {

    if (!buttonPressed) {
      buttonPressed = true;
      buttonPressTime = millis();
    }

    // Hold BOOT for 3 seconds to reset WiFi settings
    if (millis() - buttonPressTime >= 3000 && !settingsReset) {

      settingsReset = true;

      Serial.println("Resetting WiFi settings...");

      wm.resetSettings();

      delay(1000);

      ESP.restart();
    }

  } else {
    buttonPressed = false;
    settingsReset = false;
  }
}