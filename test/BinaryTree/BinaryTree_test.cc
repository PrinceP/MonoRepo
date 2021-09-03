#include "gtest/gtest.h"
#include "src/lib/BinaryTree/BinaryTree.h"

TEST(BinaryTreeShould, ReturnHelloWorld){
	BinaryTree *out = new BinaryTree();
	std::string actual = out->getBinaryTreeMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
