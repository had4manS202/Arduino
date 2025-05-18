*
 * Arduino Soil Moisture Sensor
 * 
 * This sketch reads data from a soil moisture sensor and outputs 
 * the moisture level through the serial monitor.
 * 
 * Circuit:  
 * - VCC pin of the sensor to 5V on Arduino
 * - GND pin of the sensor to GND on Arduino
 * - AO (Analog Out) pin of the sensor to A0 on Arduino
 */

// Pin definitions
const int soilMoisturePin = A0;  // Analog pin for soil moisture sensor

// Calibration values for the sensor
// These values should be adjusted based on your sensor and soil conditions
const int dryValue = 880;    // Value for dry soil (adjust based on your sensor readings)
const int wetValue = 380;    // Value for wet soil (adjust based on your sensor readings)

// Thresholds for moisture levels
const int dryThreshold = 30;   // Below this percentage is considered "dry"
const int wetThreshold = 70;   // Above this percentage is considered "wet"

// Variables to store readings
int rawValue = 0;
int moisturePercentage = 0;
String moistureStatus = "";

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Arduino Soil Moisture Sensor");
  Serial.println("----------------------------");
  delay(2000);  // Give the serial monitor time to open
}

void loop() {
  // Read the analog value from the soil moisture sensor
  rawValue = analogRead(soilMoisturePin);
  
  // Convert the raw value to a percentage (0-100%)
  // map(value, fromLow, fromHigh, toLow, toHigh)
  // Note: We constrain the result to avoid values outside 0-100%
  moisturePercentage = map(constrain(rawValue, wetValue, dryValue), wetValue, dryValue, 100, 0);
  
  // Determine moisture status based on thresholds
  if (moisturePercentage <= dryThreshold) {
    moistureStatus = "DRY - Needs Water!";
  } else if (moisturePercentage >= wetThreshold) {
    moistureStatus = "WET - Well Watered";
  } else {
    moistureStatus = "MOIST - Adequate";
  }
  
  // Print results to Serial Monitor
  Serial.print("Raw Sensor Value: ");
  Serial.print(rawValue);
  Serial.print(" | Moisture: ");
  Serial.print(moisturePercentage);
  Serial.print("% | Status: ");
  Serial.println(moistureStatus);
  
  // Wait before next reading
  delay(2000);  // Read every 2 seconds
}
