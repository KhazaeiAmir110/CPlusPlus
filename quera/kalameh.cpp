#include <iostream>
#include <string>

int main() {
    std::string kalameh;
    std::string harf = "aioue";
    int add = 0;

    std::cout << "Enter a word: ";
    std::cin >> kalameh;

    for (char i : kalameh) {
        if (harf.find(i) != std::string::npos) {
            add++;
        }
    }

    int result = 1;
    for (int i = 0; i < add; i++) {
        result *= 2;
    }

    std::cout << result << std::endl;

    return 0;
}
