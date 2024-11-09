/*
    Cashier System
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 9/11/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int i = 0, max = 10;
    int choice = 0, totalProduct = 0, productQuantity[max] = {};
    string product[max] = {};
    float unitPrice[max] = {}, totalPrice[max] = {}, grandTotal = 0.0;

    for (i = 0; i < max; i++) {
        while (choice != 2) {
             cout << "\nCashier System \n1. Add Product to Bill \n2. Display Final Bill and Exit \nEnter your choice: ";
            cin >> choice;
            cin.ignore();

            if (choice == 1) {
                cout << "\nEnter Product Name: ";
                getline(cin, product[i]);

                cout << "Enter Unit Price: ";
                cin >> unitPrice[i];

                cout << "Enter Quantity Purchased: ";
                cin >> productQuantity[i];

                if  (productQuantity[i] > 10) {
                    totalPrice[i] = 0.9 * (unitPrice[i] * productQuantity[i]);
                    cout << "Product added with a 10%% discount\n";
                }
                else if (productQuantity[i] >= 5) {
                    totalPrice[i] = 0.95 * (unitPrice[i] * productQuantity[i]);
                    cout << "Product added with a 5%% discount\n";
                }
                else {
                    totalPrice[i] = unitPrice[i] * productQuantity[i];
                    cout << "Product added with no discount\n";
                }
                
                totalProduct++;
            }
            else if (choice == 2) 
                break;
            else
                cout << "ERROR: Invalid choice, please input valid choice";
        }
    }
    
    cout << "\nFinal Bill: \nProduct\t| Unit Price\t| Quantity\t| Total Cost (Discount Applied)";
    cout << "\n----------------------------------------------------------------------";
    for (i = 0; i < totalProduct; i++) {
        cout << fixed << setprecision(2);
        cout << "\n" << product[i] << "\t| $" << unitPrice[i] << "\t\t| " << productQuantity[i] << "\t\t| $" << totalPrice[i];
        grandTotal += totalPrice[i];
    }
    cout << "\n----------------------------------------------------------------------";
    cout << "\nGrand Total Amount Due: $" << grandTotal << "\n\n";
    
    return 0;
}