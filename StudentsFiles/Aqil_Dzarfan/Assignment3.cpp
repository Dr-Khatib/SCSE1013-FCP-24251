#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    
    vector<string> ProductName;
    vector<double> UnitPrice;
    vector<int> QuantityPurchased;
    
    bool menu = true;
    double total = 0;
    
    int choice;
    int index;
    double PriceAfterDisc;
    
    string stringinput;
    int intinput;
    double doubleinput;

    while (menu == true){
    
    cout << "\nCashier System\n";
    cout << "1. Add Product to Bill\n";
    cout << "2. Display Final Bill and Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "\nEnter Product Name: ";
            cin >> stringinput;
            
            cout << "Enter Unit Price: ";
            cin >> doubleinput;
            
            cout << "Enter Quantity Purchased: ";
            cin >> intinput;
            
            ProductName.push_back(stringinput);
            UnitPrice.push_back(doubleinput);
            QuantityPurchased.push_back(intinput);

            break;
        
        case 2:

            // output formatting
            cout << "Final Bill:\n"; 

            cout << "Product " << setw(30) 
                << "| Unit Price " << setw(5) 
                << "| Quantity "
                << "| Total Cost (Discount Applied)";
            
            cout << "\n--------------------------------------------------------------------------------";

            for (index = 0; index < ProductName.size(); index++){

                if (QuantityPurchased.at(index) > 10)
                    PriceAfterDisc = QuantityPurchased.at(index) * UnitPrice.at(index) * 0.9;

                else if (QuantityPurchased.at(index) >= 5)
                    PriceAfterDisc = QuantityPurchased.at(index) * UnitPrice.at(index) * 0.95;
                
                else
                    PriceAfterDisc = QuantityPurchased.at(index) * UnitPrice.at(index);
            
                cout << "\n" << ProductName.at(index) << setw(25) 
                    << "| " << UnitPrice.at(index) << " " << setw(5)
                    << "| " << QuantityPurchased.at(index) << " "
                    << "| " << PriceAfterDisc;
            }
            
            cout << "\n--------------------------------------------------------------------------------";
            
            menu = false;
    }
        
    }
    return 0;
}