#include <iostream>
#include <iomanip>
using namespace std;


void list(){      

    cout << "Cashier System "<<endl;
    cout<< "1.Add Product to Bill"<<endl;
    cout<< "2.Final Bill and Exit "<<endl;
    cout <<"Enter your choice :";

}

double calculation(double price , int quantity){

if (quantity >10){
    double totalCost=(price*quantity)-((price*quantity)*0.1);
    return totalCost;
}

else if (quantity>=5){
    double totalCost=(price*quantity)-((price*quantity)*0.05);
    return totalCost;
}

else {
    double totalCost=(price*quantity);
    return totalCost;
}

}


void finalBill(string product [],double price  [],int quantity [],double totalCost[],int productCount){

double grandtotal = 0.0;

cout <<"Final Bill :"<<endl;
cout <<   "Product    | Unit Price  | Quantity | Total Cost(Discount Applied ) "<<endl;

for (int i = 0 ; i< productCount ;i++){
cout << "---------------------------------------------------------------------"<<endl;    
cout << left << setw(12) << product[i]
             << setw(15) << price[i]
             << setw(10) << quantity[i]
             << setw(20) << totalCost[i] << endl;

grandtotal += totalCost[i];

} 

cout<< "Grand Total Amount Due :"<< grandtotal <<endl;

}

int main (){

string product [100];
double price  [100];
int quantity [100];
double totalCost[100];
int option=0 ;
int productCount=0;
 

while (option!=2){

    list(); //loop back to main menu after enterting product 
    cout << "Enter the option:"<<endl;
    cin>>option;



    if(option==1){

    cout <<"Enter the product name :"<<endl;
    cin>> product[productCount] ;
    cout << "Enter the price of the product :"<<endl;
    cin>> price[productCount] ;
    cout << "Enter the quantity of the prodcut :"<<endl;
    cin>> quantity[productCount] ;

    totalCost[productCount] = calculation( price[productCount], quantity[productCount] ); //get total cost each product [start from 0]

    productCount++;


    }

    else if (option==2){

    finalBill(product , price,quantity,totalCost,productCount);
    cout << "                                                 "<<endl;

    }

    else {

        cout << "Please enter 1 or 2 to continue .";
        continue;
    }

  
}

cout << "Thanks for coming !!!";
cout << "See you next time ";



system("pause");

    return 0;
}