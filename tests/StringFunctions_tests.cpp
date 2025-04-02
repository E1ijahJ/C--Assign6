#include <gtest/gtest.h>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

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


std::pair<std::vector<char>, int> mostCommonChars(const std::string& input);

TEST(MostCommonCharsTest, ReturnsSingleMostCommon) {
    auto result = mostCommonChars("banana");
    EXPECT_EQ(result.second, 3);
    ASSERT_EQ(result.first.size(), 1);
    EXPECT_EQ(result.first[0], 'a');
}


TEST(MostCommonCharsTest, ReturnsAllTiedCharacters) {
    auto result = mostCommonChars("aabbcc");
    EXPECT_EQ(result.second, 2);
    
    std::vector<char> expected = {'a', 'b', 'c'};
    ASSERT_EQ(result.first.size(), expected.size());

    for (char ch : expected) {
        EXPECT_TRUE(std::find(result.first.begin(), result.first.end(), ch) != result.first.end());
    }
}