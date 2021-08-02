#include "gtest/gtest.h"
#include "src/lib/BinarySearch/BinarySearch.h"

TEST(BinarySearchShould, ReturnHelloWorld){
	BinarySearch *bs = new BinarySearch();
	int sample_arr[] = {1,2,3,4,5,6,7,8,9};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
    std::string actual1 = bs->getBinarySearchMessage(sample_arr, size_of_arr, 7);
    std::string actual2 = bs->getBinarySearchOptimize(sample_arr, size_of_arr, 7);
	std::string expected = "6";
	EXPECT_EQ(expected, actual1);
	EXPECT_EQ(expected, actual2);
	
	int sample_arr2[] = {6,7,8,9,1,2,3,4,5};
    int size_of_arr2 = sizeof(sample_arr2)/sizeof(int);
    actual1 = bs->getBinarySearchIndexOfMinimumRotatedArray(sample_arr2, size_of_arr2);
    expected = "4";
	EXPECT_EQ(expected, actual1);

}
