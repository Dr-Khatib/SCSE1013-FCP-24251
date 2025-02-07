#include <iostream>

int main() {
    int choice;

  
    std::cout << "Enter a number (1-5): ";
    std::cin >> choice;

    
    switch (choice) {
        case 1:
            std::cout << "You chose 1 - Start your journey!" << std::endl;
            break;
        case 2:
            std::cout << "You chose 2 - Keep going!" << std::endl;
            break;
        case 3:
            std::cout << "You chose 3 - Almost halfway there!" << std::endl;
            break;
        case 4:
            std::cout << "You chose 4 - Almost there!" << std::endl;
            break;
        case 5:
            std::cout << "You chose 5 - You made it!" << std::endl;
            break;
        default:
            std::cout << "Error: Number out of range. Please enter a number between 1 and 5." << std::endl;
    }

    return 0;
}

