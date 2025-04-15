#include <iostream>

int main() {

    int sum = 0;
    for (int val = 1; val <= 10; ++val) {
        sum += val;
    }
    std::cout << "Sum of numbers 1 through 10 inclusive is " << sum << std::endl;
    return 0;
}