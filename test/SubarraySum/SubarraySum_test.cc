#include "gtest/gtest.h"
#include "src/lib/SubarraySum/SubarraySum.h"

TEST(SubarraySumShould, ReturnHelloWorld){
	SubarraySum *out = new SubarraySum();
	int sample_arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
	std::string actual1 = out->getSubarraySumMessage(sample_arr, size_of_arr);
	std::string actual2 = out->getSubarraySumPrefixSumMessage(sample_arr, size_of_arr);
	std::string actual3 = out->getSubarraySumKandaneMessage(sample_arr, size_of_arr);

	int sample_arr2[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int size_of_arr2 = sizeof(sample_arr2)/sizeof(int);
	

	std::string actual4 = out->getSubarraySumFindMessage(sample_arr2, size_of_arr2, 23);

	
	
	std::string expected1 = "11";
	std::string expected2 = "1-4";
	
	EXPECT_EQ(expected1, actual1);
	EXPECT_EQ(expected1, actual2);
	EXPECT_EQ(expected1, actual3);
	EXPECT_EQ(expected2, actual4);
	
}
