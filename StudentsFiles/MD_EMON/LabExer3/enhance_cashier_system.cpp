
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Structure to hold product details
struct Product {
    string name;
    double unitPrice;
    int quantity;
    double discountedPrice;
};

// Function prototypes
double add_product(vector<Product>& products);
double apply_membership_discount(double total);
double apply_voucher_discount(double total);
void display_final_bill(const vector<Product>& products, double membershipDiscount, double voucherDiscount, double total);

int main() {
    vector<Product> products;
    double total = 0.0;
    double membershipDiscount = 0.0, voucherDiscount = 0.0;

    int choice;
    do {
        // Display menu
        cout << "\nCashier System\n";
        cout << "1. Add Product to Bill\n";
        cout << "2. Apply Membership Discount\n";
        cout << "3. Apply Voucher Discount\n";
        cout << "4. Display Final Bill and Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                total += add_product(products);
                break;
            case 2:
                membershipDiscount = apply_membership_discount(total);
                break;
            case 3:
                voucherDiscount = apply_voucher_discount(total);
                break;
            case 4:
                display_final_bill(products, membershipDiscount, voucherDiscount, total);
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to add a product
double add_product(vector<Product>& products) {
    Product product;
    cout << "\nEnter Product Name: ";
    cin >> ws; // Clear whitespace
    getline(cin, product.name);
    cout << "Enter Unit Price ($): ";
    cin >> product.unitPrice;
    cout << "Enter Quantity Purchased: ";
    cin >> product.quantity;

    // Apply bulk discount
    double totalPrice = product.unitPrice * product.quantity;
    if (product.quantity > 10) {
        totalPrice *= 0.90; // 10% discount
        cout << "Product added with a 10% bulk discount.\n";
    } else if (product.quantity >= 5) {
        totalPrice *= 0.95; // 5% discount
        cout << "Product added with a 5% bulk discount.\n";
    } else {
        cout << "Product added with no bulk discount.\n";
    }
    product.discountedPrice = totalPrice;
    products.push_back(product);

    return totalPrice;
}

// Function to apply membership discount
double apply_membership_discount(double total) {
    string hasMembership;
    cout << "\nDoes the customer have a membership? (yes/no): ";
    cin >> hasMembership;

    if (hasMembership == "yes" || hasMembership == "Yes") {
        double discount = total * 0.025; // 2.5% discount
        cout << "2.5% membership discount applied.\n";
        return discount;
    }
    cout << "No membership discount applied.\n";
    return 0.0;
}

// Function to apply voucher discount
double apply_voucher_discount(double total) {
    double voucher;
    cout << "\nEnter voucher discount (max 5%): ";
    cin >> voucher;

    if (voucher > 5) {
        voucher = 5;
    }
    double discount = total * (voucher / 100);
    cout << "Voucher discount applied.\n";
    return discount;
}

// Function to display the final bill
void display_final_bill(const vector<Product>& products, double membershipDiscount, double voucherDiscount, double total) {
    cout << "\nFinal Bill:\n";
    cout << left << setw(15) << "Product"
         << "| " << setw(12) << "Unit Price"
         << "| " << setw(8) << "Quantity"
         << "| " << setw(20) << "Total Cost (Discount Applied)" << "\n";
    cout << string(60, '-') << "\n";

    for (const auto& product : products) {
        cout << left << setw(15) << product.name
             << "| $" << setw(11) << fixed << setprecision(2) << product.unitPrice
             << "| " << setw(8) << product.quantity
             << "| $" << setw(19) << fixed << setprecision(2) << product.discountedPrice << "\n";
    }

    cout << string(60, '-') << "\n";
    cout << "Membership Discount: " << setw(10) << " " << fixed << setprecision(1) << "2.5%\n";
    cout << "Voucher Discount: " << setw(13) << " " << fixed << setprecision(1) << "4.5%\n";
    cout << string(60, '-') << "\n";
    cout << "Grand Total Amount Due: $" << fixed << setprecision(2) << total << "\n";
}
