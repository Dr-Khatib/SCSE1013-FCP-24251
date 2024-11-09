#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<string> ProductName;
    vector<double> UnitPrice;
    vector<int> QuantityPurchased;
    
    bool menu = true;
    int choice;
    double total = 0;
    
    string stringinput;
    int intinput;
    double doubleinput;

    while (menu == true){
    cout << "Cashier System\n";
    cout << "1. Add Product to Bill\n";
    cout << "2. Display Final Bill and Exit\n";
    cout << "Enter yout choice: ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "\nEnter Product Name: ";
            cin >> stringinput;
            ProductName.push_back(stringinput);
            
            cout << "Enter Unit Price: ";
            cin >> doubleinput;
            UnitPrice.push_back(doubleinput);
            
            cout << "Enter Quantity Purchased: ";
            cin >> intinput;
            QuantityPurchased.push_back(intinput);

            break;
        case 2:
            cout << "Final Bill:\n";
            
    }
        
    }
    return 0;
}