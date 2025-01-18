#include <iostream>

int main() {
    double num1, num2, num3;

    
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    
    if (num1 > num2 && num1 > num3) {
        std::cout << num1 << " is the largest." << std::endl;
    } else if (num1 == num2 && num1 > num3) {
        std::cout << num1 << " is the largest (or tied for largest)." << std::endl;
    } else if (num1 == num3 && num1 > num2) {
        std::cout << num1 << " is the largest (or tied for largest)." << std::endl;
    } else if (num1 == num2 && num1 == num3) {
        std::cout << num1 << " is the largest (and all are equal)." << std::endl;
    } else {
        std::cout << num1 << " is not the largest." << std::endl;
    }

    return 0;
}

