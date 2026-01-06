#include "gtest/gtest.h"
#include "src/lib/CPlusPlus/CPlusPlus.h"

TEST(CPlusPlusShould, ReturnHelloWorld){
	CPlusPlus *out = new CPlusPlus();
	std::string actual = out->getCPlusPlusMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
