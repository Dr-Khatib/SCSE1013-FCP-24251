/*
AQIL DZARFAN BIN ASRUL SHARAFF
"If it works, don't touch it"
*/
// after learning a bit more c++, this is my improved version

#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    struct product
    {
        double unit_price{};
        int quantity{};
        std::string name;
    };
    std::vector<product> products;
    product product;
    double total = 0.0;
    int choice;
    int index;
    bool menu = true; // condition to allow the program to repeat

    while (menu == true)
    {

        // main menu
        std::cout << "\nCashier System\n"
                  << "1. Add Product to Bill\n"
                  << "2. Display Final Bill and Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            // gather product data
            std::cout << "\nEnter Product Name: ";
            std::cin >> product.name;

            std::cout << "Enter Unit Price: ";
            std::cin >> product.unit_price;

            std::cout << "Enter Quantity Purchased: ";
            std::cin >> product.quantity;

            // inform the customer if the item elegible for discounts
            if (product.quantity > 10)
                std::cout << "Product added with a 10%" << " discount\n";

            else if (product.quantity >= 5)
                std::cout << "Product added with a 5%" << " discount\n";

            // store the gathered data into vector
            products.emplace_back(product);
            break;

        case 2:
            // just some fancy output formatting
            std::cout << "\nFinal Bill:\n"
                      << std::setw(25) << std::left << "Product " << std::setw(5)
                      << "| Unit Price "
                      << "| Quantity "
                      << "| Total Cost (Discount Applied)\n";
            std::cout << std::string(82, '-');

            // this for-statement is used calculate, total(discount applied) and print all of the product
            const int &product_count = products.size();
            for (index = 0; index < product_count; index++)
            {
                const int &quantity = products.at(index).quantity;
                double discount;

                if (quantity > 10)
                    discount = 0.9;

                else if (quantity >= 5)
                    discount = 0.95;

                else
                    discount = 1.0;

                const double nett_price = products.at(index).unit_price * quantity * discount;

                total += nett_price;

                // another fancy output formatting
                std::cout << "\n"
                          << std::setw(25) << std::left << products.at(index).name
                          << "| $" << std::setw(10) << std::fixed << std::setprecision(2) << products.at(index).unit_price
                          << "| " << std::setw(9) << quantity
                          << "| $" << nett_price;
            }

            std::cout << std::string(82, '-');
            std::cout << "\nGrand Total Amount Due: $" << std::fixed << std::setprecision(2) << total;

            menu = false; // to make sure the program doesnt repeat
            break;

        default:
            std::cout << "\nInvalid number. Please Try Again\n"; // just in case if the user mis-input
        }
    }
    return 0;
}