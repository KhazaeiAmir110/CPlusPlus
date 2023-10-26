#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::string trow(n, '*');
    std::string prow = "*" + std::string(n - 2, ' ') + "*";

    std::cout << trow << std::endl;
    for (int i = 0; i < n - 2; i++) {
        std::cout << prow << std::endl;
    }
    std::cout << trow << std::endl;

    return 0;
}
