#include <cstdint>
#include <cstring>
#include <iostream>

struct Pair {
    std::uint8_t lo;
    std::uint8_t hi;
};

std::uint16_t join(Pair p) {
    std::uint16_t value = 0;
    std::memcpy(&value, &p, sizeof(value));
    return value;
}

int main() {
    std::cout << join({0x34, 0x12}) << ' ' << join({0x2C, 0x01}) << '\n';
    return 0;
}
