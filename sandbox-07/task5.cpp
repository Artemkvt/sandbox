#include <iostream>

void print_binary(int n) {
    if (n <= 0) return;
    int bit = 1;
    while (bit <= n) bit <<= 1;
    bit >>= 1;

    while (bit > 0) {
        std::cout << ((n & bit) ? '1' : '0');
        bit >>= 1;
    }
    std::cout << '\n';
}

int main() {
    print_binary(13);
    print_binary(1);
    print_binary(8);
    return 0;
}
