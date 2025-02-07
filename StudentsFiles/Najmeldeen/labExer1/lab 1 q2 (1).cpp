#include <iostream>
#include <iomanip>  

int main() {
    double num1, num2;

    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = num2 != 0 ? num1 / num2 : 0;  

    
    std::cout << std::fixed << std::setprecision(2);
    
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << (num2 != 0 ? quotient : 0) << std::endl;

    return 0;
}

