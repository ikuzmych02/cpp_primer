#include <iostream>
#include "Sales_item.h"

int main() {
    std::cout << "Please enter info for 2 books: " << std::endl;

    Sales_item book1, book2;
    std::cin >> book1;
    std::cin >> book2;

    std::cout << "Total of two transactions: " << book1 + book2 << std::endl;
    return 0;
}