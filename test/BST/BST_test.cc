#include "gtest/gtest.h"
#include "src/lib/BST/BST.h"

TEST(BSTShould, ReturnHelloWorld){
	BST *out = new BST();
	std::string actual = out->getBSTMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
