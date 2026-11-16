#include <iostream>

std::uint8_t pack(const bool b[8]) {
    std::uint8_t result = 0;
    for (int i = 0; i < 8; ++i) {
        if (b[i]) {
            result |= (1u << i);
        }
    }
    return result;
}

int main() {
    bool bits[8] = {1, 0, 0, 1, 1, 0, 0, 0};
    std::uint8_t value = pack(bits);
    std::cout << static_cast<int>(value) << '\n';

    for (int i = 0; i < 8; ++i) {
        std::cout << ((value >> i) & 1u) << (i + 1 < 8 ? ' ' : '\n');
    }
    return 0;
}
