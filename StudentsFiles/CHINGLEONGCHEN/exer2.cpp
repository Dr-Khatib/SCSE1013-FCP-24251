#include <iostream>
using namespace std ;
#include <iomanip>


double sum (double num1, double num2 ){
 
    double total = num1 + num2 ;
    return total ;
}

double  difference (double num1, double num2){

    double differ = num1 -num2 ;
    return differ ;

}

double  times (double num1, double num2){

    double product = num1 * num2 ;
    return product;

}

double divide (double num1, double num2){

    double quotient =num1 / num2 ;
    return quotient ;

}



int main() {

 //let user to enter input 

   double  num1 ,num2 ;
   cout << "Enter two number:";
   cout<<"Number 1:";
   cin >> num1 ;
   cout<<"Number 2:";
   cin>>num2;
   cout<<"         \n";
   
//call back function to do the calculation 

   double total= sum(num1 ,num2);
   cout <<"Total:"<< fixed << setprecision(2) <<total<<endl;

   double differ = difference (num1,num2);
   cout <<"Difference:"<< fixed << setprecision(2)<< differ<<endl ;

   double product = times(num1,num2);
   cout <<"Product:"<< fixed << setprecision(2)<<product<<endl ;

   double quotient = divide (num1,num2);
   cout<< "Quotient:"<< fixed << setprecision(2)<< quotient<<endl ;


    system("pause");

    return 0;
}
