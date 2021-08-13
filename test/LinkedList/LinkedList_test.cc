#include "gtest/gtest.h"
#include "src/lib/LinkedList/LinkedList.h"

TEST(LinkedListShould, ReturnHelloWorld){
	LinkedList *out = new LinkedList();
	std::string actual = out->getLinkedListMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
