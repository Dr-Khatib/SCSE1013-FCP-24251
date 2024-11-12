#include<iostream>
using namespace std;

int main()
{
    float weight, height, total;
    
    cout << "=== Body Mass Index (BMI) Calculator ===  \n\n";
    cout << "Enter your weight (in kg): ";
    cin >> weight;
    cout << "Enter your height (in meters): ";
    cin >> height;
    
    total = weight / (height*height);
    
    cout << "\nYour BMI is " << total;
    cout << "\n\nCheck your BMI's status here:- ";
    cout << "\n\to----------------------------o\n";
    cout << "\t|\tBMI\t|   Status   |\n";
    cout << "\to----------------------------o\n";    
    cout << "\t|Below 18.4\t| Underweigth| \n";
    cout << "\t|18.5 - 24.9\t| Normal     |\n";
    cout << "\t|25.0 - 29.9\t| Overweight |\n";
    cout << "\t|30.0 and above\t| Obese      |\n";
    cout << "\to----------------------------o\n";
    
    /*if ( total < 18.5) 
        cout << " and you're underweight :-["; 
  
    else if (total >= 18.5 && total < 24.9) 
        cout << " and you're healthy as well ^_^"; 
  
    else if (total >= 24.9 && total < 30) 
        cout << " and you're overweight :"; 
  
    else if (total >= 30) 
        cout << " and you're obese O_o ";
    */
    return 0;
}