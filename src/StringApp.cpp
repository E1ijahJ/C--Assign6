#include <iostream>
#include <string>
#include <vector>
#include "StringFunctions.h"  // header for the 3 functions

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Reverse
    std::string reversed = reverseString(input);
    std::cout << "Reversed: " << reversed << "\n";

    // Palindrome check
    if (isPalindrome(input)) {
        std::cout << "Palindrome: Yes\n";
    } else {
        std::cout << "Palindrome: No\n";
    }

    // Most common character(s)
    auto [chars, count] = mostCommonChars(input);
    std::cout << "Most common character(s): ";
    for (char ch : chars) {
        std::cout << "'" << ch << "' ";
    }
    std::cout << "appeared " << count << " time(s).\n";

    return 0;
}