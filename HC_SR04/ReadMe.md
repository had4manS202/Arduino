# 📏 HC-SR04 Ultrasonic Sensor with Arduino UNO

This project uses an **HC-SR04 ultrasonic sensor** with an **Arduino UNO** to measure the distance between the sensor and an object. The output is displayed on the Serial Monitor.

---

## 🧰 Components Needed

- Arduino UNO board
- HC-SR04 Ultrasonic sensor
- Breadboard
- Jumper wires
- USB cable (for power and uploading code)

---

## ⚡ Circuit Diagram

Place your circuit image here:

![Circuit Diagram](circuit_diagram.png)

> 📝 Tip: You can design your own using **Fritzing** or draw by hand and save it as `circuit_diagram.png`.

---

## 🔌 Pin Connections

| HC-SR04 Pin | Connects to Arduino UNO |
|-------------|-------------------------|
| VCC         | 5V                      |
| GND         | GND                     |
| TRIG        | Pin 6                   |
| ECHO        | Pin 7                   |

---

## 📟 Code Explanation

```cpp
const int trig = 6;         // TRIG pin connected to Arduino pin 6
const int echo = 7;         // ECHO pin connected to Arduino pin 7
long totaltime;             // Variable to store the time taken for echo
int distance;               // Variable to store calculated distance

void setup() {
  pinMode(trig, OUTPUT);    // Set TRIG as OUTPUT to send pulse
  pinMode(echo, INPUT);     // Set ECHO as INPUT to receive reflected pulse
  Serial.begin(9600);       // Begin serial communication at 9600 baud
}

void loop() {
  digitalWrite(trig, LOW);       // Ensure TRIG is LOW
  delayMicroseconds(2);          // Wait for 2 microseconds
  digitalWrite(trig, HIGH);      // Send a 10 microsecond pulse
  delayMicroseconds(10);
  digitalWrite(trig, LOW);       // Turn off the pulse

  totaltime = pulseIn(echo, HIGH);             // Measure time taken for echo
  distance = totaltime * 0.034 / 2;            // Calculate distance in cm

  Serial.print("Distance: ");    // Print the result
  Serial.println(distance);      // Example: Distance: 25
}
