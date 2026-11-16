#include <iostream>

int main() {
    int best = 1;
    int best_steps = -1;

    for (int n = 1; n <= 99; ++n) {
        int x = n;
        int steps = 0;

        while (x != 1) {
            if (x % 2 == 0) {
                x /= 2;
            } else {
                x = 3 * x + 1;
            }
            ++steps;
        }

        if (steps > best_steps) {
            best = n;
            best_steps = steps;
        }
    }

    std::cout << best << ' ' << best_steps << '\n';
    return 0;
}
