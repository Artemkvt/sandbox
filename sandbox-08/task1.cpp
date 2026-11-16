#include <iostream>

int count_words(const char* text) {
    int words = 0;
    bool in_word = false;

    for (int i = 0; text[i] != '\0'; ++i) {
        char c = text[i];
        if (c == ' ' || c == ',' || c == '\t') {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            ++words;
        }
    }

    return words;
}

int main() {
    std::cout << count_words("one,two three") << ' ';
    std::cout << count_words("  a,,b ") << '\n';
    return 0;
}
