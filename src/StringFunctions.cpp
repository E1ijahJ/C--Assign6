#include <string>
#include <unordered_map>
#include <vector>
#include <utility>
#include <algorithm>

/// @brief Reverse the the inputed string 
/// @param input the orginal string that was inputed 
/// @return a nre string that is returned that is returned in reverse order
std::string reverseString(const std::string& input) {
    std::string reversed = input;
    int left = 0;
    int right = reversed.length() - 1;

    while (left < right) {
        std::swap(reversed[left], reversed[right]);
        ++left;
        --right;
    }

    return reversed;
}
/// @brief Sees if the inputed string is a palindrome, which is read the same forwards as it is a backward
/// @param input the inputed string to chek
/// @return it returns either true or false if it is a palindrome or not 
bool isPalindrome(const std::string& input) {
    int left = 0;
    int right = input.length() - 1;

    while (left < right) {
        if (input[left] != input[right]) {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}
/// @brief Finds the most common charachter in a string 
/// @param input the inputed string 
/// @return returns the charactersthat were the most common and then retursnthe number of times theu appeared 
std::pair<std::vector<char>, int> mostCommonChars(const std::string& input) {
    std::unordered_map<char, int> freq;
    int maxCount = 0;

    for (char ch : input) {
        freq[ch]++;
        if (freq[ch] > maxCount) {
            maxCount = freq[ch];
        }
    }

    std::vector<char> mostCommon;
    for (const auto& pair : freq) {
        if (pair.second == maxCount) {
            mostCommon.push_back(pair.first);
        }
    }

    return {mostCommon, maxCount};
}