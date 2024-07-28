#ifndef EXECUTE_CMD_H
#define EXECUTE_CMD_H

#include "Result.h"

Result result;

Result DigitalReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	result.functionResult = pin + result.functionNr;
#ifndef ArduinoTestFramework
	result.functionResult = digitalRead(pin);
#endif
	return result;
}

Result DigitalWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 2;
	result.functionResult = pin + result.functionNr;
#ifndef ArduinoTestFramework
	digitalWrite(pin, val);
#endif	
	result.functionResult = val;
	return result;
}

Result AnalogReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 3;
	result.functionResult = pin + result.functionNr;
#ifndef ArduinoTestFramework
	result.functionResult = analogRead(pin);
#endif	
	return result;
}

Result AnalogWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 4;
	result.functionResult = pin + result.functionNr;	
#ifndef ArduinoTestFramework
	analogWrite(pin, val);
#endif	
	result.functionResult = val;
	return result;
}

#endif
// endif EXECUTE_CMD_H