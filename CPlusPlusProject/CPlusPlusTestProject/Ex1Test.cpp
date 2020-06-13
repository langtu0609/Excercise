#include "pch.h"
#include "../CPlusPlusProject/Ex1.cpp"

namespace Ex1Test
{
	TEST(CalculateSumTest, WithTotalNumberShouldReturnTheSum) 
	{
		EXPECT_EQ(15, CalculateSum(5));
		EXPECT_NE(11, CalculateSum(4));
	}

	TEST(CalculateSumTest, WithNegativeNumberShouldThrowException) 
	{
		EXPECT_THROW(CalculateSum(-1), MyException);
	}
}
