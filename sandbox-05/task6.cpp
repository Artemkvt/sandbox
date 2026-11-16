#include <iostream>

void caesar(char* s, int shift) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char ch = s[i];

        if (ch >= 'a' && ch <= 'z') {
            s[i] = static_cast<char>('a' + (ch - 'a' + shift) % 26);
        } else if (ch >= 'A' && ch <= 'Z') {
            s[i] = static_cast<char>('A' + (ch - 'A' + shift) % 26);
        }
    }
}

int main() {
    char text[] = "Hello, World!";
    caesar(text, 3);
    std::cout << text << '\n';
    return 0;
}
