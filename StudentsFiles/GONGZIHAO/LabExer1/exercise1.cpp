#include <iostream>
#include <string>

int main() {
	std::string fullName;
    int birthYear;
    int currentYear = 2024;
    std::cout<<"Enter your full name: ";
    getline(std::cin, fullName);
    std::cout<<"Enter your birth year: ";
    std::cin>>birthYear;
    int age = currentYear - birthYear;
	std::cout << "Hello, "<<fullName<<"! You are "<<age<<" years old."<<std::endl;
    return 0;
}
