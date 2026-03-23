# 🤖 LineTracerX

**LineTracerX** is a high-precision line follower robot built using Arduino Nano, designed for fast and stable path tracking using a 5-array IR sensor system and efficient motor control via the TB6612FNG driver.

---

## 🚀 Features

* 🔍 Accurate line detection using 5 IR sensor array
* ⚡ Fast response with optimized control logic
* 🎯 Smooth and stable movement (reduced oscillation)
* 🔄 Differential drive using TB6612FNG motor driver
* 🧠 Efficient algorithm for path correction
* 🔋 Low power and compact embedded design

---

## 🛠️ Hardware Components

* Arduino Nano
* TB6612FNG Motor Driver
* 5-Channel IR Sensor Array
* DC Stepper Motors
* Robot Chassis
* Battery Pack

---

## 🔌 Pin Configuration

### IR Sensor Connections

| Sensor | Arduino Pin |
| ------ | ----------- |
| S1     | A0          |
| S2     | A1          |
| S3     | A2          |
| S4     | A3          |
| S5     | A4          |

### TB6612FNG Connections

| Driver Pin | Arduino Pin |
| ---------- | ----------- |
| PWMA       | D5          |
| AIN1       | D2          |
| AIN2       | D3          |
| PWMB       | D6          |
| BIN1       | D7          |
| BIN2       | D8          |
| STBY       | D4          |

---

## ⚙️ Working Principle

1. The IR sensor array continuously reads the surface.
2. White surface → Low reflection
   Black line → High reflection
3. Based on sensor values, Arduino calculates position error.
4. Motor speeds are adjusted using TB6612FNG:

   * Move forward
   * Turn left
   * Turn right
5. The robot follows the line smoothly using corrective logic.

---

## 🧠 Control Logic (Basic Idea)

* Center sensor active → Move straight
* Left sensors active → Turn left
* Right sensors active → Turn right
* All sensors off → Search mode

---

## 💻 Software

* Arduino IDE
* Embedded C/C++

---



## 📌 Future Improvements

* 🚀 PID based Optimisation for ultra-smooth tracking
* 📡 Add LoRa for remote monitoring
* 📍 GPS integration for tracking
* 🤖 AI-based path learning

---

## 🤝 Contributing

Pull requests are welcome. For major changes, please open an issue first.

---


## ⭐ Support

If you like this project, give it a ⭐ on GitHub!

---


Just tell 👍

