#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Product structure to hold details for each item added
struct Product {
    string name;
    double unit_price;
    int quantity;
    double discounted_price;
};

// Adds a product to the bill and calculate the product's total price with bulk discounts
double add_product(vector<Product> &products) {
    Product product;

    // Getting product information from user
    cout << "\nEnter product name: ";
    cin >> product.name;
    cout << "Enter unit price: $";
    cin >> product.unit_price;
    cout << "Enter quantity: ";
    cin >> product.quantity;

    // Calculate base price without any discount
    double total_price = product.unit_price * product.quantity;
    double discount_percentage = 0;

    // Apply bulk discount based on quantity
    if (product.quantity > 10) {
        total_price *= 0.9; // 10% discount
        discount_percentage = 10;
    } else if (product.quantity >= 5) {
        total_price *= 0.95; // 5% discount
        discount_percentage = 5;
    }

    product.discounted_price = total_price;
    products.push_back(product); // Store the product in the list

    if (discount_percentage > 0) {
        cout << "Product added with " << discount_percentage << "% bulk discount." << endl;
    }

    return total_price;
}

// Function that applies a 2.5% discount if the customer has a membership
bool apply_membership_discount(double &total) {
    char has_membership;
    cout << "Does the customer have a membership? (y/n): ";
    cin >> has_membership;

    if (has_membership == 'y' || has_membership == 'Y') {
        total *= 0.975; // 2.5% discount
        return true; // Membership exists
    }

    return false; // No membership
}

// Function that applies a voucher discount capped at 5% 
int apply_voucher_discount(double &total) {
    int voucher_discount;
    cout << "Enter voucher discount percentage (0-5): ";
    cin >> voucher_discount;

    // set max voucher discount to 5%
    if (voucher_discount > 5) {
        voucher_discount = 5;
    }

    total *= (1 - voucher_discount / 100.0); // Apply the voucher discount

    return voucher_discount; 
}

// Function to display the final bill
void display_final_bill(const vector<Product> &products, double total, bool has_membership, int voucher_discount) {
    cout << fixed << setprecision(2);
    cout << "\nFinal Bill: " << endl;
    cout << "Product\t\t| Unit Price\t| Quantity\t| Total Price(with discount)" << endl;
    cout << "------------------------------------------------------------------------" << endl;

    // Print details of each product
    for (const auto &product : products) {
        cout << product.name << "\t\t|" << "$" << product.unit_price << "\t\t| "
             << product.quantity << "\t\t| " << "$" << product.discounted_price << endl;
    }

    cout << "------------------------------------------------------------------------" << endl;

    if (has_membership) {
        cout << "Membership Discount: 2.5%" << endl;
    }

    cout << "Voucher Discount: " << voucher_discount << "%" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Grand Total: $" << total << endl;
}

int main() {
    vector<Product> products; 
    double total = 0.0;       
    bool has_membership = false; 
    int voucher_discount = 0;  
    int option;

    // Loop to display the menu and execute the selected options
    do {
        cout << "\nCashier Menu:\n";
        cout << "1. Add Product to Bill\n";
        cout << "2. Apply Membership Discount\n";
        cout << "3. Apply Voucher Discount\n";
        cout << "4. Display Final Bill and Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        // Perform actions based on choice
        switch (option) {
            case 1:
                total += add_product(products); // Add a product and update total
                break;
            case 2:
                has_membership = apply_membership_discount(total); // Apply membership discount
                break;
            case 3:
                voucher_discount = apply_voucher_discount(total); // Apply voucher discount
                break;
            case 4:
                display_final_bill(products, total, has_membership, voucher_discount); // Display final bill and exit
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (option != 4); // Exit loop

    return 0;
}
