
# BCA188 - ESP32 Wi-Fi Manager

## 1. Student Information

- **Name:** Ivan Lindel A. Hayahay
- **Course & Year:** BS Computer Applications - 3rd Year
- **Assigned Number:** 07
- **Board Used:** ESP32-S3 
- **Arduino IDE:** Arduino IDE

## 2. Activity Overview

This activity focuses on setting up WiFiManager on an ESP32 to connect to different Wi-Fi networks without changing or uploading the code every time the network changes.

WiFiManager allows the ESP32 to create its own configuration portal where users can select a Wi-Fi network and enter its password.

## 3. Objectives

- Set up WiFiManager on an ESP32.
- Connect an ESP32 to different Wi-Fi networks without reprogramming.
- Understand how WiFiManager stores and manages Wi-Fi credentials.
- Test Wi-Fi configuration and reset functionality.

## 4. Hardware and Software Requirements

### Hardware
- ESP32-S3 DevKitC-1
- USB cable
- Smartphone
- Wi-Fi router
- Smartphone hotspot

### Software
- Arduino IDE
- ESP32 Board Support Package
- WiFiManager Library by tzapu

## 5. Practice Tasks and Results

| Task | What to do | What I observed |
|---|---|---|
| 1. Wrong Password | Enter an incorrect Wi-Fi password. | The ESP32 attempted to connect but failed because the credentials were incorrect. A connection failure message appeared in the Serial Monitor. |
| 2. Reset Settings | Hold the BOOT button for 3 seconds. | The ESP32 erased its saved Wi-Fi credentials and restarted, allowing a new Wi-Fi configuration. |
| 3. Change the Name | Change the network name in the code and upload it again. | The ESP32 displayed the updated access point name in the available Wi-Fi networks. |
| 4. Different Network | Reset the board and connect it to a phone hotspot. | The ESP32 connected to the phone hotspot and received an IP address displayed in the Serial Monitor. |

## 6. Screenshots

### Screenshot 1.1 and 1.2: Wi-Fi Manager Configuration Page

<img width="912" height="2026" alt="e0c5299c-4d15-4517-aa9d-5975fe5c0936" src="https://github.com/user-attachments/assets/c8ff6d6b-94df-479d-8a7c-e4d85701829c" />
<img width="912" height="2026" alt="730ec690-d2ce-4c0d-8e74-ab1192dcd5c1" src="https://github.com/user-attachments/assets/764ad2c0-8c26-45fa-99f2-bfc0aa6b4781" />


### Screenshot 2: Serial Monitor - Successful Wi-Fi Connection
<img width="223" height="136" alt="Screenshot 2026-10-31 110524" src="https://github.com/user-attachments/assets/73070f74-b0b6-4cdd-ad5e-418cf0fbd9c4" />

### Screenshot 3:  Wrong Password
<img width="374" height="125" alt="Screenshot 2026-10-31 110621" src="https://github.com/user-attachments/assets/32269dc0-e531-478b-9059-959eb0f2e6fb" />

### Screenshot 4.1 and 4.2:  New network name
<img width="912" height="2026" alt="fc005748-413c-44d8-aa77-2d8a395e966f" src="https://github.com/user-attachments/assets/d4f124a6-3d7b-44ac-85d2-6dbb9b7c18dc" />
<img width="912" height="2026" alt="252692e4-b6c9-4508-b77b-0372918062b3" src="https://github.com/user-attachments/assets/2e2d23aa-bdfc-4b9d-8723-7e4b27a54ece" />

### Screenshot 5.1 and 5.2: Mobile Hotspot
<img width="912" height="2026" alt="8088029e-999e-4824-80b3-60d61ccdfaf3" src="https://github.com/user-attachments/assets/23de5139-8ec6-4383-905b-5ecff701eb78" />
<img width="912" height="2026" alt="aa9c3dd2-99c5-404e-b68c-cf7ee572914f" src="https://github.com/user-attachments/assets/13a78d30-5fe5-4f3a-895a-e36863a3e135" />

### Screenshot 6:  Serial Monitor - Successful Mobile Hotspot Connection
<img width="266" height="138" alt="Screenshot 2026-10-31 114254" src="https://github.com/user-attachments/assets/3c09ebb1-7b4e-4680-97e5-a8c89df746a0" />

## 7. Explanation

The ESP32 can connect to different Wi-Fi networks without changing the code because WiFiManager saves the Wi-Fi credentials in its memory. When the ESP32 restarts, it automatically uses the saved credentials to reconnect. When connecting to a different network, users can configure new credentials through the Wi-Fi Manager portal.

## 8. Conclusion

Through this activity, I learned how to configure an ESP32 using WiFiManager. I was able to understand how the ESP32 creates a configuration portal, saves Wi-Fi credentials, resets its settings, and connects to different Wi-Fi networks without manually changing the SSID and password in the code.
