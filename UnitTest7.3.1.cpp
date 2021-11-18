#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\7,3,1\7,3,1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest731
{
	TEST_CLASS(UnitTest731)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int S = 0;
			int** a = new int* [3];
			a[0]= new int[3]{ 2, 0,-2 };
			a[1] = new int[3]{ 1, -3,1 };
			a[2] = new int[3]{ 7, -3,-5 };
			Part1_Count(a, 3, 3, S);
			Assert::AreEqual( S, -2);

		}
	};
}
