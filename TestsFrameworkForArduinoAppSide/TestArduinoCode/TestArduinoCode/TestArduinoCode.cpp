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
	};
}
