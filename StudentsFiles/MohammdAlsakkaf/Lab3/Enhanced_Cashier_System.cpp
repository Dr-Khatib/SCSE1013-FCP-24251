#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int MAX_PRODUCTS = 100;
//..
//......
//...........
//................
struct Product {
    string name;
    double unit_price;
    int quantity;
    double discounted_price;
};
Product add_product();
double apply_membership_discount(double total);
double apply_voucher_discount(double total);
void display_final_bill(Product products[], int product_count, double membership_discount, double voucher_discount);                              
//................
//...........
//......
//..
                           
//..
//......
//...........
//................
int main() {
    Product products[MAX_PRODUCTS];
    int product_count = 0;
    double total_bill = 0.0;
    double membership_discount = 0.0;
    double voucher_discount = 0.0;
    int option;

    while (true) {
        cout << "\nCashier System" << endl;
        cout << "1. Add Product to Bill" << endl;
        cout << "2. Apply Membership Discount" << endl;
        cout << "3. Apply Voucher Discount" << endl;
        cout << "4. Display Final Bill and Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        if (option == 1) {
            if (product_count < MAX_PRODUCTS) {
                Product product = add_product();
                products[product_count++] = product;
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
//................
//...........
//......
//..

//..
//......
//...........
//................
Product add_product() {
    Product product;
    cout << "\nEnter Product Name: ";
    cin >> product.name;
    cout << "Enter Unit Price: ";
    cin >> product.unit_price;
    cout << "Enter Quantity Purchased: ";
    cin >> product.quantity;

    double subtotal = product.unit_price * product.quantity;

    if (product.quantity > 10) {
        subtotal *= 0.9;
        cout << "Product added with a 10% bulk discount." << endl;
    } else if (product.quantity >= 5) {
        subtotal *= 0.95;
        cout << "Product added with a 5% bulk discount." << endl;
    } else {
        cout << "Product added with no bulk discount." << endl;
    }

    product.discounted_price = subtotal;
    return product;
}

double apply_membership_discount(double total) {
    string has_membership;
    cout << "Does the customer have a membership? (yes/no): ";
    cin >> has_membership;

    if (has_membership == "yes" || has_membership == "Yes") {
        cout << "2.5% membership discount applied." << endl;
        return total * 0.025;
    }
    cout << "No membership discount applied." << endl;
    return 0.0;
}

double apply_voucher_discount(double total) {
    double voucher;
    cout << "Enter voucher discount (max 5%): ";
    cin >> voucher;
    cin.ignore(1, '%');

    if (voucher > 5) voucher = 5;
    cout << fixed << setprecision(1) << voucher << "% voucher discount applied." << endl;
    return total * (voucher / 100);
}

void display_final_bill(Product products[], int product_count, double membership_discount, double voucher_discount) {
    double grand_total = 0.0;

    cout << "\nFinal Bill:\n" << endl;
    cout << left << setw(10) << "Product" << " | "
         << setw(10) << "Unit Price" << " | "
         << setw(8) << "Quantity" << " | "
         << setw(20) << "Total Cost (Discount Applied)" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < product_count; ++i) {
        cout << left << setw(10) << products[i].name << " | "
             << "$" << setw(8) << fixed << setprecision(2) << products[i].unit_price << " | "
             << setw(8) << products[i].quantity << " | "
             << "$" << setw(20) << fixed << setprecision(2) << products[i].discounted_price << endl;
        grand_total += products[i].discounted_price;
    }

    cout << "\nMembership Discount: " << fixed << setprecision(1) << (membership_discount / grand_total * 100) << "%" << endl;
    cout << "Voucher Discount: " << fixed << setprecision(1) << (voucher_discount / grand_total * 100) << "%" << endl;

    grand_total -= (membership_discount + voucher_discount);
    cout << "\n-------------------------------------------------------------" << endl;
    cout << "Grand Total Amount Due: $" << fixed << setprecision(2) << grand_total << endl;
}
//................
//...........
//......
//..