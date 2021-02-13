//Include the Math Library (for log)
#include <math.h>
// Variable declarations/definitions:
int   Reading  = 0;    // stores reading from sensor (0-1023)
float Vtot     = 5.0;  // PS voltage on Arduino
float Vout     = 0.0;  // output voltage
float R_th     = 0.0;  // Thermistor resistance (Ohms)
float Actual_temp = 0.0;
int   wait     = 500;  // Wait time in millisec


void setup() {
  // put your setup code here, to run once:
  //Start up serial communications
  //(Baud rate ~ 9600 bits/second)
  Serial.begin(9600); 

}

void loop() {
  // read the value from the pin A2:
  Reading = analogRead(A1);
  // Vout calculation:
  Vout = Vtot*Reading/1023.0;
  // thermistor resistance calculation:
  R_th = V2R(Vout); 
  
// Relay Info back via Serial:
  //Serial.println(Reading);
  Serial.println(Vout, 4);
  //Serial.println(R_th); 

  //Actual_temp = R2T(R_th);

  //Serial.println(Actual_temp, 3); //outputting temperature
 
  //Break!:
  delay(wait);
}

//This function calculates temperature from VD voltage:
float V2R(float V) {
  float Rfix = 330; // fixed 10K/330 Ohm resistor (local variable)
  float Res  = 0.0;   // create local thermistor resistance variable

  Res = (V/(Vtot - V))*Rfix;    // Voltage divider relation                   
  return Res;                   //return the thermistor Resistance
}

//This function outputs the temperature detected in Celsius:
float R2T(float R){
  float Temp = 0.0;
  //constants
  float C_0 = 1.1020e-3;
  float C_1 = 2.5785e-4;
  float C_2 = -4.5663e-6;
  float C_3 = 3.4008e-7;

  Temp = C_0 + C_1*(log(R)) + C_2*pow(log(R), 2) + C_3*pow(log(R), 3); //Steinhart-Hart equation
  Temp = (1 / Temp) - 273; //converting to Celsius from Kelvin

  return Temp;

}
