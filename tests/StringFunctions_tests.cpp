#include <gtest/gtest.h>
#include <string>

// Declare the function (since it's in another file)
std::string reverseString(const std::string& input);

TEST(ReverseStringTest, ReversesRegularString) {
    EXPECT_EQ(reverseString("hello"), "olleh");
}


bool isPalindrome(const std::string& input);

TEST(IsPalindromeTest, DetectsPalindrome) {
    EXPECT_TRUE(isPalindrome("racecar"));
    EXPECT_TRUE(isPalindrome("madam"));
    EXPECT_FALSE(isPalindrome("hello"));
    EXPECT_FALSE(isPalindrome("abcde"));
}

