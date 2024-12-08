/*
AQIL DZARFAN BIN ASRUL SHARAFF
"If it works, don't touch it"

Enhanced Cashier System final

if there's any logic error that I missed
contact me on telegram
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// struct is used to group multiple data in one vector
struct Product
{
    string name;
    double unitPrice{};
    int quantity{};
};
vector<Product> products;

// function prototypes
void add_product();
void informDiscount(int const quantity);
void apply_membership_discount();
void voidMemberDiscount(char const input);
void addMemberDiscount(char const input);
void apply_voucher_discount();
void display_final_bill();
double priceAfterDiscount(int index);

bool membershipDiscount = false; // false means no discount
bool voucherDiscount = false;
double voucherDiscountValue = 0.0;

int main()
{
    bool menu = true;
    int choice;

    while (menu == true)
    {
        // main menu
        cout << "\nCashier System\n"
             << "1. Add Product to Bill\n"
             << "2. Add Membership Discount\n"
             << "3. Apply Voucher Discount\n"
             << "4. Display Final Bill and Exit\n"
             << "Enter your choice: ";
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
            menu = false;
            break;

        default:
            cout << "\nInvalid number. Please Try Again" << endl;
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

    // make sure that the unit price is non-negative
    while (product.unitPrice <= 0)
    {
        cout << "Error: Unit Price must be greater than 0\nEnter Unit Price: ";
        cin >> product.unitPrice;
    }

    cout << "Enter Quantity Purchased: ";
    cin >> product.quantity;

    // make sure that the quantity is non-negative
    while (product.quantity <= 0)
    {
        cout << "Error: Quantity must be greater than 0\nEnter Quantity Purchased: ";
        cin >> product.quantity;
    }

    // inform the customer if the item eligible for discounts
    informDiscount(product.quantity);

    // store product data into vector
    products.emplace_back(product);
}

void informDiscount(int const quantity)
{
    if (quantity > 10)
        cout << "Product added with a 10% bulk discount\n";

    else if (quantity >= 5)
        cout << "Product added with a 5% bulk discount\n";
}

void apply_membership_discount()
{
    char input;

    // check if the discount is already added
    if (membershipDiscount != false) // case 1: discount added
    {
        cout << "Membership Discount Already Added!\n Do you wish to void Membership Discount? (Y/n): ";
        cin >> input;

        // options to void the discount given
        voidMemberDiscount(input);
    }

    else // case 2: discount not yet added
    {
        cout << "\nDoes the customer have a membership? (Y/n): ";
        cin >> input;

        addMemberDiscount(input);
    }
}

void voidMemberDiscount(char const input, bool const discountType)
{
    if (input == 'Y' || input == 'y')
        cout << "Membership Discount maintained!\n";

    else if (input == 'N' || input == 'n')
    {
        cout << "Membership Discount voided!\n";
        membershipDiscount = false;
    }

    else
        cout << "Error: Invalid input\nReturning to the main menu";
}

void addMemberDiscount(char const input)
{
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

void apply_voucher_discount()
{
    // check if the discount is already added
    if (voucherDiscount != false) // case 1: discount added
    {
        char input;
        cout << "Voucher Discount Already Added!\n Do you wish to void Voucher Discount? (Y/n): ";
        cin >> input;

        // options to void the discount given
        if (input == 'Y' || input == 'y')
            cout << "Voucher Discount maintained!\n";

        else if (input == 'N' || input == 'n')
        {
            cout << "Voucher Discount voided!\n";
            voucherDiscount = false;
            voucherDiscountValue = 0.0;
        }

        else
            cout << "Error: Invalid input\nReturning to the main menu";
    }
    else // case 2: discount not yet added
    {
        cout << "\nApply voucher discounts(max 5%): ";
        cin >> voucherDiscountValue;

        // make sure that user enter a valid value
        while (voucherDiscountValue > 5 || voucherDiscountValue <= 0)
        {
            cout << "Error: Discount value must be between 0 and 5\nApply voucher discounts(max 5%): ";
            cin >> voucherDiscountValue;
        }
        cout << "Voucher Discount Applied!\n";
        voucherDiscountValue /= 100.0; // convert the value to 0.xxx for easy calculation
        voucherDiscount = true;
    }
}

void display_final_bill()
{
    cout << "\nFinal Bill:\n"
         << setw(25) << left << "Product " << setw(5)
         << "| Unit Price "
         << "| Quantity "
         << "| Total Cost (Discount Applied)";

    cout << "\n--------------------------------------------------------------------------------";

    // calculate and prints out the products and price

    //  to reduce lookups; "auto const&" means reference read-only variable
    auto const &products_count = products.size();
    double total = 0;

    for (int index = 0; index < products_count; index++)
    {
        double const finalPrice = priceAfterDiscount(index);

        cout << "\n"
             << setw(25) << left << products.at(index).name
             << "| $" << setw(10) << fixed << setprecision(2) << products.at(index).unitPrice
             << "| " << setw(9) << products.at(index).quantity
             << "| $" << finalPrice;

        total += finalPrice;
    }

    cout << "\n--------------------------------------------------------------------------------";

    // prints out the discounts given
    if (membershipDiscount != false)
        cout << "\nMembership Discount: 2.50%";

    if (voucherDiscount != false)
        cout << "\nVoucher Discount: " << fixed << setprecision(2) << voucherDiscountValue * 100 << "%";

    cout << "\n--------------------------------------------------------------------------------";

    // prints out total
    cout << "\nGrand Total Amount Due: $" << fixed << setprecision(2) << total;
}

double priceAfterDiscount(int const index)
{
    //  to reduce lookups; "auto const&" means reference read-only variable
    auto const &quantity = products.at(index).quantity;
    double discount;

    // case 1: no membership discount
    if (membershipDiscount == false)
        discount = quantity > 10 ? 0.90 - voucherDiscountValue
                 : quantity >= 5 ? 0.95 - voucherDiscountValue
                 : 1.00 - voucherDiscountValue;

    // case 2: membership discount applied
    else
        discount = quantity > 10 ? 0.875 - voucherDiscountValue
                 : quantity >= 5 ? 0.925 - voucherDiscountValue
                 : 0.975 - voucherDiscountValue;

    return products.at(index).unitPrice * quantity * discount;
}