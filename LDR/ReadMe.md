# ☀️ LDR Sensor with ESP32

This project uses an **LDR (Light Dependent Resistor)** with an **ESP32** to measure the ambient light intensity. The output is displayed on the Serial Monitor.

---

## 🧰 Components Needed

- ESP32 Dev Board  
- LDR (Light Dependent Resistor)  
- 10kΩ Resistor  
- Breadboard  
- Jumper wires  
- USB cable (for power and uploading code)  

---

## ⚡ Circuit Diagram

Place your circuit image here:

![Circuit Diagram](circuit_diagram.png)

> 📝 Tip: You can create your own using **Fritzing** or draw by hand and save it as `circuit_diagram.png`.

---

## 🔌 Pin Connections

| Component   | Connects to ESP32      |
|-------------|------------------------|
| One leg of LDR  | 3.3V                  |
| Other leg of LDR | GPIO34 (Analog Input) |
| 10kΩ Resistor | Between GPIO34 and GND |

> ℹ️ The LDR and resistor form a voltage divider. The junction of the two is connected to an analog-capable GPIO pin (e.g., GPIO34).

---

## 🧪 Sample Code

```cpp
int ldrPin = 34; // GPIO34 (Analog Input)

void setup() {
  Serial.begin(115200);
}

void loop() {
  int lightValue = analogRead(ldrPin);
  Serial.print("Light Intensity: ");
  Serial.println(lightValue);
  delay(1000); // Read every second
}
