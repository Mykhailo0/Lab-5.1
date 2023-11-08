#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Гіук\OneDrive\Документи\source\repos\Lab 5.1\Lab 5.1\Lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int x = 4;
            int test = p(x);

            Assert::AreEqual(test, -55, 0.0001); 
        }
    };
}