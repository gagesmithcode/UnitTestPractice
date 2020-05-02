/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"
#include <cstdlib>

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

TEST(PracticeTest, check_ascending_list)
{
	Practice obj;
	int first = 1, second = 2, third = 3;
	obj.sortDescending(first, second, third);
	bool flag;
	if(first > second && second > third)
		flag = true;
	else
		flag = false;
	ASSERT_TRUE(flag);
}

TEST(PracticeTest, check_random_list)
{
	Practice obj;
	int first = rand()%999, second = rand()%999, third = rand()%999;

	obj.sortDescending(first, second, third);
	if(first > second && second > third)
		ASSERT_TRUE(true);
	else
		ASSERT_TRUE(false);
}

TEST(PracticeTest, check_same_list)
{
	Practice obj;
	int first = 0;
	int second = 0;
	int third = 0;

	obj.sortDescending(first, second, third);
	if(first == second && second == third)
		ASSERT_TRUE(true);
	else
		ASSERT_TRUE(false);

}

TEST(PracticeTest, check_second_third_swap)
{
	Practice obj;
	int first = 10, second = 3, third = 6;

	obj.sortDescending(first, second, third);
	if(first > second && second > third)
		ASSERT_TRUE(true);
	else
		ASSERT_TRUE(false);
}

TEST(PracticeTest, check_already_sorted)
{
	Practice obj;
	int first = 10, second = 7, third = 6;

	obj.sortDescending(first, second, third);
	if(first > second && second > third)
		ASSERT_TRUE(true);
	else
		ASSERT_TRUE(false);

}