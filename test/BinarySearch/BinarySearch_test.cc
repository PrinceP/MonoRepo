#include "gtest/gtest.h"
#include "src/lib/BinarySearch/BinarySearch.h"

TEST(BinarySearchShould, ReturnHelloWorld){
	BinarySearch *out = new BinarySearch();
	std::string actual = out->getBinarySearchMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
