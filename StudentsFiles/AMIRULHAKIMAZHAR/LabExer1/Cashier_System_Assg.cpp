#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int i = 0, max = 10;
    int choice = 0, TotalItem = 0, ItemQty[max] = {};
    string ItemName[max] = {};
    float ItemPrice[max] = {};
    float TotalPrice[max] = {};
    float GrandTotal;
    
    for (i = 0; i < max; i++)
    {
        while (choice != 2)
        {
            cout << "Display Menu Options\n";
            cout << "1. Add Product to Bill\n";
            cout << "2. Display Final Bill and Exit\n";
            cout << "Press Listed Number to Continue\n";
            cin >> choice;
            cin.ignore();

            if (choice == 1)
            {
                cout << "\nEnter Product Name: ";
                getline(cin, ItemName[i]);

                cout << "Enter Unit Price: ";
                cin >> ItemPrice[i];
                cout << "Enter Quantity Purchased: ";
                cin >> ItemQty[i];
                
                if (ItemQty[i] > 10){
                    TotalPrice [i] = (ItemPrice[i] * ItemQty[i]) * 0.9;
                }
                else if (ItemQty[i] >= 5, ItemQty[i] <= 10){
                    TotalPrice [i] = (ItemPrice[i] * ItemQty[i]) * 0.95;
                }
                else {
                    TotalPrice [i]= (ItemPrice[i] * ItemQty[i]);
                }  
                TotalItem++;
                break;
            }
            else if (choice == 2){
                break;
            }
            else {
                cout << "Please insert a valid number.\n";
            } 
        }
    }


    cout << "\nFinal Bill: \n";
    cout << "Product  |  Unit Price  |  Quantity  |  Total Cost  (Discount Applied)\n";
    cout << "----------------------------------------------------------------------\n";
    for (i = 0; i < TotalItem; i++){
        cout << ItemName[i] << "  |  " << ItemPrice[i] << "  |  $" << ItemQty[i] << "  |  $" << TotalPrice[i] << "\n";
        GrandTotal = GrandTotal + TotalPrice[i];
    }
    
    cout << "----------------------------------------------------------------------\n";

    cout << "Grand Total Amount Due: $" << GrandTotal;
    
    return 0;
}