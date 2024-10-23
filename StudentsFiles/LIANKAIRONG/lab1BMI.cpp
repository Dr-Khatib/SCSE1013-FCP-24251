#include<iostream>
using namespace std;

int main(){
    double height, weight, BMI;
    cout <<"Enter your weight(in kg) : ";
    cin >> weight;
    cout <<"Enter your height(in meters) : ";
    cin >> height;
    BMI = weight/(height*height);
    cout <<"Your BMI is:"<<BMI;

    return 0;
}
