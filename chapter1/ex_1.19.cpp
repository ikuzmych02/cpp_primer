#include <iostream>

int main() {
    std::cout << "Please enter two integers: " << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;

    std::cout << "Numbers from " << val1 << " through " << val2 << " inclusive." << std::endl;
    if (val1 > val2) {
        for (int i = val1; i >= val2; i--) {
            std::cout << i << std::endl;
        }
    } else {
        for (int i = val1; i <= val2; i++) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}