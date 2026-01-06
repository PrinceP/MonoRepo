#include "gtest/gtest.h"
#include "src/lib/Heap/Heap.h"

TEST(HeapShould, ReturnHelloWorld){
	Heap *out = new Heap();
	std::string actual = out->getHeapMessage();
	std::string expected = "Hello World!";
	EXPECT_EQ(expected, actual);
}
