#ifndef ArduinoTestFramework
#define ArduinoTestFramework
#endif
// endif ArduinoTestFramework

#include "CppUnitTest.h"

#include "D:\pc_07_1tb_ssd\programming\Arduino\arduino_projektai_002\TestsFrameworkForArduino\TestsFrameworkForArduino\lib\Result.h"

#include "D:\pc_07_1tb_ssd\programming\Arduino\arduino_projektai_002\TestsFrameworkForArduino\TestsFrameworkForArduino\lib\ExecuteCmd.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestArduinoCode
{
	TEST_CLASS(TestArduinoCode)
	{
	public:
		
		TEST_METHOD(DigitalReadTest)
		{
			Result readD00 = DigitalReadCmd(0);

			Result readD01 = DigitalReadCmd(1);

			Result readD02 = DigitalReadCmd(2);

			Assert::AreEqual(readD00.functionNr, 1);

			Assert::AreEqual(readD00.pinNumber, 0);

			Assert::AreEqual(readD00.functionResult, 1);

			Assert::AreEqual(readD01.functionNr, 1);

			Assert::AreEqual(readD01.pinNumber, 1);

			Assert::AreEqual(readD01.functionResult, 2);

			Assert::AreEqual(readD02.functionNr, 1);

			Assert::AreEqual(readD02.pinNumber, 2);

			Assert::AreEqual(readD02.functionResult, 3);
		}

		TEST_METHOD(DigitalWriteTest)
		{
			Result writeD04 = DigitalWriteCmd(4, 1);

			Result writeD05 = DigitalWriteCmd(5, 0);

			Result writeD06 = DigitalWriteCmd(6, 1);

			Assert::AreEqual(writeD04.functionNr, 2);

			Assert::AreEqual(writeD04.pinNumber, 4);

			Assert::AreEqual(writeD04.functionResult, 1);

			Assert::AreEqual(writeD05.functionNr, 2);

			Assert::AreEqual(writeD05.pinNumber, 5);

			Assert::AreEqual(writeD05.functionResult, 0);

			Assert::AreEqual(writeD06.functionNr, 2);

			Assert::AreEqual(writeD06.pinNumber, 6);

			Assert::AreEqual(writeD06.functionResult, 1);
		}

		TEST_METHOD(AnalogReadTest)
		{
			Result analogReadA03 = AnalogReadCmd(3);

			Result analogReadA04 = AnalogReadCmd(4);

			Result analogReadA05 = AnalogReadCmd(5);

			Assert::AreEqual(analogReadA03.functionNr, 3);

			Assert::AreEqual(analogReadA03.pinNumber, 3);

			Assert::AreEqual(analogReadA03.functionResult, 6);

			Assert::AreEqual(analogReadA04.functionNr, 3);

			Assert::AreEqual(analogReadA04.pinNumber, 4);

			Assert::AreEqual(analogReadA04.functionResult, 7);

			Assert::AreEqual(analogReadA05.functionNr, 3);

			Assert::AreEqual(analogReadA05.pinNumber, 5);

			Assert::AreEqual(analogReadA05.functionResult, 8);
		}

		TEST_METHOD(AnalogWriteTest)
		{
			Result analogWriteA06 = AnalogWriteCmd(6, 15);

			Result analogWriteA07 = AnalogWriteCmd(7, 35);

			Result analogWriteA08 = AnalogWriteCmd(8, 70);

			Assert::AreEqual(analogWriteA06.functionNr, 4);

			Assert::AreEqual(analogWriteA06.pinNumber, 6);

			Assert::AreEqual(analogWriteA06.functionResult, 15);

			Assert::AreEqual(analogWriteA07.functionNr, 4);

			Assert::AreEqual(analogWriteA07.pinNumber, 7);

			Assert::AreEqual(analogWriteA07.functionResult, 35);

			Assert::AreEqual(analogWriteA08.functionNr, 4);

			Assert::AreEqual(analogWriteA08.pinNumber, 8);

			Assert::AreEqual(analogWriteA08.functionResult, 70);
		}
	};
}
