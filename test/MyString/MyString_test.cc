#include "gtest/gtest.h"
#include "src/lib/MyString/MyString.h"

TEST(MyStringShould, ReturnHelloWorld){
	MyString *out = new MyString();
	char testArray[] = "SNN NE WE";
	std::string actual = out->getMyStringRouteMessage(testArray);
	int actual1 = out->getMyStringCount(testArray);

	std::string expected = "NNE";
	int expected1 = 2;
	EXPECT_EQ(expected, actual);
	EXPECT_EQ(expected1, actual1);
}
