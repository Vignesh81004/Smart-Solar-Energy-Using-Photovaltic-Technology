Smart Solar Energy Using Photovoltaic Technology
This project is a real-time solar energy monitoring system that uses Flask (Python) as the backend to simulate sensor data and HTML + JavaScript for the frontend to display temperature and humidity.

System Architecture and Design
1. Overview
The Smart Solar Energy Using Photovoltaic Technology system is designed to monitor and analyze solar energy parameters such as temperature, humidity, and power generation efficiency. The system consists of three main components:

Solar Panel & Sensors – Collects environmental and energy data.
Backend (Flask API) – Processes and serves data.
Frontend (Web UI) – Displays real-time information.
2. System Architecture
The system follows a client-server model:

1️⃣ Data Collection Layer (Hardware/Simulation)

Sensors (Temperature, Humidity, Voltage, Current)
Solar Panel for Energy Generation
Raspberry Pi / Microcontroller (Optional for real-world implementation)
2️⃣ Backend Processing Layer

Flask (Python) API for data processing
Simulated or actual sensor data generation
API endpoint to serve data (/get-data)
3️⃣ Frontend Presentation Layer

HTML, CSS, JavaScript for UI
Fetches real-time sensor data from Flask API
Updates temperature, humidity, and power metrics every 5 seconds


Screenshot

<img width="542" alt="Screenshot 2025-03-07 at 19 34 45" src="https://github.com/user-attachments/assets/6bc78b3e-de29-4151-90f3-fba50676e252" />



<img width="411" alt="Screenshot 2025-03-07 at 19 33 42" src="https://github.com/user-attachments/assets/247fdbb2-e8de-4ffb-afc8-06c3e015dbd7" />

