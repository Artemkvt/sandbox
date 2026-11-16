#include <iostream>

int insertion_sort_and_count(int* a, int n) {
    int moves = 0;

    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
            ++moves;
        }

        a[j + 1] = key;
    }

    return moves;
}

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int moves = insertion_sort_and_count(a, 5);

    for (int i = 0; i < 5; ++i) {
        std::cout << a[i] << (i + 1 < 5 ? ' ' : '\n');
    }
    std::cout << moves << '\n';
    return 0;
}
