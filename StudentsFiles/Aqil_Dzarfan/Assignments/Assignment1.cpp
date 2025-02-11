#include <iostream>

int main()
{
    float weight, height;

    std::cout << "Enter your weight in Kg: ";
    std::cin >> weight;
    std::cout << "Enter your height in metre: ";
    std::cin >> height;

    float const bmi = weight / (height * height);
    std::cout << "Your BMI is " << bmi;

    return 0;
}