#include "gtest/gtest.h"
#include "src/lib/MyVector/MyVector.h"

TEST(MyVectorShould, ReturnHelloWorld){
	MyVector *out = new MyVector();
	std::string actual = out->getMyVectorMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
