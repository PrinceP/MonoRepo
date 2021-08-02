#include "gtest/gtest.h"
#include "src/lib/BinarySearch/BinarySearch.h"

TEST(BinarySearchShould, ReturnHelloWorld){
	BinarySearch *bs = new BinarySearch();
	int sample_arr[] = {1,2,3,4,5,6,7,8,9};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
    std::string actual = bs->getBinarySearchMessage(sample_arr, size_of_arr, 7);
	std::string expected = "6";
	EXPECT_EQ(expected, actual);
}
