#include "gtest/gtest.h"
#include "src/lib/Hashing/Hashing.h"

TEST(HashingShould, ReturnHelloWorld){
	Hashing *out = new Hashing();
	std::string actual = out->getHashingMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
