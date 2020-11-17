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

TEST(PracticeTest, is_simple_capital_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Racecar");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("bob");
    ASSERT_TRUE(actual);
}

// Examples of a Sad Test Case
TEST(PracticeTest, symbol_notpalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(";+");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, mutiple_word_palindrome )
{
    Practice obj;
    bool actual = obj.isPalindrome("Avid diva");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, multiple_word_palindrome2 )
{
    Practice obj;
    bool actual = obj.isPalindrome("Able was I ere I saw Elba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_palindrome2 )
{
    Practice obj;
    bool actual = obj.isPalindrome("12321");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_decending)
{
	Practice obj;
	int first = 2, second = 34, third = 23;
	obj.sortDescending(first,second,third);
	ASSERT_GT(first,second);
	ASSERT_GT(second, third);
	ASSERT_GT(first,third);
}

TEST(PracticeTest, is_decending_dos)
{
	Practice obj;
	int first = 45, second = 34, third = 56;
	obj.sortDescending(first,second,third);
	ASSERT_GT(first,second);
	ASSERT_GT(second, third);
	ASSERT_GT(first,third);
}

TEST(PracticeTest, is_decending_tres)
{
	Practice obj;
	int first = 26, second = 34, third = 56;
	obj.sortDescending(first,second,third);
	ASSERT_GT(first,second);
	ASSERT_GT(second, third);
	ASSERT_GT(first,third);
}