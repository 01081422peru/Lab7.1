#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 7;
			const int colCount = 5;

			int S = 0;
			int k = 0;

			int** Z = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				Z[i] = new int[colCount];

			for (int i = 0; i < rowCount; i++)
				for (int j = 0; j < colCount; j++)
					Z[i][j] = 2;

			Calc(Z, rowCount, colCount, S, k);
			Assert::AreEqual(S, 0);

			for (int i = 0; i < rowCount; i++)
				delete[] Z[i];
			delete[] Z;
		}
	};
}
