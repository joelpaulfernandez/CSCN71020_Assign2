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
		TEST_METHOD(AreaFunction)
		{
			int result = 0;
			int l = 45, b = 20;
			result = getArea(&l, &b);
			Assert::AreEqual(900, result);

		}
		TEST_METHOD(WidthFunction1)
		{
			int result = 0;
			int w = 99;
			setWidth(w, &result);
			Assert::AreEqual(99, result);




		}
		TEST_METHOD(WidthFunction2)
		{
			int result = 0;
			int w = 1;
			setWidth(w, &result);
			Assert::AreEqual(1, result);




		}
		TEST_METHOD(WidthFunction3)
		{
			int result = 0;
			int w = 25;
			setWidth(w, &result);
			Assert::AreEqual(25, result);


		}
		TEST_METHOD(LengthFunction1)
		{
			int result = 0;
			int l = 99;
			setLength(l, &result);
			Assert::AreEqual(99, result);




		}
		TEST_METHOD(LengthFunction2)
		{
			int result = 0;
			int l = 1;
			setLength(l, &result);
			Assert::AreEqual(1, result);




		}
		TEST_METHOD(LengthFunction3)
		{
			int result = 0;
			int l = 25;
			setLength(l, &result);
			Assert::AreEqual(25, result);




		}









	};
}
