#include "gtest/gtest.h"
#include "src/lib/BinarySearch/BinarySearch.h"

TEST(BinarySearchShould, ReturnHelloWorld){
	BinarySearch *bs = new BinarySearch();
	int sample_arr[] = {1,2,3,4,5,6,7,8,9};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
    std::string actual1 = bs->getBinarySearchMessage(sample_arr, size_of_arr, 7);
    std::string actual2 = bs->getBinarySearchOptimize(sample_arr, size_of_arr, 7);
	std::string actual3 = bs->getBinarySearchInfiniteArray(sample_arr,7);
	std::string expected = "6";
	
	EXPECT_EQ(expected, actual1);
	EXPECT_EQ(expected, actual2);
	EXPECT_EQ(expected, actual3);
	
	
	int sample_arr2[] = {6,7,8,9,1,2,3,4,5};
    int size_of_arr2 = sizeof(sample_arr2)/sizeof(int);
    actual1 = bs->getBinarySearchIndexOfMinimumRotatedArray(sample_arr2, size_of_arr2);
    expected = "4";
	EXPECT_EQ(expected, actual1);

	int sample_arr3[] = {10,22,28,29,30,40};
    int size_of_arr3 = sizeof(sample_arr3)/sizeof(int);
    actual1 = bs->getClosestPair(sample_arr3, size_of_arr3, 54);
    expected = "22+30";
	EXPECT_EQ(expected, actual1);

	

}
