<h1 align="center">🗑️ Auto-Opening Smart Dustbin 🗑️ </h1>

This project is a 3D-printed smart dustbin that opens the lid when your hand gets close, using an Arduino, an ultrasonic sensor, and a servo motor with a string mechanism.

I made everything from scratch! 3D design, wiring, coding, testing.

---

## 🎥 Demo

https://github.com/user-attachments/assets/554ec292-c8a9-4672-9af2-762e023cff04

<table>
  <tr>
    <td>
      <a href="https://youtube.com/shorts/C3dCPq_3W3U?feature=share" target="_blank">
        <img src="https://github.com/user-attachments/assets/563a0748-fa39-4495-9535-c0b6158071ca" alt="Watch the video" width="400"/>
      </a>
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/563a0748-fa39-4495-9535-c0b6158071ca" alt="Photo" width="400"/>
    </td>
  </tr>
</table>




---

## 🛠️ Components
- Arduino Uno
- SG90 Servo Motor
- Ultrasonic Sensor
- Jumper wires
- String (used instead of servo arm)
- PLA filament (used for bin lid and body)
- TPU filament (used for flexible wheels)
- Power bank 

---

## 🔹 Circuit Diagram
![Circuit diagram](https://github.com/user-attachments/assets/c19f85a7-cf98-405f-914f-4468721a4f69)

---

## 🧪 How It Works
1. Ultrasonic sensor detects your hand (if < 50 cm)
2. Arduino tells the servo to pull the lid open using a string
3. Lid stays open for 3 seconds, then closes

---

## 📂 Files in This Project

| File/Folder           | Description                         |
|-----------------------|-------------------------------------|
| `dustbin.ino`         | Arduino code                        |
| `bin body mm.stl`     | 3D model of the bin body (PLA)      |
| `bin lid mm.stl`      | 3D model of the bin lid (PLA)       |
| `bin wheels mm.stl`   | 3D model of the wheels (TPU)        |
| `laserprint.dxf`      | Laser cut file for metal support    |
| `media/demo.mp4`      | Video showing final working model   |
| `media/circuit.png`   | Tinkercad-generated circuit diagram |

> **Note:** The ultrasonic sensor cutout in `bin body mm.stl` is made to fit my sensor size. **Check that your sensor dimensions match** before printing. Resize if needed to ensure it fits.

---

## 💡 Built With
- Fusion 360 (3D modeling)
- Tinkercad Circuits (for circuit planning)
- PLA & TPU filament
- Arduino IDE (coding + uploading)
