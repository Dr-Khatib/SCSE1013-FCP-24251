/*
AQIL DZARFAN BIN ASRUL SHARAFF
"If it works, don't touch it"

painfull enhanced cashier system
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
double priceAfterDiscount(int index);

bool membershipDiscount = false;
bool voucherDiscount = false;
double voucherDiscountValue = 1.0;

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
    cout << "\nEnter Product Name: ";
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
        cout << "Product added with a 10% bulk discount\n";

    else if (product.quantity >= 5)
        cout << "Product added with a 5% bulk discount\n";

    // push product data into vector
    products.push_back(product);
}

void apply_membership_discount()
{
    char input;

    if (membershipDiscount != false)
    {
        cout << "Membership Discount Already Added!\n";
    }

    else
    {
        cout << "\nDoes the customer have a membership? (Y/n): ";
        cin >> input;

        if (input == 'Y' || input == 'y')
        {
            cout << "2.5% Membership Discount Applied!\n";
            membershipDiscount = true;
        }

        else if (input == 'N' || input == 'n')
            cout << "Membership Required\n";

        else
            cout << "Error: Invalid input\nReturning to the main menu";
    }
}

void apply_voucher_discount()
{
    if (voucherDiscount != false)
        cout << "Voucher Discount Already Added\n";
    else
    {
        cout << "\nApply voucher discounts(max 5%): ";
        cin >> voucherDiscountValue;

        while (voucherDiscountValue > 5 || voucherDiscountValue <= 0)
        {
            cout << "Error: Discount value must be between 0 and 5\nApply voucher discounts(max 5%): ";
            cin >> voucherDiscountValue;
        }
        cout << "Voucher Discount Applied!\n";
        voucherDiscountValue /= 100.0;
        voucherDiscount = true;
    }
}

void display_final_bill()
{
    double total;
    double temp;

    cout << "\nFinal Bill:\n";

    cout << setw(25) << left << "Product " << setw(5)
         << "| Unit Price "
         << "| Quantity "
         << "| Total Cost (Discount Applied)";
    cout << "\n--------------------------------------------------------------------------------";

    for (int index = 0; index < products.size(); index++)
    {
        temp = priceAfterDiscount(index);

        cout << "\n"
             << setw(25) << left << products.at(index).name
             << "| $" << setw(10) << fixed << setprecision(2) << products.at(index).unitPrice
             << "| " << setw(9) << products.at(index).quantity
             << "| $" << temp;

        total += temp;
    }

    cout << "\n--------------------------------------------------------------------------------";

    if (membershipDiscount != false)
        cout << "Membership Discount: 2.5%\n";

    if (voucherDiscount != false)
        cout << "Voucher Discount: " << fixed << setprecision(2) << voucherDiscountValue << "%\n";

    cout << "\n--------------------------------------------------------------------------------";
    cout << "\nGrand Total Amount Due: $" << fixed << setprecision(2) << total;
}

double priceAfterDiscount(int index)
{
    double result;

    if (membershipDiscount == false)
    {
        if (products.at(index).quantity > 10)
            result = products.at(index).unitPrice * products.at(index).quantity * (0.9 - voucherDiscountValue);

        else if (products.at(index).quantity >= 5)
            result = products.at(index).unitPrice * products.at(index).quantity * (0.95 - voucherDiscountValue);

        else
            result = products.at(index).unitPrice * products.at(index).quantity * voucherDiscountValue;
    }

    else
    {
        if (products.at(index).quantity > 10)
            result = products.at(index).unitPrice * products.at(index).quantity * (0.875 - voucherDiscountValue);

        else if (products.at(index).quantity >= 5)
            result = products.at(index).unitPrice * products.at(index).quantity * (0.925 - voucherDiscountValue);

        else
            result = products.at(index).unitPrice * products.at(index).quantity * (0.975 - voucherDiscountValue);
    };
    return result;
}