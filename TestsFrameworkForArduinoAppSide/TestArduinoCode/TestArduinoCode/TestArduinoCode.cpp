#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestArduinoCode
{
	TEST_CLASS(TestArduinoCode)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Assert::AreEqual(5,5);
		}
	};
}
