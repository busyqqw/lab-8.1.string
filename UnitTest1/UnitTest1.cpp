#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1.string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char row[] = "nlo";
			int k = 1;
			int t = Count(row);
			Assert::AreEqual(k, t);
		}
	};
}
