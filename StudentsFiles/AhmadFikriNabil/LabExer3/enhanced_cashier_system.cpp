/*
    Enhanced Cashier System
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 14/11/2024
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


float add_product(int index);
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();


const int maxProduct = 10;
string product[maxProduct] = {};
int productQuantity[maxProduct] = {}, totalProduct = 0;
float unitPrice[maxProduct] = {}, totalPrice[maxProduct] = {};

float membershipDiscount = 0.0;
float voucherDiscount = 0.0;

int main() {

    int i = 0;
    int choice = 0;

   for (i = 0; i < maxProduct; i++) {
        while (choice != 4) {
            cout << "\n\nCashier System";
            cout << "\n1. Add Product to Bill\n2. Apply Membership Discount\n3. Apply Voucher Discount\n4. Display final Bill and Exit";
            cout << "\nEnter your choice: ";
            cin >> choice;
            cin.ignore();

            if (choice == 1) {
                totalPrice[i] = add_product(i);
                totalProduct++;
                break;
            }
            else if (choice == 2) {
                apply_membership_discount();
            }
            else if (choice == 3) {
                apply_voucher_discount();
            }
            else
                break;
        }
        if (choice == 4)
            break;
   }

    display_final_bill();

    return 0;
}

float add_product(int index) {

    string name = "";
    float price = 0.0, totalPrice = 0.0;
    int quantity = 0;

    cout << "\n\nEnter Product Name: ";
    cin >> name;
    cout << "Enter Unit Price: ";
    cin >> price;
    cout << "Enter Quantity Purchased: ";
    cin >> quantity;

    if (quantity > 10) {
        totalPrice = 0.9 * (quantity * price);
        cout << "Product added with a 10% discount.";
    }
    else if (quantity >= 5 && quantity <= 10) {
        totalPrice = 0.95 * (quantity * price);
        cout << "Product added with a 5% discount.";
    }
    else {
        totalPrice = (quantity * price);
        cout << "Product added with no discount.";
    }

    product[index] = name;
    unitPrice[index] = price;
    productQuantity[index] = quantity;

    return totalPrice;
}

void apply_membership_discount() {

    string choice = "";
    cout << "\nDoes the customer have a membership? (yes/no): ";
    cin >> choice;

    if (choice == "yes") {
        membershipDiscount = 2.5;
        cout << "2.5% membership discount applied.";
    }
    else 
        cout << "No membership discount applied.";

}

void apply_voucher_discount() {

    cout << "\n\nEnter voucher discount (max 5%): ";
    cin >> voucherDiscount;
    cout << "Voucher discount applied.";

}

void display_final_bill() {

    int i = 0;
    float discountRate = 100.0, grandTotal = 0.0;

    cout << fixed << setprecision(2);
    cout << "\nFinal Bill: \nProduct\t| Unit Price\t| Quantity\t| Total Cost (Discount Applied)";
    cout << "\n----------------------------------------------------------------------";

    for (i = 0; i < totalProduct; i++) {
        cout << "\n" << product[i] << "\t| $" << unitPrice[i] << "\t\t| " << productQuantity[i] << "\t\t| $" << totalPrice[i];
        grandTotal += totalPrice[i];
    }
    cout << "\n----------------------------------------------------------------------";
    cout << "\nMembership Discount: " << membershipDiscount << "%";
    cout << "\nVoucher Discount: " << voucherDiscount << "%";
    discountRate = (discountRate - membershipDiscount - voucherDiscount)/100;
    grandTotal = discountRate * grandTotal;
    cout << "\n----------------------------------------------------------------------";
    cout << "\nGrand Total Amount Due: $" << grandTotal << "\n\n";

}