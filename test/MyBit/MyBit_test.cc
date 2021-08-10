#include "gtest/gtest.h"
#include "src/lib/MyBit/MyBit.h"

TEST(MyBitShould, ReturnHelloWorld){
	MyBit *out = new MyBit();
	std::string actual = out->getMyBitMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
