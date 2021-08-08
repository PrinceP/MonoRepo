#include "gtest/gtest.h"
#include "src/lib/ArrayTwoD/ArrayTwoD.h"

TEST(ArrayTwoDShould, ReturnHelloWorld){
	ArrayTwoD *out = new ArrayTwoD();
	int inputArray[][10] = {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};

	std::string actual = out->getArrayTwoDSpiralMessage(inputArray, 4, 4);
	std::string expected = "";
	EXPECT_EQ(expected, actual);
}
