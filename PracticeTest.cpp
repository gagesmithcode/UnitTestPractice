/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
	//Testing a false assertion
    bool actual = obj.isPalindrome("baa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, check_simple_sort)
{
	Practice obj;
	int first = 1, second = 2, third = 3;
	obj.sortDescending(&first, &second, &third);
	bool flag;
	if(first > second)
		flag = true;
	else
		flag = false;

	ASSERT_TRUE(flag);
}