# 1 "C:\\Users\\julia\\AppData\\Local\\Temp\\tmpg73kf_0q"
#include <Arduino.h>
# 1 "C:/Users/julia/Documents/ININD_1/inindi_01/src/serial_comm_test.ino"
#include <Arduino.h>
void setup();
void loop();
#line 3 "C:/Users/julia/Documents/ININD_1/inindi_01/src/serial_comm_test.ino"
void setup()
{
  Serial.begin(115200);

  Serial.println("setup");
}

float i = 0;
void loop()
{
  i += 0.1;


  Serial.print("casa");
  Serial.println(i);


  Serial.print(">sin:");
  Serial.println(sin(i));


  Serial.print(">Sum:");
  Serial.println(0.8*sin(i)+0.2*cos(i));

  delay(50);
}