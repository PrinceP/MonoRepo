#include "gtest/gtest.h"
#include "src/lib/Sorting/Sorting.h"

TEST(SortingShould, ReturnHelloWorld){
	Sorting *out = new Sorting();
	std::vector<int> sample_arr = {9, 7, 5, 3, 1};
    std::vector<int> actual = out->getBubbleSortingMessage(sample_arr);
	std::vector<int> expected = {1, 3, 5, 7, 9};

	ASSERT_EQ(actual.size(), expected.size()) << "Vectors expected and actual are of unequal length";

	for (int i = 0; i < expected.size(); ++i) {
		EXPECT_EQ(actual[i], expected[i]) << "Vectors expected and actual differ at index " << i;
	}
}
