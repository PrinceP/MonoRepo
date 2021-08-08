#include "gtest/gtest.h"
#include "src/lib/Pointer/Pointer.h"

TEST(PointerShould, ReturnHelloWorld){
	Pointer *out = new Pointer();
	std::string actual = out->getPointerMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
