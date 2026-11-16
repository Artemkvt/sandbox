#include <iostream>

int parse_number(const char* s, int& i) {
    int value = 0;
    while (s[i] >= '0' && s[i] <= '9') {
        value = value * 10 + (s[i] - '0');
        ++i;
    }
    return value;
}

void evaluate(const char* expr) {
    int i = 0;
    int left = parse_number(expr, i);

    if (expr[i] == '\0') {
        std::cout << "error at " << i << '\n';
        return;
    }

    char op = expr[i++];
    int right = parse_number(expr, i);

    if (expr[i] != '\0') {
        std::cout << "error at " << i << '\n';
        return;
    }

    int result = 0;
    switch (op) {
        case '+': result = left + right; break;
        case '-': result = left - right; break;
        case '*': result = left * right; break;
        default: std::cout << "error at " << i - 1 << '\n'; return;
    }

    std::cout << left << ' ' << op << ' ' << right << " = " << result << '\n';
}

int main() {
    evaluate("12+34");
    evaluate("7*6x");
    return 0;
}
