# ESP8266 Mercury Open Optical Module Project

#### Project Overview
This project demonstrates how to interface an ESP8266 microcontroller with a mercury open optical module to detect the presence of objects. The optical module provides a digital output signal based on whether an object is detected within its sensing range.

#### Components Needed
- **ESP8266 Microcontroller**
- **Mercury Open Optical Module**
- **Jumper Wires**

#### Circuit Setup
1. **Connecting the Mercury Open Optical Module to ESP8266:**
   - Connect the digital output pin of the optical module to GPIO pin D1 on the ESP8266.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266 and the optical module.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display whether an object is detected ("Object Detected") or not ("No Object Detected").
   - Place an object within the sensing range of the optical module to observe changes in detection status.

#### Applications
- **Object Detection:** Use in automation systems to detect the presence or absence of objects.
- **Counting Systems:** Count objects passing through a specific area.
- **Security Systems:** Trigger actions based on the presence of objects.

#### Notes
- **Sensing Range:** The detection range of the optical module may vary depending on its specifications.
- **Digital Output:** The optical module provides a digital signal (`LOW` or `HIGH`) based on whether an object is detected.
- **Internal Pull-up Resistor:** Used to ensure stable readings when the sensor output is not connected to anything.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Mercury Open Optical Module](https://projectslearner.com/learn/esp8266-mercury-open-optical-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner