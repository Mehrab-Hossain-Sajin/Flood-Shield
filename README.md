# Flood-Shield
FloodShield: Multi-Sensor Flood Detection & Prevention System
FloodShield is an Arduino-based automated monitoring system designed to provide early flood warnings and water level management through multi-sensor integration and physical actuation. Combining real-time water level detection, environmental monitoring, and automated responses, this project is ideal for residential, urban, and agricultural flood prevention.

Key Features & Technical Components
1. Water Level Monitoring
HC-SR04 Ultrasonic Sensor: Measures precise water distance (0–30 cm range) to detect rising flood levels.
Analog Water Level Sensor: Classifies water levels into Empty, Low, Medium, or High based on calibrated thresholds (A0 input).

2. Environmental Hazard Detection
DHT22 Sensor: Monitors temperature and humidity, helping correlate weather conditions with flood risks.
Vibration Sensor: Detects ground disturbances (e.g., strong water flow, structural movements) to trigger alerts.

3. Automated Flood Response
SG90 Servo Motor: Activates barriers, gates, or valves (80°–180° range) when water exceeds safe levels.
LED Warning System: Provides visual alerts for critical conditions (vibration triggers or ultrasonic flood detection).

4. User Interface & Data Logging
16x2 I2C LCD Display: Shows real-time sensor readings, water level status, and system alerts.
Serial Monitor Output: Enables debugging and data recording for performance analysis.

Use Cases
🏠 Residential: Basement, garage, or yard flood detection.
🏙️ Urban: Storm drain, sewage overflow, or street flooding alerts.
🌾 Agricultural: Irrigation channel monitoring and automated water flow control.

Setup & Configuration
Hardware Setup: Connect sensors to designated Arduino pins (Ultrasonic: D9/D10, DHT22: D2, Servo: D9 PWM).
Software Upload: Flash the provided .ino files (requires LiquidCrystal_I2C, DHT, and Servo libraries).
Calibration: Adjust analog water sensor thresholds in code for optimal accuracy in your environment.

Future Enhancements
📶 IoT Integration: Add Wi-Fi/GSM modules (ESP8266, SIM800L) for remote SMS/email alerts.
💾 Data Logging: Implement an SD card module to store historical flood events.
☀️ Solar Power: Enable off-grid deployment with battery/solar charging.
