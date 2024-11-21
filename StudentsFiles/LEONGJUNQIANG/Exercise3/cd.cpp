#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int productmax = 1000;
int productcount = 0;

void add_product();
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();

string p_name[productmax];
double price[productmax];
int quantity[productmax];
double discount1[productmax];
double discount2 = 0;
double discount3 = 0;

int main() {
    string option;

    do {
        cout << "Cashier System \n";
        cout << "1. Add Product to Bill \n";
        cout << "2. Apply Membership Discount \n";
        cout << "3. Apply Voucher Discount \n";
        cout << "4. Display Final Bill and Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        if (option == "1") {
            add_product();
        } else if (option == "2") {
            apply_membership_discount();
        } else if (option == "3") {
            apply_voucher_discount();
        } else if (option == "4") {
            display_final_bill();
        } else {
            cout << "INVALID OPTION! \n";
        }
    } while (option != "4");

    return 0;
}

void add_product() {
    cout << "Enter Your Product Name: ";
    cin.ignore();
    getline(cin, p_name[productcount]);
    cout << "Enter Your Unit Price: ";
    cin >> price[productcount];
    cout << "Enter Your Quantity: ";
    cin >> quantity[productcount];

    if (quantity[productcount] > 10) {
        discount1[productcount] = 0.1;
    } else if (quantity[productcount] >= 5 && quantity[productcount] <= 10) {
        discount1[productcount] = 0.05;
    } else {
        discount1[productcount] = 0.0;
    }

    cout << setprecision(0) << fixed << "Product " << p_name[productcount] << " added with a " << (discount1[productcount] * 100) << "% discount\n";
    productcount++;
}

void apply_membership_discount() {
    string option;

    cin.ignore(); 
    do {
        cout << "Does the customer have a membership? (Yes/No): ";
        getline(cin, option);

        if (option == "Yes") {
            discount2 = 0.025; // 2.5% membership discount
            break;
        } else if (option == "No") {
            discount2 = 0.0; // No discount
            break;
        } else {
            cout << "INVALID OPTION! Please retype.\n";
        }
    } while (true);

    cout << setprecision(1) << fixed << (discount2 * 100) << "% membership discount applied.\n";
}

void apply_voucher_discount() {
    string input;

    do {
        cout << "Enter voucher discount (max 5%, include %): ";
        cin >> input;

        if (input.back() == '%') {
            input.pop_back();

            discount3 = stod(input);

            if (discount3 >= 0 && discount3 <= 5) {
                cout << "Voucher discount " << discount3 << "% applied.\n";
                break;
            } else {
                cout << "Invalid discount. Please enter a value between 0% and 5%.\n";
            }
        } else {
            cout << "Invalid input. Please include the '%' symbol.\n";
        }
    } while (true);
}

void display_final_bill() {
    double totalcost[productmax];
    double overall = 0.0;

    cout << "\nFINAL BILL:\n";

    for (int j = 0; j < productcount; j++) {
        totalcost[j] = price[j] * (1 - discount1[j]) * quantity[j];
        overall += totalcost[j];
    }

    overall *= (1 - discount2);
    overall *= (1 - (discount3 / 100));

    cout << "___________________________________________________________________________________________\n";
    cout << left 
         << setw(20) << "| Product"
         << setw(20) << "| Unit Price"
         << setw(20) << "| Quantity"
         << setw(20) << "| Total Cost (Discount Applied) |\n";
    cout << "-------------------------------------------------------------------------------------------\n";

    for (int i = 0; i < productcount; i++) {
        cout << left 
             << setw(20) << p_name[i]
             << setw(20) << fixed << setprecision(2) << price[i]
             << setw(20) << quantity[i]
             << setw(20) << fixed << setprecision(2) << totalcost[i] 
             << "|\n";
    }

    cout << "-------------------------------------------------------------------------------------------\n";
    cout << "Membership Discount: " << discount2 * 100 << "%\n";
    cout << "Voucher Discount: " << discount3 << "%\n";
    cout << "-------------------------------------------------------------------------------------------\n";
    cout << setprecision(2) << fixed << "Grand Total: RM " << overall << "\n";
}
