#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_1/Lab05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(2.1, 0.1);
		}
	};
}
