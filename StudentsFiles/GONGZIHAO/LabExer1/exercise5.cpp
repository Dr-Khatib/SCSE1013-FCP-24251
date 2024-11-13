#include <iostream>
int main() {
    int number;
    std::cout << "Enter a number (1-5): ";
    std::cin >> number;
    if (number == 1) {
        std::cout << "You chose 1 - Starting out!" << std::endl;
    } else if (number == 2) {
        std::cout << "You chose 2 - Getting there!" << std::endl;
    } else if (number == 3) {
        std::cout << "You chose 3 - Nice choice!" << std::endl;
    } else if (number == 4) {
        std::cout << "You chose 4 - Almost there!" << std::endl;
    } else if (number == 5) {
        std::cout << "You chose 5 - Perfect!" << std::endl;
    } else {
        std::cout << "Error: Please enter a number between 1 and 5." << std::endl;
    }
    return 0;
}

