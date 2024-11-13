/*
    BMI Calculator
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 23/10/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float weight = 0, height = 0;
    float bmi = 0;

    cout << "\nEnter your weight (in kg): ";
    cin >> weight;
    cout << "Enter your height (in meters): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is: " << fixed << setprecision(2) << bmi << endl;

    return 0;
}