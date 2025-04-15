#include <iostream>
#include "Sales_item.h"

int main() {

    std::cout << "Please enter transaction info for your book: " << std::endl;
    Sales_item book_in, book_total;

    if (std::cin >> book_total) {
        while (std::cin >> book_in) {
            book_total += book_in;
        }
        std::cout << "Summary of all transactions: \n" << book_total << std::endl;
    }
}