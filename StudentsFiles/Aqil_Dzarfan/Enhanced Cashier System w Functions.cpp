/*
AQIL DZARFAN BIN ASRUL SHARAFF
"If it works, don't touch it"

wip enhanced cashier system
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
struct Product
{
    string name;
    double unitPrice;
    int quantity;
};

vector<Product> products;

// function prototypes
void add_product();
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();

bool membershipDiscount = false;
bool voucherDiscount = false;
double voucherDiscountValue;

int main()
{
    bool menu = true;
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
    Product product;

    // gather product data
    cout << "Enter Product Name: ";
    cin >> product.name;

    cout << "Enter Unit Price: ";
    cin >> product.unitPrice;

    while (product.unitPrice <= 0)
    {
        cout << "Error: Unit Price must be greater than 0\nEnter Unit Price: ";
        cin >> product.unitPrice;
    }

    cout << "Enter Quantity Purchased: ";
    cin >> product.quantity;

    while (product.quantity <= 0)
    {
        cout << "Error: Quantity must be greater than 0\nEnter Quantity Purchased: ";
        cin >> product.unitPrice;
    }

    // inform the customer if the item elegible for discounts
    if (product.quantity > 10)
        cout << "Product added with a 10% bulk discount";

    else if (product.quantity >= 5)
        cout << "Product added with a 5% bulk discount";

    // push product data into vector
    products.push_back(product);
}

void apply_membership_discount()
{
    char input;

    if (membershipDiscount == !false)
    {
        cout << "Membership Discount Already Added!";
        exit(0);
    }

    else
    {
        cout << "Does the customer have a membership? (Y/n): ";
        cin >> input;

        if (input == 'Y' || input == 'y')
        {
            cout << "2.5% Membership Discount Applied!";
            membershipDiscount = true;
        }

        else
            cout << "Membership Required";
    }
}

void apply_voucher_discount()
{
    if (voucherDiscount == !false)
        cout << "Voucher Discount Already Added";
    else
    {
        cout << "Apply voucher discounts(max 5%): ";
        cin >> voucherDiscountValue;

        while (voucherDiscountValue > 5 || voucherDiscountValue <= 0)
        {
            cout << "Error: Discount value must be between 0 and 5\nApply voucher discounts(max 5%): ";
            cin >> voucherDiscountValue;
        }
        voucherDiscount = true;
    }
}

void display_final_bill()
{
    double total, PriceAfterDisc;

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