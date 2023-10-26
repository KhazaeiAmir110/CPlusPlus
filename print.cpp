#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> nums;

    while (true) {
        std::string n;
        std::cout << "Enter a number: ";
        std::cin >> n;

        if (n == "0") {
            break;
        }

        nums.insert(nums.begin(), n);
    }

    for (const std::string &num : nums) {
        std::cout << num << std::endl;
    }

    return 0;
}
