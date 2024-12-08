#include <iostream>
using namespace std;

int main()
{
    float weight, height;

    cout << "Enter your weight in Kg: ";
    cin >> weight;
    cout << "Enter your height in metre: ";
    cin >> height;

    float const bmi = weight / (height * height);
    cout << "Your BMI is " << bmi;

    return 0;
}