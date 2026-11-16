#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point* p = new Point[3];
    p[0].x = 1;
    p[1].x = 2;
    p[2].x = 3;

    int sum = p[0].x + p[1].x + p[2].x;
    std::cout << sum << '\n';

    delete[] p;
    p = nullptr;
    return 0;
}
