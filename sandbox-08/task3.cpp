#include <iostream>

bool is_hex_digit(char c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

int hex_value(const char* s) {
    int value = 0;
    for (int i = 2; s[i] != '\0'; ++i) {
        char c = s[i];
        value = value * 16 + (
            (c >= '0' && c <= '9') ? (c - '0') :
            (c >= 'a' && c <= 'f') ? (c - 'a' + 10) :
            (c - 'A' + 10)
        );
    }
    return value;
}

int main() {
    std::cout << hex_value("0x41") << ' ';
    std::cout << hex_value("0xff") << ' ';
    std::cout << hex_value("0x1A2") << '\n';
    return 0;
}
