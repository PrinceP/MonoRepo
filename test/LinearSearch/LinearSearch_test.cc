#include "gtest/gtest.h"
#include "src/lib/LinearSearch/LinearSearch.h"

TEST(SearchShould, ReturnSearch){
	LinearSearch *ls = new LinearSearch();
	int sample_arr[] = {2, 123, 3, 6, 4, 63, 7743, 21, 1};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
    std::string actual = ls->getSearch(sample_arr, size_of_arr, 21);
	std::string expected = "7";
	EXPECT_EQ(expected, actual);
}
