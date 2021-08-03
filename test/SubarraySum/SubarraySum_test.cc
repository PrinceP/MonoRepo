#include "gtest/gtest.h"
#include "src/lib/SubarraySum/SubarraySum.h"

TEST(SubarraySumShould, ReturnHelloWorld){
	SubarraySum *out = new SubarraySum();
	int sample_arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
	std::string actual = out->getSubarraySumMessage(sample_arr, size_of_arr);
	std::string expected = "11";
	EXPECT_EQ(expected, actual);
}
