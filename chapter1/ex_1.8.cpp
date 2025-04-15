#include <iostream>

// Fix 3 and 4, the illegal ones
int main() {
    std::cout << "*/" << std::endl;
    std::cout << "*/" /* "/*" */ << std::endl;;
    return 0;
}