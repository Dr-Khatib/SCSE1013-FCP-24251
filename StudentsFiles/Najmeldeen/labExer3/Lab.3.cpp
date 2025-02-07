#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_PRODUCTS = 10; 

struct Product {
    string product_name;
    double unit_price;
    int quantity;
    double discounted_price;
};

double add_product(Product& new_product) 
{
    cout << "Enter product name: ";
    cin >> new_product.product_name;
    cout << "Enter unit price: ";
    cin >> new_product.unit_price;
    cout << "Enter quantity: ";
    cin >> new_product.quantity;

    double discount = 0.0;
    if (new_product.quantity > 10) {
        discount = 0.10;
    } else if (new_product.quantity >= 5) {
        discount = 0.05;
    }

    new_product.discounted_price = new_product.unit_price * new_product.quantity * (1 - discount);
    return new_product.discounted_price;
}

double apply_membership_discount(double total_amount) 
{
    string membership;
    cout << "Does the customer have a membership (yes/no)? ";
    cin >> membership;
    if (membership == "yes" || membership == "Yes") 
	{
        total_amount *= 0.975;
        cout << "Membership discount applied. New total: $" << fixed << setprecision(2) << total_amount << endl;
    }
    return total_amount;
}

double apply_voucher_discount(double total_amount) 
{
    double voucher_discount;
    cout << "Enter voucher discount percentage (up to 5%): ";
    cin >> voucher_discount;
    if (voucher_discount > 5) {
        cout << "Voucher discount cannot exceed 5%. Limiting to 5%." << endl;
        voucher_discount = 5;
    }
    total_amount *= (1 - voucher_discount / 100);
    cout << "Voucher discount applied. New total: $" << fixed << setprecision(2) << total_amount << endl;
    return total_amount;
}

void display_final_bill(Product products[], int product_count, double total_amount) 
{
    cout << endl << "----- Final Bill -----" << endl;
    cout << left << setw(20) << "Product" << setw(12) << "Unit Price" << setw(10) << "Quantity" << setw(15) << "Discounted Price" << endl;

    for (int i = 0; i < product_count; ++i) {
        Product& product = products[i];
        cout << setw(20) << product.product_name
             << setw(12) << fixed << setprecision(2) << product.unit_price
             << setw(10) << product.quantity
             << setw(15) << fixed << setprecision(2) << product.discounted_price << endl;
    }

    cout <<endl << "Total amount due (after discounts): $" << fixed << setprecision(2) << total_amount << endl;
}

void cashier_system() 
{
    Product products[MAX_PRODUCTS]; 
    int product_count = 0;
    double total_amount = 0.0;

    while (true) {
        cout <<endl << "----- Menu -----" << endl;
        cout << "1. Add Product to Bill" << endl;
        cout << "2. Apply Membership Discount" << endl;
        cout << "3. Apply Voucher Discount" << endl;
        cout << "4. Display Final Bill and Exit" << endl;

        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            if (product_count < MAX_PRODUCTS) {
                Product new_product;
                double total_price = add_product(new_product);

                products[product_count] = new_product;
                product_count++; 
                total_amount += total_price;
            } else {
                cout << "Cannot add more products. Maximum limit reached." << endl;
            }

        } else if (choice == 2) {
            total_amount = apply_membership_discount(total_amount);

        } else if (choice == 3) {
            total_amount = apply_voucher_discount(total_amount);

        } else if (choice == 4) {
            display_final_bill(products, product_count, total_amount);
            break;

        } else {
            cout << "Invalid choice, please enter a valid option (1-4)." << endl;
        }
    }
}

int main() 
{
    cashier_system();
    return 0;
}

