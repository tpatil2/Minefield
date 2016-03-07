/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"

class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;

	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

//for the location which is empty that is safe
TEST(FieldTest, LOC_IS_SAFE)
{
	Field minefield;
	ASSERT_EQ( EMPTY_HIDDEN, minefield.isSafe(2,5));

}


//for the location which is MINE that is not safe
TEST(FieldTest, LOC_IS_UNSAFE)
{
	Field minefield;
	ASSERT_EQ( MINE_HIDDEN, minefield.isSafe(3,5));

}


