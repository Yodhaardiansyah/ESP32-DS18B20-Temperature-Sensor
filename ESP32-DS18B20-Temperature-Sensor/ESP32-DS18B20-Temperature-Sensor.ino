/*
 * ESP32 DS18B20 Temperature Sensor
 * 
 * This program reads temperature data from a DS18B20 sensor 
 * and displays it on the Serial Monitor.
 * 
 * Author: Yodha Ardiansyah
 * Website: https://arunovasi.my.id
 * 
 * Note: Ensure that the DS18B20 sensor is properly connected 
 *       with a 4.7kΩ pull-up resistor between DATA and VCC.
 */

#include <OneWire.h>
#include <DallasTemperature.h>

// Define the pin for the DS18B20 sensor
#define ONE_WIRE_BUS 15  // Change this if using a different GPIO

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  // Start Serial Communication
  Serial.begin(115200);
  
  // Initialize the DS18B20 sensor
  sensors.begin();
  
  // Check for connected devices
  int deviceCount = sensors.getDeviceCount();
  Serial.print("Number of DS18B20 devices detected: ");
  Serial.println(deviceCount);

  if (deviceCount == 0) {
    Serial.println("Error: No DS18B20 sensors detected!");
  }
}

void loop() {
  // Request temperature data from the sensor
  sensors.requestTemperatures();
  
  // Read temperature from the first sensor (index 0)
  float temperature = sensors.getTempCByIndex(0);
  
  // Display the temperature on the Serial Monitor
  if (temperature != -127.00) {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
  } else {
    Serial.println("Error: Sensor not detected or invalid data!");
  }

  // Delay before the next reading
  delay(2000);
}
