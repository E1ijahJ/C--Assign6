#include <gtest/gtest.h>
#include <string>

// Declare the function (since it's in another file)
std::string reverseString(const std::string& input);

TEST(ReverseStringTest, ReversesRegularString) {
    EXPECT_EQ(reverseString("hello"), "olleh");
}