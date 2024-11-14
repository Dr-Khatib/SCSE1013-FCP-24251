#include <bits/stdc++.h>
using namespace std;
struct Product {
    string name;
    double unitPrice;
    int quantity;
    double totalPrice;
};
double add_product(vector<Product> &bill) {
    Product product;
    cout << "Enter product name: ";
    cin >> product.name;
    cout << "Enter unit price: ";
    cin >> product.unitPrice;
    cout << "Enter quantity: ";
    cin >> product.quantity;
    product.totalPrice = product.unitPrice * product.quantity;
    if (product.quantity > 10) {
        product.totalPrice *= 0.9; 
    } else if (product.quantity >= 5) {
        product.totalPrice *= 0.95; 
    }
    bill.push_back(product);
    return product.totalPrice;
}
double apply_membership_discount(double total) {
    char hasMembership;
    cout << "Does the customer have a membership? (y/n): ";
    cin >> hasMembership;
    if (hasMembership == 'y' || hasMembership == 'Y') {
        total *= 0.975;
    }
    return total;
}
double apply_voucher_discount(double total) {
    double voucherDiscount;
    cout << "Enter voucher discount percentage (max 5%): ";
    cin >> voucherDiscount;
    if (voucherDiscount > 5.0) {
        voucherDiscount = 5.0; 
    }
    total *= (1 - voucherDiscount / 100);
    return total;
}
void display_final_bill(const vector<Product> &bill, double grandTotal) {
    cout << fixed << setprecision(2);
    cout << "\n--- Final Bill ---\n";
    cout << left << setw(15) << "Product" << setw(10) << "Unit Price" << setw(10) << "Quantity" << setw(15) << "Total Price" << endl;

    for (const auto &product : bill) {
        cout << left << setw(15) << product.name << setw(10) << product.unitPrice << setw(10) << product.quantity << setw(15) << product.totalPrice << endl;
    }

    cout << "\nGrand Total: $" << grandTotal << endl;
}
int main() {
    vector<Product> bill;
    double totalBill = 0.0;
    int option;

    while (true) {
        cout << "\nMenu Options:\n";
        cout << "1. Add Product to Bill\n";
        cout << "2. Apply Membership Discount\n";
        cout << "3. Apply Voucher Discount\n";
        cout << "4. Display Final Bill and Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1) {
            totalBill += add_product(bill);
        } else if (option == 2) {
            totalBill = apply_membership_discount(totalBill);
        } else if (option == 3) {
            totalBill = apply_voucher_discount(totalBill);
        } else if (option == 4) {
            display_final_bill(bill, totalBill);
            break;
        } else {
            cout << "Invalid option. Please try again.\n";
        }
    }
    return 0;
}




