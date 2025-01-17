#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float addProduct(float grandTotal, string& productName, float& unitPrice, int& quantity, float& totalCost);
float applyMembershipDiscount(float grandTotal);
float applyVoucherDiscount(float grandTotal);
void displayFinalBill(string productName, float unitPrice, int quantity, float totalCost, float grandTotal);

int main() {
    float grandTotal = 0.0;
    int choice;
    string productName;
    float unitPrice, totalCost;
    int quantity;

    while (true) {
        cout << "\n*** Cashier System ***\n";
        cout << "1. Add Product to Bill\n";
        cout << "2. Apply Membership Discount\n";
        cout << "3. Apply Voucher Discount\n";
        cout << "4. Display Final Bill and Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 1) {
            grandTotal = addProduct(grandTotal, productName, unitPrice, quantity, totalCost);
        } else if (choice == 2) {
            grandTotal = applyMembershipDiscount(grandTotal);
        } else if (choice == 3) {
            grandTotal = applyVoucherDiscount(grandTotal);
        } else if (choice == 4) {
            displayFinalBill(productName, unitPrice, quantity, totalCost, grandTotal);
            break;
        } else {
            cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}

float addProduct(float grandTotal, string& productName, float& unitPrice, int& quantity, float& totalCost) {
    float discountRate = 0.0;

    cout << "\nEnter Product Name: ";
    cin >> productName;
    cout << "Enter Unit Price: ";
    cin >> unitPrice;
    cout << "Enter Quantity Purchased: ";
    cin >> quantity;

    if (quantity > 10) {
        discountRate = 0.10; 
    } else if (quantity >= 5) {
        discountRate = 0.05;
    } else {
        discountRate = 0.0;
    }

    totalCost = unitPrice * quantity * (1 - discountRate);
    grandTotal += totalCost;

    cout << "Product added with a " << (discountRate * 100) << "% discount.\n";

    return grandTotal;
}

float applyMembershipDiscount(float grandTotal) {
    char hasMembership;
    cout << "\nDoes the customer have a membership (Y/N)? ";
    cin >> hasMembership;

    if (hasMembership == 'Y' || hasMembership == 'y') {
        float membershipDiscount = 0.025;
        grandTotal -= grandTotal * membershipDiscount;
        cout << "2.5% membership discount applied.\n";
    } else {
        cout << "No membership discount applied.\n";
    }

    return grandTotal;
}

float applyVoucherDiscount(float grandTotal) {
    float voucherDiscount;
    cout << "\nEnter voucher discount (max 5%): ";
    cin >> voucherDiscount;

    if (voucherDiscount > 5.0) {
        voucherDiscount = 5.0; 
    }
    grandTotal -= grandTotal * (voucherDiscount / 100);
    cout << "Voucher discount applied.\n";

    return grandTotal;
}

void displayFinalBill(string productName, float unitPrice, int quantity, float totalCost, float grandTotal) {
    float membershipDiscount = 2.5;
    float voucherDiscount = 4.5;
    float discountApplied = (grandTotal * membershipDiscount / 100) + (grandTotal * voucherDiscount / 100);
    float finalAmountDue = grandTotal - discountApplied;

    cout << "\nFinal Bill:\n";
    cout << "---------------------------------------------------------------\n";
    cout << left << setw(10) << "Product" << " | "
         << setw(10) << "Unit Price" << " | "
         << setw(10) << "Quantity" << " | "
         << "Total Cost (Discount Applied)" << endl;
    cout << "---------------------------------------------------------------\n";
    cout << setw(10) << productName << " | $"
         << fixed << setprecision(2) << setw(9) << unitPrice << " | "
         << setw(8) << quantity << " | $"
         << setw(7) << totalCost << endl;
    cout << "---------------------------------------------------------------\n";
    cout << "Membership Discount: " << membershipDiscount << "%" << endl;
    cout << "Voucher Discount: " << voucherDiscount << "%" << endl;
    cout << "---------------------------------------------------------------\n";
    cout << "Grand Total Amount Due: $"<< finalAmountDue << endl;
}

