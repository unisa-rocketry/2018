# Flight Computer

Repository for design of IMU by UniSA Rocketry Avionics team. 

3 modules: Accelerometer, Gyroscope & Magnetometer.

Prototyped on Arduino, ideally switch to a smaller, lower power microcontroller for final implementation. Plan for single-board IMU using I2C.

# Accelerometer:

- Status: 
  - Prototyped on Arduino using XC4478 (3 DOF) from Jaycar.
  - Outputs g-force reading on XYZ axes to serial port.
  - Data logged to .txt file using CoolTermWin, and plotted in Excel manually.
   
 - To Do:
      - Set up real time data logging & plotting system in MATLAB/Simulink. 
      - Implement filter to minimise noisy data.
        - Kalman Filter / averaging system.
      - Calibrate the accelerometer.
        
 # Gyroscope:
 
 - Status:
    - N/A
  
  - To Do:
    - Purchase suitable gyroscope shield for Arduino.
    
  # Magnetometer:
  
   - Status:
      - Purchased XC4496 (3DOF) from Jaycar. 
    
   - To Do:
      - Implement simple compass system on Arduino.
