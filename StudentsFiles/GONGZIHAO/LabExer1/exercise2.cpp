#include<iostream>
#include<iomanip> 
int main() {
    float num1, num2;
    std::cout<<"Enter two numbers: ";
    std::cin>>num1>>num2;
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient =num1 / num2;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"Sum: "<<sum<<std::endl;
    std::cout<<"Difference: "<<difference<<std::endl;
    std::cout<<"Product: "<<product<<std::endl;
    if(num2 != 0){
        std::cout<<"Quotient: "<<quotient<<std::endl;
    } else {
        std::cout<<"Quotient: Undefined (division by zero)"<<std::endl;
    }
    return 0;
}
