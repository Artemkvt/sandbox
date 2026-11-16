#include <iomanip>
#include <iostream>

std::uint8_t mirror(std::uint8_t b) {
    std::uint8_t result = 0;
    for (int bit = 0; bit < 8; ++bit) {
        std::uint8_t src = (b >> bit) & 1u;
        std::uint8_t dst = src << (7 - bit);
        result |= dst;
    }
    return result;
}

int main() {
    std::cout << std::hex << std::nouppercase;
    std::cout << static_cast<int>(mirror(0x01)) << ' ';
    std::cout << static_cast<int>(mirror(0xA0)) << ' ';
    std::cout << static_cast<int>(mirror(0x3C)) << '\n';
    return 0;
}
