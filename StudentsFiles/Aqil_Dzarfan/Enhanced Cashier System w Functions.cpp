/*
AQIL DZARFAN BIN ASRUL SHARAFF
"If it works, don't touch it"

wip enhanced cashier system
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

string stringinput;
int intinput;
double doubleinput;

double discount;

// declare vector to store products
vector<string> ProductName;
vector<double> UnitPrice; // I use double for precision
vector<int> QuantityPurchased;

// function prototypes
void add_product();
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();

int main()
{
    bool menu = true; // condition to allow the program to repeat
    int choice;

    while (menu == true)
    {

        // main menu
        cout << "\nCashier System\n";
        cout << "1. Add Product to Bill\n";
        cout << "2. Add Membership Discount\n";
        cout << "3. Apply Voucher Discount\n";
        cout << "4. Display Final Bill and Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add_product();
            break;

        case 2:
            apply_membership_discount();
            break;

        case 3:
            apply_voucher_discount();
            break;

        case 4:
            display_final_bill();
            menu = false; // to make sure the program doesnt repeat
            break;

        default:
            cout << "\nInvalid number. Please Try Again" << endl; // just in case if the user mis-input
        }
    }
    return 0;
}

void add_product()
{
    // gather product data
    cout << "\nEnter Product Name: ";
    cin >> stringinput; // who cares about error handling

    cout << "Enter Unit Price: ";
    cin >> doubleinput;

    cout << "Enter Quantity Purchased: ";
    cin >> intinput;

    // store the gathered data into vector
    ProductName.push_back(stringinput);
    UnitPrice.push_back(doubleinput);
    QuantityPurchased.push_back(intinput);
}

void apply_membership_discount()
{
    cout << "Does the customer have a membership? (Y/n): ";
    cin << doubleinput;

    discount += (doubleinput == 'Y' || 'y') ? 2.5 : 0;
}

void apply_voucher_discount()
{
    cout << "Apply voucher discounts(max 5%): ";
    cin << doubleinput;

    discount += doubleinput;
}

void display_final_bill()
{
    // just some fancy output formatting
    cout << "\nFinal Bill:\n";

    cout << setw(25) << left << "Product " << setw(5)
         << "| Unit Price "
         << "| Quantity "
         << "| Total Cost (Discount Applied)";
    cout << "\n--------------------------------------------------------------------------------";

    // this for-statement is used calculate, total(discount applied) and print all of the product
    for (int index = 0; index < ProductName.size(); index++)
    {
        total += QuantityPurchased.at(index) * UnitPrice.at(index) * discount;

        // another fancy output formatting
        cout << "\n"
             << setw(25) << left << ProductName.at(index)
             << "| $" << setw(10) << fixed << setprecision(2) << UnitPrice.at(index)
             << "| " << setw(9) << QuantityPurchased.at(index)
             << "| $" << PriceAfterDisc;
    }

    cout << "\n--------------------------------------------------------------------------------";
    cout << "\nGrand Total Amount Due: $" << fixed << setprecision(2) << total;
}