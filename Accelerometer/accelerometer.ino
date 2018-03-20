#define accel_X  A0
#define accel_Y  A1
#define accel_Z  A2

void setup() {
  Serial.begin(9600);
}

void loop () {
  
float voltage_X, voltage_Y, voltage_Z;  //output voltages of accelerometer
float g_X, g_Y, g_Z;  // g force experienced on each axis

// use 3.3V Vcc
// assume output sensitivity of Vcc/10 mV/g - so 330mv/g
// 0g output is at Vcc/2 so 1.65V
// so at accel of 1g, output =~ 1.65+330m = 1.935V


voltage_X = analogRead(accel_X) * (5.0/1023.0) - 1.65;   //convert from 10bit ADC output (0 - 1023) to analog voltage (0 - 5V)
g_X = voltage_X / 0.33; // convert from voltage to g's (using Vout = no of g's * 0.33)                                                   
Serial.print("X: ");
Serial.print(g_X);

voltage_Y = analogRead(accel_Y) * (5.0/1023.0) - 1.65; 
g_Y = voltage_Y / 0.33;   
Serial.print("  Y: ");
Serial.print(g_Y);

voltage_Z = analogRead(accel_Z) * (5.0/1023.0) - 1.65; 
g_Z = voltage_Z / 0.33;   
Serial.print("  Z: ");
Serial.print(g_Z);

Serial.println();

}


