#include "gtest/gtest.h"
#include "src/lib/Greeting/Greeting.h"

TEST(GreetingShould, ReturnHelloWorld){
	Greeting *out = new Greeting();
	std::string actual = out->getGreetingMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
