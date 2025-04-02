#include <string>

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