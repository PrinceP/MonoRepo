#include "gtest/gtest.h"
#include "src/lib/Stacks/Stacks.h"

TEST(StacksShould, ReturnHelloWorld){
	Stacks *out = new Stacks();
	std::string actual = out->getStacksMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
