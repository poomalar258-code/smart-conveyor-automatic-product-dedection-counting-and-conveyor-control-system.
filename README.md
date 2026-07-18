# Smart Conveyor – Automatic Product Detection, Counting and Conveyor Control System

An embedded automation project based on the **LPC2129 ARM7 Microcontroller** for automatic product detection, conveyor control, and product counting. The system uses **IR sensors** to detect products, controls a **DC conveyor motor** through an **L298N motor driver**, and displays the product count on a **16×2 LCD**.

---

## 📖 Overview

The Smart Conveyor System is designed to automate product movement and counting in industrial environments. It demonstrates the fundamental concepts of industrial automation by integrating sensors, motor control, and embedded programming into a compact prototype.

When a product is detected at the conveyor entrance, the microcontroller activates the conveyor motor. As the product reaches the exit sensor, the system increments the product count and displays the updated value on the LCD.

---

## ✨ Features

- Automatic product detection using IR sensors
- Automatic conveyor motor control
- Real-time product counting
- Live count display on a 16×2 LCD
- Embedded C implementation on LPC2129 ARM7
- Low-cost industrial automation prototype
- Reliable sensor-based operation

---

## 🛠 Hardware Components

| Component | Quantity |
|-----------|---------:|
| LPC2129 ARM7 Microcontroller | 1 |
| IR Sensors | 2 |
| L298N Motor Driver | 1 |
| DC Motor | 1 |
| Conveyor Belt Mechanism | 1 |
| 16×2 LCD Display | 1 |
| Power Supply | 1 |
| Connecting Wires | As required |

---

## 💻 Software Requirements

- Keil uVision 4
- Flash Magic
- Embedded C
- LPC21XX Header Files

---

## ⚙️ Working Principle

1. **IR Sensor 1** detects an incoming product.
2. The **LPC2129 microcontroller** receives the sensor signal.
3. The controller activates the **L298N motor driver**.
4. The **DC motor** starts rotating the conveyor belt.
5. The product moves along the conveyor.
6. **IR Sensor 2** detects the product at the output.
7. The microcontroller increments the product count.
8. The updated count is displayed on the **16×2 LCD**.

---

## 🏗 System Block Diagram

```text
                 +------------------+
                 |   Power Supply   |
                 +--------+---------+
                          |
                          v
               +----------------------+
               |    LPC2129 ARM7      |
               |   Microcontroller    |
               +----------------------+
                 |        |        |
                 |        |        +------> 16×2 LCD
                 |        |
IR Sensor 1 -----+        +------> L298N Motor Driver
(Product Detect)                   |
                                   |
                               DC Motor
                                   |
                              Conveyor Belt
                                   |
                            Product Movement
                                   |
                           IR Sensor 2
                         (Product Counting)
```

---

## 🔄 System Workflow

```text
Product Arrives
       │
       ▼
IR Sensor 1 Detects Product
       │
       ▼
LPC2129 Receives Signal
       │
       ▼
Motor Driver Activates
       │
       ▼
Conveyor Moves Product
       │
       ▼
IR Sensor 2 Detects Product
       │
       ▼
Count Incremented
       │
       ▼
LCD Displays Updated Count
```

---

## 📂 Project Structure

```text
Smart-Conveyor-System/
│
├── Source Code/
│   ├── main.c
│   ├── lcd.c
│   ├── lcd.h
│   ├── motor.c
│   ├── motor.h
│   ├── sensor.c
│   └── sensor.h
│
├── Keil Project/
│
├── Circuit Diagram/
│
├── Documentation/
│
└── README.md
```

> *The folder names above are provided as a suggested project organization and may vary depending on your repository.*

---

## 🚀 Applications

- Manufacturing Industries
- Product Counting Systems
- Packaging Plants
- Assembly Line Automation
- Industrial Automation
- Smart Factory Demonstrations
- Educational Embedded Systems Projects

---

## 🔮 Future Enhancements

- IoT-based remote monitoring
- Wi-Fi/Bluetooth connectivity
- Cloud data logging
- Defective product detection
- Conveyor speed control using PWM
- Mobile application monitoring
- Automatic report generation
- Barcode/QR code integration

---

## 📷 Project Images

Add screenshots or photographs here.

- Hardware setup
- Conveyor prototype
- LCD output
- Circuit diagram

---

## 👨‍💻 Author

Poomalar R

Electrical and Electronics Engineering (EEE)  
Embedded Systems Enthusiast

GitHub: https://github.com/poomalar258-code

---

## 📜 License

This project is developed for **educational and academic purposes**. You are welcome to use and modify it for learning, research, and non-commercial projects.

---

## ⭐ Support

If you found this project useful, consider giving the repository a **⭐ Star** on GitHub.
