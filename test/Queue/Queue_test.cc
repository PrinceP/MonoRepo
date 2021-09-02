#include "gtest/gtest.h"
#include "src/lib/Queue/Queue.h"

TEST(QueueShould, ReturnHelloWorld){
	Queue *out = new Queue();
	std::string actual = out->getQueueMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
