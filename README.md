# Health Assistant Robot 
* An intelligent health assistant robot that provides real-time personalized guidance based on user inputs such as daily routine, food intake, and physical activity.
* It monitors key health metrics like pulse rate and body temperature, and suggests actions such as walking or resting to help maintain a healthy lifestyle.
* The system promotes better habits through interactive feedback, making healthcare guidance simple and accessible.

# Problem
* People lack real-time personalized guidance for daily habits like eating and physical activity.
* This leads to unhealthy lifestyles and increases the risk of diseases such as Type 2 diabetes, obesity, heart disease, and high blood pressure.

# Solution
* Introduces a health assistant robot that analyzes user inputs such as food intake and daily activity.
* Provides real-time personalized suggestions like walking, resting, or maintaining activity levels.
* Helps users adopt a healthier lifestyle through continuous guidance and feedback.
  
# Basic Working 
1️⃣ Voice Interaction
* User speaks through microphone
* MCU sends voice to cloud → converts to text
* Understands what user asked (food, health, etc.)

2️⃣ Sensor Monitoring
* Pulse sensor measures heart rate.
* Temperature sensor measures body temperature.
* MCU collects real-time health data.

3️⃣ Input Processing

* MCU sends user query + sensor data to AI (via WiFi).
* AI analyzes food, health condition, and routine.
* Generates smart suggestions (trainer-level advice).

4️⃣ Output Response

* Robot speaks answer through speaker .
* Shows advice + health score on OLED.
* Gives suggestions like walking, hydration, routine tips.

# Components used 
* ESP32 DevKit,Arduino,Pulse Sensor (heart rate), DS18B20 Temperature Sensor, INMP441 I2S Microphone, PAM8403 Amplifier Module, 8Ω Mini Speaker, 0.96” OLED Display.
* 18650 Lithium Battery, TP4056 Charging Module, MT3608 Boost Converter, 18650 Battery Holder,  toggle/sliding  Switch
* Zero PCB, project box ,Some resistors, capacitors and jumper wires

