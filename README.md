# 🔥 **ESP32 + DS18B20: Smart Temperature Monitoring** 🌡️  

🚀 **Monitor temperature in real-time** using an **ESP32** and the **DS18B20 digital temperature sensor**! This simple yet powerful project lets you **track temperature changes accurately** and is perfect for **IoT, smart home, and industrial applications.**  

---

## ✨ **Features**  
✅ **Accurate Temperature Readings** 📊 – Get precise temperature in **Celsius (°C)**  
✅ **Real-Time Data** ⏳ – Updates every **2 seconds**  
✅ **Error Handling** ⚠️ – Detects missing or faulty sensors  
✅ **Lightweight & Fast** 🚀 – Optimized for ESP32  

---

## 🛠 **What You Need**  
### **Hardware Components**  
- **ESP32 Development Board**  
- **DS18B20 Temperature Sensor**  
- **4.7kΩ Resistor** (Pull-up between **VCC & DATA**)  
- **Jumper Wires**  

### **Connections**  
| DS18B20 Pin | ESP32 Pin  |
|-------------|-----------|
| VCC (Red)   | **3.3V**  |
| GND (Black) | **GND**   |
| DATA (Yellow) | **GPIO 15** |

🔹 **Note:** A **4.7kΩ pull-up resistor** is required between **VCC** and **DATA** for stable operation.

---

## 🚀 **Getting Started**  

### 🔹 **1. Install Required Libraries**  
Before uploading the code, install these libraries in **Arduino IDE**:  
✅ **OneWire**  
✅ **DallasTemperature**  

📌 **How to Install:**  
- Open **Arduino IDE**  
- Go to **Sketch → Include Library → Manage Libraries**  
- Search for **OneWire** and **DallasTemperature**, then install them.  

### 🔹 **2. Upload Code to ESP32**  
1️⃣ Open **Arduino IDE**  
2️⃣ Select **ESP32 board** and the correct **COM port**  
3️⃣ Copy-paste the **ESP32_DS18B20.ino** code  
4️⃣ Click **Upload** 🚀  

### 🔹 **3. View Live Temperature Data**  
- Open **Serial Monitor** (Baud rate: **115200**)  
- Watch real-time temperature updates! 📊  

---

## 📜 **How It Works**  

💡 **ESP32 reads temperature** from the **DS18B20 sensor** and prints it to the **Serial Monitor** every **2 seconds**. If the sensor is missing or faulty, an **error message** is displayed.  

### **Key Functions:**  
🔹 `setup()` – Initializes **Serial communication** & **DS18B20 sensor**  
🔹 `loop()` – Reads & prints **temperature** every **2 seconds**  
🔹 `sensors.getTempCByIndex(0)` – Fetches temperature data in **Celsius**  
🔹 **Error Handling** – Detects **sensor failures** & alerts the user  

---

## 📊 **Expected Output**  

✔️ **If the sensor is working properly:**  
```
Detected DS18B20 devices: 1  
Temperature: 27.50 °C  
Temperature: 27.55 °C  
Temperature: 27.60 °C  
```

⚠️ **If the sensor is missing or faulty:**  
```
Error: No DS18B20 sensors detected!  
```

---

## 🎯 **Why Use This Project?**  
🔥 **Perfect for IoT & Smart Homes** – Monitor temperature remotely  
🔥 **Energy Efficient** – Low power consumption  
🔥 **Easy to Integrate** – Works with other IoT platforms  
🔥 **Reliable & Accurate** – DS18B20 provides precise readings  

---

## 🙌 **Credits & Acknowledgments**  
👨‍💻 **Developed by:** Yodha Ardiansyah  
🌐 **Website:** [arunovasi.my.id](https://arunovasi.my.id)  
📅 **Last Updated:** February 2025  

---

💡 **Ready to build more awesome IoT projects?** Let’s innovate together! 🚀
