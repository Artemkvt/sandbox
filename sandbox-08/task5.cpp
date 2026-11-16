#include <cstdlib>
#include <iomanip>
#include <iostream>

bool check_nmea(const char* s) {
    int sum = 0;
    int i = 1;
    while (s[i] != '*' && s[i] != '\0') {
        sum ^= static_cast<unsigned char>(s[i]);
        ++i;
    }
    if (s[i] != '*') return false;

    int expected = 0;
    int pos = i + 1;
    if (s[pos] == '\0' || s[pos + 1] == '\0') return false;
    expected = std::strtol(s + pos, nullptr, 16);

    return sum == expected;
}

int main() {
    const char* good = "$GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";
    const char* bad = "$GPGGA,123519,4807.039,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47";
    std::cout << check_nmea(good) << ' ' << check_nmea(bad) << '\n';
    return 0;
}
