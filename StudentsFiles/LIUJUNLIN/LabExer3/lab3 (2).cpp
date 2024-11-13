#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


struct Product {
    std::string name;
    double unitPrice;
    int quantity;
    double discountedPrice;
};


double add_product(std::vector<Product> &products) {
    Product product;
    std::cout << "Enter Product Name: ";
    std::getline(std::cin, product.name);
    std::cout << "Enter Unit Price: ";
    std::cin >> product.unitPrice;
    std::cout << "Enter Quantity Purchased: ";
    std::cin >> product.quantity;
    std::cin.ignore();


    if (product.quantity > 10) {
        product.discountedPrice = product.unitPrice * product.quantity * 0.9;
        std::cout << "Product added with a 10% bulk discount." << std::endl;
    } else if (product.quantity >= 5 && product.quantity <= 10) {
        product.discountedPrice = product.unitPrice * product.quantity * 0.95;
        std::cout << "Product added with a 5% bulk discount." << std::endl;
    } else {
        product.discountedPrice = product.unitPrice * product.quantity;
    }

    products.push_back(product);
    return product.discountedPrice;
}


double apply_membership_discount(double total) {
    char hasMembership;
    std::cout << "Does the customer have a membership? (yes/no): ";
    std::cin >> hasMembership;
    std::cin.ignore();
    if (hasMembership == 'y' || hasMembership == 'Y') {
        total *= 0.975;
        std::cout << "2.5% membership discount applied." << std::endl;
    }
    return total;
}


double apply_voucher_discount(double total) {
    double voucherDiscount;
    std::cout << "enter voucher discount (max 5%): ";
    std::cin >> voucherDiscount;
    std::cin.ignore();
    if (voucherDiscount > 5) {
        voucherDiscount = 5;
    }
    total *= (1 - voucherDiscount / 100.0);
    std::cout << "Voucher discount applied." << std::endl;
    return total;
}


void display_final_bill(const std::vector<Product> &products, double total) {
    std::cout << "Final Bill:" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Product | Unit Price | Quantity | Total Cost (Discount applied)" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    for (size_t i = 0; i < products.size(); ++i)  {
    	const Product& p = products[i];
        std::cout << p.name << " | $" << p.unitPrice << " | " << p.quantity << " | $" << p.discountedPrice << std::endl;
    }
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "Membership Discount: 2.5%" << std::endl;
    std::cout << "Voucher Discount: " << (1 - total / (total / (1 - 0.025))) * 100 << "%" << std::endl;
    std::cout << "Grand Total Amount Due: $" << total << std::endl;
}

int main() {
    std::vector<Product> products;
    double total = 0;
    int choice;

    do {
        std::cout << "Cashier System" << std::endl;
        std::cout << "1. Add Product to Bill" << std::endl;
        std::cout << "2. Apply Membership Discount" << std::endl;
        std::cout << "3. Apply Voucher Discount" << std::endl;
        std::cout << "4. Display Final Bill and Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                total += add_product(products);
                break;
            case 2:
                total = apply_membership_discount(total);
                break;
            case 3:
                total = apply_voucher_discount(total);
                break;
            case 4:
                display_final_bill(products, total);
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice!= 4);

    return 0;
}
