#include <iostream>

int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    int su = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            su += i;
        }
    }

    if (su == a) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
