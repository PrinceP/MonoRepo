#include "gtest/gtest.h"
#include "src/lib/Tries/Tries.h"

TEST(TriesShould, ReturnHelloWorld){
	Tries *out = new Tries();
	std::string actual = out->getTriesMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
