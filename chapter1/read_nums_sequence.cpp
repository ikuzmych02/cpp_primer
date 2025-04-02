#include <iostream>

// Use Ctrl+D to activate the end of program.
int main() {
    // std::cout << "Enter a sequence of numbers: " << std::endl;
    int value = 0, sum = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum of all numbers: " << sum << std::endl;
    return 0;
}