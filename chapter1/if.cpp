#include <iostream>

int main() {
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                cnt++;
            } else {
                std::cout << "Curr val: " << currVal << " appears " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        } // while loop ends here
        std::cout << "Curr val: " << currVal << " appears " << cnt << " times" << std::endl;
    } // outermost if ends here
    return 0;
}