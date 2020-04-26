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

//Palindrome Tests

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("abd");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_single_word_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Rotator");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_double_word_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("my gym");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_single_letter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("C");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_number_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("123321");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("   ");
    ASSERT_TRUE(actual);
}

//Descending Tests

TEST(PracticeTest, is_not_descending)
{
	Practice obj;
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	obj.sortDescending(num1, num2, num3);
	EXPECT_LT(num2, num1);
	EXPECT_LT(num3, num2);
	EXPECT_LT(num3, num1);
}

TEST(PracticeTest, is_descending)
{
	Practice obj;
	int num1 = 3;
	int num2 = 2;
	int num3 = 1;
	obj.sortDescending(num1, num2, num3);
	EXPECT_LT(num2, num1);
	EXPECT_LT(num3, num2);
	EXPECT_LT(num3, num1);
}