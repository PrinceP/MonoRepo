#include "gtest/gtest.h"
#include "src/lib/MyString/MyString.h"

TEST(MyStringShould, ReturnHelloWorld){
	MyString *out = new MyString();
	
	std::string actual = out->getMyStringRouteMessage("Test");
	std::string expected = "NNE";
	EXPECT_EQ(expected, actual);
}
