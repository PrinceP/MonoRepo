#include "gtest/gtest.h"
#include "src/lib/LinearSearch/LinearSearch.h"

TEST(SearchShould, ReturnSearch){
	LinearSearch *ls = new LinearSearch();
	std::string actual = ls->getSearch();
	std::string expected = "0";
	EXPECT_EQ(expected, actual);
}
