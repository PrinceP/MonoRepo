#include "gtest/gtest.h"
#include "src/lib/Recursion/Recursion.h"

TEST(RecursionShould, ReturnHelloWorld){
	Recursion *out = new Recursion();
	std::string actual = out->getRecursionMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
