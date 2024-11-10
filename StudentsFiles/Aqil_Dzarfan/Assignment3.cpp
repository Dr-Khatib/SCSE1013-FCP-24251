/*
AQIL DZARFAN BIN ASRUL SHARAFF
"If it works, don't touch it"
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // declare vector to store products
    vector<string> ProductName;
    vector<double> UnitPrice; // I use double for precision
    vector<int> QuantityPurchased;

    bool menu = true; // condition to allow the program to repeat
    double total = 0.0;

    int choice;
    int index;
    double PriceAfterDisc;

    string stringinput;
    int intinput;
    double doubleinput;

    while (menu == true)
    {

        // main menu
        cout << "\nCashier System\n";
        cout << "1. Add Product to Bill\n";
        cout << "2. Display Final Bill and Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // gather product data
            cout << "\nEnter Product Name: ";
            cin >> stringinput; // who cares about error handling

            cout << "Enter Unit Price: ";
            cin >> doubleinput;

            cout << "Enter Quantity Purchased: ";
            cin >> intinput;

            // inform the customer if the item elegible for discounts
            if (intinput > 10)
                cout << "Product added with a 10%" << " discount" << endl;

            else if (intinput >= 5)
                cout << "Product added with a 5%" << " discount" << endl;

            // store the gathered data into vector
            ProductName.push_back(stringinput);
            UnitPrice.push_back(doubleinput);
            QuantityPurchased.push_back(intinput);

            break;

        case 2:
            // just some fancy output formatting
            cout << "\nFinal Bill:\n";

            cout << setw(25) << left << "Product " << setw(5)
                 << "| Unit Price "
                 << "| Quantity "
                 << "| Total Cost (Discount Applied)";
            cout << "\n--------------------------------------------------------------------------------";

            // this for-statement is used calculate, total(discount applied) and print all of the product
            for (index = 0; index < ProductName.size(); index++)
            {

                if (QuantityPurchased.at(index) > 10)
                    PriceAfterDisc = QuantityPurchased.at(index) * UnitPrice.at(index) * 0.9;

                else if (QuantityPurchased.at(index) >= 5)
                    PriceAfterDisc = QuantityPurchased.at(index) * UnitPrice.at(index) * 0.95;

                else
                    PriceAfterDisc = QuantityPurchased.at(index) * UnitPrice.at(index);

                total += PriceAfterDisc;

                // another fancy output formatting
                cout << "\n"
                     << setw(25) << left << ProductName.at(index)
                     << "| $" << setw(10) << fixed << setprecision(2) << UnitPrice.at(index)
                     << "| " << setw(9) << QuantityPurchased.at(index)
                     << "| $" << PriceAfterDisc;
            }

            cout << "\n--------------------------------------------------------------------------------";
            cout << "\nGrand Total Amount Due: $" << fixed << setprecision(2) << total;

            menu = false; // to make sure the program doesnt repeat
            break;

        default:
            cout << "\nInvalid number. Please Try Again" << endl; // just in case if the user mis-input
        }
    }
    return 0;
}