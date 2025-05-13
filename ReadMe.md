# 🔌 Arduino Basics – A Beginner’s Guide

Welcome to the Arduino Basics repository! This guide is designed for beginners interested in getting started with **Arduino**, **ESP32**, and **ESP8266** boards along with common components such as **sensors**, **breadboards**, and **wiring concepts**.

---

## 📘 What is Arduino?

**Arduino** is an open-source electronics platform based on easy-to-use hardware and software. It’s designed to make digital electronics more accessible for students, hobbyists, and developers. With Arduino, you can create interactive projects that sense and control objects in the physical world.

---

## 🧠 Common Arduino Boards

### 1. **Arduino UNO**
- Most beginner-friendly board.
- Based on the **ATmega328P** microcontroller.
- Has **14 digital I/O pins** (6 can be used as PWM), and **6 analog input pins**.
- Runs at **5V logic** and **16 MHz** clock speed.

### 2. **ESP8266**
- Wi-Fi-enabled microcontroller board.
- Ideal for **IoT projects**.
- Operates at **3.3V logic**.
- Fewer GPIOs compared to ESP32.
- Common versions: **NodeMCU**, **Wemos D1 Mini**.

### 3. **ESP32**
- Successor of ESP8266 with **more GPIOs**, **Bluetooth**, and **better performance**.
- Dual-core processor with Wi-Fi + Bluetooth.
- Operates at **3.3V logic**.
- Great for advanced IoT and sensor-based projects.

---

## 🧱 What is a Breadboard?

A **breadboard** is a solderless device used to build and test electronic circuits without permanently fixing components. It contains rows and columns of interconnected holes where components and wires can be inserted.

- **Horizontal Rows** (Top and Bottom): Power Rails (used for VCC and GND)
- **Vertical Columns** (Middle area): For placing components and connecting them

---

## 🔌 Common Pins and Terms

### 📍 VCC
- **Voltage Common Collector**
- Supplies power to sensors and modules
- Usually **5V** (Arduino UNO) or **3.3V** (ESP32/ESP8266)

### 📍 GND (Ground)
- Common reference point in the circuit
- Always connected to the **negative** terminal of power supply

### 📍 TRIGGER (Trig)
- Found in **HC-SR04 ultrasonic sensor**
- Sends out ultrasonic pulse when triggered by a HIGH signal

### 📍 ECHO
- Receives the reflected sound wave in **HC-SR04**
- Measures distance based on time difference between sending and receiving sound

### 📍 Analog Output (AO)
- Found in analog sensors like **LDR (Light Dependent Resistor)**
- Outputs a range of voltage values (usually 0–1023 for Arduino UNO)

---

## 🧰 Other Useful Terms

### 🧾 Male and Female Pins
- **Male pins**: Pins that stick out – used for plugging into female headers.
- **Female pins**: Sockets that receive male pins – found on Arduino boards and some modules.

### ⚡ Digital vs Analog Pins
- **Digital Pins**: Can read/write only HIGH (1) or LOW (0).
- **Analog Pins**: Can read a range of voltages (e.g., 0–5V) and convert it to a numeric value.

### 🛠️ Board Manager (in Arduino IDE)
- Allows you to install support for third-party boards like **ESP32** or **ESP8266**.
- Example URL for ESP32:
