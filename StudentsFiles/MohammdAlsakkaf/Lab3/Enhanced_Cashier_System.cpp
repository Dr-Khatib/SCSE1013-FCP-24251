#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const int MAX_PRODUCTS = 100; // Maximum number of products

// Struct to store product details
struct Product {
    string name;
    double unit_price;
    int quantity;
    double discounted_price;
};

// Function prototypes
Product add_product();
double apply_membership_discount(double total);
double apply_voucher_discount(double total);
void display_final_bill(Product products[], int product_count, double membership_discount, double voucher_discount);

int main() {
    Product products[MAX_PRODUCTS];
    int product_count = 0;
    double total_bill = 0.0;
    double membership_discount = 0.0;
    double voucher_discount = 0.0;
    int option;

    while (true) {
        cout << "\n--- Cashier System Menu ---" << endl;
        cout << "1. Add Product to Bill" << endl;
        cout << "2. Apply Membership Discount" << endl;
        cout << "3. Apply Voucher Discount" << endl;
        cout << "4. Display Final Bill and Exit" << endl;
        cout << "Enter an option: ";
        cin >> option;

        if (option == 1) {
            if (product_count < MAX_PRODUCTS) {
                Product product = add_product();
                products[product_count++] = product; // Store product in array
                total_bill += product.discounted_price;
            } else {
                cout << "Product list is full! Cannot add more products." << endl;
            }

        } else if (option == 2) {
            membership_discount = apply_membership_discount(total_bill);

        } else if (option == 3) {
            voucher_discount = apply_voucher_discount(total_bill);

        } else if (option == 4) {
            display_final_bill(products, product_count, membership_discount, voucher_discount);
            break;

        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}

// Function to add product details and calculate discounted price
Product add_product() {
    Product product;
    cout << "\nEnter product name: ";
    cin >> product.name;
    cout << "Enter unit price: ";
    cin >> product.unit_price;
    cout << "Enter quantity: ";
    cin >> product.quantity;

    double subtotal = product.unit_price * product.quantity;

    // Apply quantity discount
    if (product.quantity > 10) {
        subtotal *= 0.9; // 10% discount
    } else if (product.quantity >= 5) {
        subtotal *= 0.95; // 5% discount
    }

    product.discounted_price = subtotal;
    return product;
}

// Function to apply membership discount
double apply_membership_discount(double total) {
    char has_membership;
    cout << "Does the customer have a membership? (y/n): ";
    cin >> has_membership;

    if (has_membership == 'y' || has_membership == 'Y') {
        return total * 0.025; // 2.5% discount
    }
    return 0.0;
}

// Function to apply voucher discount (up to 5%)
double apply_voucher_discount(double total) {
    double voucher;
    cout << "Enter voucher discount percentage (max 5%): ";
    cin >> voucher;

    if (voucher > 5) voucher = 5; // Limit discount to 5%
    return total * (voucher / 100);
}

// Function to display final bill with all details and total amount due
void display_final_bill(Product products[], int product_count, double membership_discount, double voucher_discount) {
    double grand_total = 0.0;

    cout << "\n--- Final Bill ---" << endl;
    cout << left << setw(15) << "Product" << setw(10) << "Unit Price" << setw(10) << "Quantity" << setw(15) << "Discounted Price" << endl;
    cout << "-----------------------------------------------------" << endl;

    for (int i = 0; i < product_count; ++i) {
        cout << left << setw(15) << products[i].name
             << setw(10) << products[i].unit_price
             << setw(10) << products[i].quantity
             << setw(15) << products[i].discounted_price << endl;
        grand_total += products[i].discounted_price;
    }

    cout << "\nSubtotal: " << grand_total << endl;
    cout << "Membership Discount: -" << membership_discount << endl;
    cout << "Voucher Discount: -" << voucher_discount << endl;

    grand_total -= (membership_discount + voucher_discount);
    cout << "Total Amount Due: " << grand_total << endl;
}
