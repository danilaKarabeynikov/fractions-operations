#include "pch.h"
#include "../FractionsOperations/FractionsOperations.hpp"

TEST(Addition, t1)
{
	FractionsOperations first(3, 4);
	FractionsOperations second(5, 6);
	FractionsOperations result = first + second;
	ASSERT_EQ(19, result.GetNum());
	ASSERT_EQ(12, result.GetDen());
}


TEST(AdditionWithReduction, t2)
{
	FractionsOperations first(5, 4);
	FractionsOperations second(3, 4);
	FractionsOperations result = first + second;
	ASSERT_EQ(2, result.GetNum());
	ASSERT_EQ(1, result.GetDen());
}


TEST(Multiplication, t1)
{
	FractionsOperations first(-5, 4);
	FractionsOperations second(1, 6);
	FractionsOperations result = first * second;
	ASSERT_EQ(-5, result.GetNum());
	ASSERT_EQ(24, result.GetDen());
}

TEST(MultiplicationWithReduction, t2)
{
	FractionsOperations first(3, 4);
	FractionsOperations second(5, 6);
	FractionsOperations result = first * second;
	ASSERT_EQ(5, result.GetNum());
	ASSERT_EQ(8, result.GetDen());
}