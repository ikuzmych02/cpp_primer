#include <iostream>

/*
What does the following for loop do? What is the final value of sum?
*/

// Response: adds all numbers from -100 to 100 inclusive. Answer should be 0.

int main() {

    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }

    std::cout << sum << std::endl; // Should be 0
    return 0;
}