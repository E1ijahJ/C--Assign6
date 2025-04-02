#include <string>
#include <unordered_map>
#include <vector>
#include <utility>
#include <algorithm>


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