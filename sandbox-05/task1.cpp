#include <iostream>

bool is_palindrome(const char* s) {
    int len = 0;
    while (s[len] != '\0') {
        ++len;
    }

    for (int i = 0; i < len / 2; ++i) {
        char left = s[i];
        char right = s[len - 1 - i];

        if (left >= 'A' && left <= 'Z') {
            left = static_cast<char>(left - 'A' + 'a');
        }
        if (right >= 'A' && right <= 'Z') {
            right = static_cast<char>(right - 'A' + 'a');
        }

        if (left != right) {
            return false;
        }
    }

    return true;
}

int main() {
    const char* a = "Level";
    const char* b = "Radar";
    const char* c = "hello";

    std::cout << is_palindrome(a) << ' ';
    std::cout << is_palindrome(b) << ' ';
    std::cout << is_palindrome(c) << '\n';
    return 0;
}
