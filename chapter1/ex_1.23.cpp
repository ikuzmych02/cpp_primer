#include <iostream>
#include "Sales_item.h"

// Also includes exercise 1.24 -> testing.

int main() {
    Sales_item item, item_next;
    int transaction_counter = 0;
    if (std::cin >> item) {
        transaction_counter = 1;
        while (std::cin >> item_next) {
            if (item_next.isbn() == item.isbn()) {
                transaction_counter += 1;
            } else {
                std::cout << "Book " << item << " has " << transaction_counter <<
                    " transactions" << std::endl;
                item = item_next;
                transaction_counter = 1;
            }
        }
        std::cout << "Book " << item << " has " << transaction_counter <<
            " transactions" << std::endl;
    }

    return 0;
}