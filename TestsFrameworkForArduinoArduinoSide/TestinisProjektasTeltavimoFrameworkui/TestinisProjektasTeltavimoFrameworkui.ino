
#include "D:\pc_07_1tb_ssd\programming\Arduino\arduino_projektai_002\TestsFrameworkForArduino\TestsFrameworkForArduino\lib\Result.h"

#include "D:\pc_07_1tb_ssd\programming\Arduino\arduino_projektai_002\TestsFrameworkForArduino\TestsFrameworkForArduino\lib\ExecuteCmd.h"


Result r;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  r = DigitalReadCmd(6);
  Serial.print("  |||  ");
  Serial.print(r.pinNumber);
  Serial.print("   ");
  Serial.print(r.functionNr);
  Serial.print("   ");
  Serial.print(r.functionResult);



  r = DigitalReadCmd(7);
  Serial.print("  |||  ");
  Serial.print(r.pinNumber);
  Serial.print("   ");
  Serial.print(r.functionNr);
  Serial.print("   ");
  Serial.print(r.functionResult);


  r = DigitalReadCmd(8);
  Serial.print("  |||  ");
  Serial.print(r.pinNumber);
  Serial.print("   ");
  Serial.print(r.functionNr);
  Serial.print("   ");
  Serial.print(r.functionResult);


  r = DigitalReadCmd(9);
  Serial.print("  |||  ");
  Serial.print(r.pinNumber);
  Serial.print("   ");
  Serial.print(r.functionNr);
  Serial.print("   ");
  Serial.print(r.functionResult);
  Serial.print("  |||  ");



  Serial.println("\n\n");

  delay(400);
}
