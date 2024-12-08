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
    struct product
    {
        string name;
        double unit_price{};
        int quantity{};
    };
    vector<product> products;

    product product;

    bool menu = true; // condition to allow the program to repeat
    double total = 0.0;

    int choice;
    int index;

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
            cin >> product.name;

            cout << "Enter Unit Price: ";
            cin >> product.unit_price;

            cout << "Enter Quantity Purchased: ";
            cin >> product.quantity;

            // inform the customer if the item elegible for discounts
            if (product.quantity > 10)
                cout << "Product added with a 10%" << " discount" << endl;

            else if (product.quantity >= 5)
                cout << "Product added with a 5%" << " discount" << endl;

            // store the gathered data into vector
            products.emplace_back(product);
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
            const auto &product_count = products.size();
            for (index = 0; index < product_count; index++)
            {
                const int &quantity = products.at(index).quantity;
                double discount;

                if (quantity > 10)
                    discount = 0.9;

                else if (quantity >= 5)
                    discount = 0.95;

                else
                    discount = 1.0;

                const double nett_price = products.at(index).unit_price * quantity * discount;

                total += nett_price;

                // another fancy output formatting
                cout << "\n"
                     << setw(25) << left << products.at(index).name
                     << "| $" << setw(10) << fixed << setprecision(2) << products.at(index).unit_price
                     << "| " << setw(9) << quantity
                     << "| $" << nett_price;
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