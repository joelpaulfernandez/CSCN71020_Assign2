#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	#include "main.h"

}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(PerimeterFunction)
		{
			int result=0;
			int l = 20, b = 30;
			result = getPerimeter(&l, &b);
			Assert::AreEqual(100, result);



		}
		










	};
}
