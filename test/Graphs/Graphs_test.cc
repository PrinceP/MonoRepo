#include "gtest/gtest.h"
#include "src/lib/Graphs/Graphs.h"

TEST(GraphsShould, ReturnHelloWorld){
	Graphs *out = new Graphs();
	std::string actual = out->getGraphsMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
