#ifndef ArduinoTestFramework
#define ArduinoTestFramework
#endif
// endif ArduinoTestFramework


#include "CppUnitTest.h"

#include "D:\pc_07_1tb_ssd\programming\Arduino\arduino_projektai_002\test_framework_00003\lib\Result.h"

#include "D:\pc_07_1tb_ssd\programming\Arduino\arduino_projektai_002\test_framework_00003\lib\ExecuteCmd.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestArduinoCode
{
	TEST_CLASS(TestArduinoCode)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Result readD00 = DigitalReadCmd(0);

			Result readD01 = DigitalReadCmd(1);

			Result readD02 = DigitalReadCmd(2);

			Assert::AreEqual(readD00.functionNr, 1);

			Assert::AreEqual(readD01.pinNumber, 1);

			Assert::AreEqual(readD01.functionNr, 1);

			Assert::AreEqual(readD02.functionNr, 1);
		}

		TEST_METHOD(AnalogReadTest)
		{
			Result analogReadA03 = AnalogReadCmd(3);

			Result analogReadA04 = AnalogReadCmd(4);

			Result analogReadA05 = AnalogReadCmd(5);

			Assert::AreEqual(analogReadA03.functionNr, 3);

			Assert::AreEqual(analogReadA03.pinNumber, 3);

			Assert::AreEqual(analogReadA03.functionResult, 0);

			Assert::AreEqual(analogReadA04.functionNr, 3);

			Assert::AreEqual(analogReadA04.pinNumber, 4);

			Assert::AreEqual(analogReadA04.functionResult, 0);

			Assert::AreEqual(analogReadA05.functionNr, 3);

			Assert::AreEqual(analogReadA05.pinNumber, 5);

			Assert::AreEqual(analogReadA05.functionResult, 0);
		}

		TEST_METHOD(AnalogWriteTest)
		{
			Result analogWriteA06 = DigitalReadCmd(6);

			Result analogWriteA07 = DigitalReadCmd(7);

			Result analogWriteA08 = DigitalReadCmd(8);

			Assert::AreEqual(analogWriteA06.functionNr, 1);

			Assert::AreEqual(analogWriteA06.pinNumber, 6);

			Assert::AreEqual(analogWriteA06.functionResult, 0);

			Assert::AreEqual(analogWriteA07.functionNr, 1);

			Assert::AreEqual(analogWriteA07.pinNumber, 7);

			Assert::AreEqual(analogWriteA07.functionResult, 0);

			Assert::AreEqual(analogWriteA08.functionNr, 1);

			Assert::AreEqual(analogWriteA08.pinNumber, 8);

			Assert::AreEqual(analogWriteA08.functionResult, 0);
		}
	};
}
