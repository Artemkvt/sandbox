#include <iostream>

int main() {
    int limit = 2147483647;
    long long product = 1;
    int n = 1;

    while (true) {
        product *= n;
        if (product > limit) {
            std::cout << n - 1 << '\n';
            break;
        }
        ++n;
    }

    return 0;
}
