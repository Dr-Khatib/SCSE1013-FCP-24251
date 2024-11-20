#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//user-defined functions
    void add_product();
    void apply_membership_discount();
    void apply_voucher_discount();
    void display_final_bill();

//Global variables
    string productName;
    float unitPrice;
    int quantity;
    float total_cost_of_item;
    float grandTotal;
    int choice;
    float discount;
    string membership_choice;
    float voucher_discount;
    string finalBill;


int main(){

 while(true){

 // Display Menu with activity choices
     cout<<"-----------------------------------------------------"<<endl;
     cout << "Cashier System"<<endl;
     cout << "1. Add Product to Bill"<<endl;
     cout << "2. Apply Membership Discount"<<endl;
     cout << "3. Apply voucher discount"<<endl;
     cout << "4. Display Final Bill and Exit"<<endl;
  // Getting choice 
     cout << "Enter your choice: ";
     cin >> choice;

     if(choice==1) add_product();
     else if(choice==2) apply_membership_discount();
     else if(choice==3) apply_voucher_discount();
     else if(choice==4) {
         display_final_bill();
         break;}
 }
}

 void add_product(){

    /* Choice 1: Add Product to Bill:
                a. getiing product details
                b. calculating discounts*/

    // a. getiing product details____________________________

         cout << "\nEnter Product Name: ";
         cin >> productName;
         cout << "Enter Unit Price: ";
         cin >> unitPrice;
         cout << "Enter Quantity Purchased: ";
         cin >> quantity;


    /* b. calculating discounts_______________________________

         Apply discounts based on the Quantity Purchased:
         - 10% - quantity>10  
         -  5% - 10>=quantity>=5
         -  0% - No discount - 5>quantity*/


     // Selecting the appropriate discount

        if (quantity > 10) {
             discount = 0.10; // 10% discount => 10/100
             cout << "Product added with a 10% bulk discount."<<endl;}

        else if (quantity >= 5) {
             discount = 0.05; // 5% discount => 5/100
             cout << "Product added with a 5% bulk discount."<<endl;}

        else {
             discount = 0; // No discount
             cout << "Product added with no discount."<<endl;}

     // Calculating total cost with chosen discount

            total_cost_of_item = unitPrice * quantity * (1 - discount);
            grandTotal += total_cost_of_item;

 }

 void apply_membership_discount(){

     cout<<"Does the customer have a membership? (yes/no): ";
     cin>>membership_choice;

     if(membership_choice=="yes"){
         grandTotal *=0.975; // = grandTotal(1-0.025) i.e 2.5% discount
         cout<<"2.5% membership discount applied."<<endl;

     }
}  

 void apply_voucher_discount(){
     cout<<"Enter voucher discount (max 5%): ";
     char character;
     cin>>voucher_discount>>character;

     if(voucher_discount>0 && voucher_discount<=5){
         float x=1-(voucher_discount/100);
         grandTotal *=x;
         cout<<"Voucher discount applied."<<endl;
    }
     else cout<<"Voucher is not applicable"<<endl;
}

 void display_final_bill(){
     // Header with column names for display of final bill

     finalBill = "-----------------------------------------------------\n";
     finalBill += "Final Bill:\n\n";
     finalBill += "Product    | Unit Price | Quantity | Total Cost (Discount Applied)\n";
     finalBill += "------------------------------------------------------\n";
     cout<<finalBill;

     cout<<fixed<<setprecision(2);
     cout << fixed << setprecision(2);
    cout << left << setw(10) << productName << " | $" 
         << setw(9) << unitPrice << " | " 
         << setw(8) << quantity << " | $" 
         << setw(10) << total_cost_of_item << endl;
     cout<<"-----------------------------------------------------\n";
     if(membership_choice=="yes") cout<<"Membership Discount: 2.5%"<<endl;
     cout<<fixed<<setprecision(1);
     if(voucher_discount>0 && voucher_discount<=5) cout<<"Voucher discount: "<<voucher_discount<<"%"<<endl;
     cout<<fixed<<setprecision(2);
     cout << "Grand Total Amount Due: " <<"$"<<grandTotal << endl;
 }



































