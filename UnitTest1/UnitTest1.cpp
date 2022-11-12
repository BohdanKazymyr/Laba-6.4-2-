#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 6.4(2)/Laba 6.4(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const size = 13;
			int a[size];
			int i = 0;
			Create(a, size, i);
			Print(a, size, i);
			Min(a, size, 0, a[1]);
			Sum(a, size - 1);
			foo(size, a);
		}
	};
}
