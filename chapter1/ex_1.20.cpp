#include <iostream>
#include "Sales_item.h"

int main() {

    Sales_item book_item;
    while (std::cin >> book_item) {
        std::cout << "Received transaction info for: " << book_item << std::endl;
    }
    return 0;
}

// Example output with ex_1.20.txt as input:
// ./ex_1.20 <ex_1.20.txt
/*
Received transaction info for: 0-201-12345-X 3 60 20
Received transaction info for: 0-202-12345-X 2 51 25.5
Received transaction info for: 0-203-12345-X 4 40 10
Received transaction info for: 0-204-12345-X 1 40 40
Received transaction info for: 0-205-12345-X 6 12 2
*/