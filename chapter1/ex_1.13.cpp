#include <iostream>

// Rewrite exercises 1.9 and 1.10 using for loops

int main() {

    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    std::cout << "Sum of numbers 50 through 100 inclusive is: " << sum << std::endl;

    std::cout << "Numbers 10 to 0 printed by for loop: " << std::endl;
    for (int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    return 0;
}