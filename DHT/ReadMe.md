# 🌡️ DHT11 Temperature and Humidity Sensor with Arduino UNO

This project demonstrates how to interface a **DHT11 sensor** with an **Arduino UNO** to measure temperature and humidity. The data is printed to the Serial Monitor in real-time.

---

## 📘 What is DHT11?

The **DHT11** is a basic, low-cost **digital sensor** used to measure:
- 🌡️ **Temperature** (in °C)
- 💧 **Relative Humidity** (in %)

### 📋 DHT11 Specifications:
- Temperature range: 0–50 °C (±2 °C accuracy)
- Humidity range: 20–90% RH (±5% accuracy)
- Sampling rate: 1 Hz (one reading per second)
- Digital output (single-wire interface)
- Operating Voltage: 3.3V to 5.5V

---

## 🧰 Hardware Required

| Component           | Quantity |
|---------------------|----------|
| Arduino UNO         | 1        |
| DHT11 Sensor Module | 1        |
| Jumper Wires        | 3        |
| Breadboard (Optional) | 1      |
| USB Cable (Type B)  | 1        |

---

## 🔌 Wiring the DHT11 to Arduino UNO

### DHT11 Pinout (3-pin module version):
- **VCC** → 5V on Arduino
- **DATA/OUT** → Digital Pin `2` on Arduino
- **GND** → GND on Arduino

