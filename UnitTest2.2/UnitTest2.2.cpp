#include "pch.h"
#include "CppUnitTest.h"
#include"../oop_2.2/Number.h"
#include"../oop_2.2/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest22
{
	TEST_CLASS(UnitTest22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a(5);
			Number b(3);

			double result = a - b;

			Assert::AreEqual(2, result, 0.1);
		}
	};
}
