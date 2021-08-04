#include "gtest/gtest.h"
#include "src/lib/Rotation1D/Rotation1D.h"

TEST(Rotation1DShould, ReturnHelloWorld){
	Rotation1D *out = new Rotation1D();

	std::vector<int> sample_arr = {1, 3, 5, 7, 9};
    std::vector<int> actual = out->getRotation1DMessage(sample_arr , 2);
	std::vector<int> expected = {7, 9, 1, 3, 5};

	ASSERT_EQ(actual.size(), expected.size()) << "Vectors expected and actual are of unequal length";

	for (int i = 0; i < expected.size(); ++i) {
		EXPECT_EQ(actual[i], expected[i]) << "Vectors expected and actual differ at index " << i;
	}
}
