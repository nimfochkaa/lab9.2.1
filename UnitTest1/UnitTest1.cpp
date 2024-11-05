#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../9.2.1/calculate.h"
#include "../9.2.1/calculate.cpp"
#include "../9.2.1/macros.h"
#include "../9.2.1/debug.h"
#include "../9.2.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x1 = 5.0, y1 = 3.0, z1 = 2.0;
			double x2 = 5.0, y2 = 3.0, z2 = 1.0;

			double expected1 = 9.0; 
			double expected2 = 2.0; 

			double result1 = calculateW(x1, y1, z1);
			double result2 = calculateW(x2, y2, z2);

			Assert::AreEqual(expected1, result1, L"Result1 не збігається з очікуваним значенням");
			Assert::AreEqual(expected2, result2, L"Result2 не збігається з очікуваним значенням");
		}
	};
}
