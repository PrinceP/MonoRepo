#include "gtest/gtest.h"
#include "src/lib/Sorting/Sorting.h"

TEST(SortingShould, ReturnHelloWorld){
	Sorting *out = new Sorting();
	std::vector<int> sample_arr = {9, 7, 5, 3, 1};
    std::vector<int> actual1 = out->getBubbleSortingMessage(sample_arr);
	std::vector<int> actual2 = out->getInsertionSortingMessage(sample_arr);
	std::vector<int> actual3 = out->getSelectionSortingMessage(sample_arr);
	std::vector<int> actual4 = out->getCountingSortingMessage(sample_arr);
	
	

	std::vector<int> expected = {1, 3, 5, 7, 9};

	ASSERT_EQ(actual1.size(), expected.size()) << "Vectors expected and actual are of unequal length";

	for (int i = 0; i < expected.size(); ++i) {
		EXPECT_EQ(actual1[i], expected[i]) << "Vectors expected and actual differ at index " << i;
	}

	ASSERT_EQ(actual2.size(), expected.size()) << "Vectors expected and actual are of unequal length";

	for (int i = 0; i < expected.size(); ++i) {
		EXPECT_EQ(actual2[i], expected[i]) << "Vectors expected and actual differ at index " << i;
	}

	ASSERT_EQ(actual3.size(), expected.size()) << "Vectors expected and actual are of unequal length";

	for (int i = 0; i < expected.size(); ++i) {
		EXPECT_EQ(actual3[i], expected[i]) << "Vectors expected and actual differ at index " << i;
	}
	
	ASSERT_EQ(actual4.size(), expected.size()) << "Vectors expected and actual are of unequal length";

	for (int i = 0; i < expected.size(); ++i) {
		EXPECT_EQ(actual4[i], expected[i]) << "Vectors expected and actual differ at index " << i;
	}



}
