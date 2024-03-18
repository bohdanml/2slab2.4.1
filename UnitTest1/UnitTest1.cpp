#include "pch.h"
#include "CppUnitTest.h"
#include "../2slab2.4.1/matrix.h"
#include "../2slab2.4.1/main.cpp"
#include "../2slab2.4.1/matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix mat1(1, 8);
			Matrix mat2(1, 8);
			Matrix result = mat1 + mat2;
			Assert::AreEqual(16, result.getValue(0, 0));
		}
	};
}
