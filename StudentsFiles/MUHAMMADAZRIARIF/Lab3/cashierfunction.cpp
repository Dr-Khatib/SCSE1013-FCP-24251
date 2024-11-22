#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//function
void applyMembershipDiscount();
void applyVoucherDiscount();
void addProduct();
void displayFinalBill(int);

//global declaration
    bool memberDiscount = false, voucherDiscount = false;
    const int limit = 50;
    char choice;
    int termination = 0, productNumber = 0, productTotal = 0;
    float grandTotal = 0.0, voucherDiscountAmount = 0.0;
    int productQuantity[limit];
    float productLastPrice [limit];
    float productPrice [limit];
    string product[limit];
    string memberChoice;
    
int main (){
    while (termination == 0){
        cout << "Cashier System \n1. Add Product to Bill \n2. Apply Membership Discount \n3. Apply Voucher Discount \n4. Display Final Bill and Exit \nEnter your choice:";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1':
            addProduct();
            break;
        case '2':
            applyMembershipDiscount();
            break;            
        case '3':
            applyVoucherDiscount();
            break;
        //choice to terminate the loop
        case '4':
            displayFinalBill(productNumber = 0);
            termination = 1;
            break;
        //output if choices not available
        default:
            cout << "Please choose valid choice\n";
            break;
        }
    }
}

void applyMembershipDiscount(){
    cout << "Does the customer have a membership? (yes/no): ";
    getline (cin,memberChoice);
    if (memberChoice == "yes"){
        cout << "2.5% membership discount applied\n";
        memberDiscount = true;
    } else if (memberChoice == "no"){
        cout << "No discount applied / membership discount retracted\n";
        memberDiscount = false;
    }
}

void applyVoucherDiscount(){
    do {
        cout << "Enter voucher discount (max 5%): ";
        cin >> voucherDiscountAmount;
    } while (voucherDiscountAmount < 0 || voucherDiscountAmount > 5.0);
    voucherDiscount = true;
}

void addProduct(){
    if (productNumber < limit){
        cout << "\nEnter Product Name:";
        getline (cin,product[productNumber]);
        cout << "Enter Unit Price: ";
        cin >> productPrice[productNumber];
        cout << "Enter Quantity purchased: ";
        cin >> productQuantity[productNumber];
        if (productQuantity[productNumber] > 10){
            productLastPrice[productNumber] = productPrice[productNumber] * productQuantity[productNumber] * 0.9;
            cout << "Product added with a 10% discount\n\n"; 
        }
        else if (5 <= productQuantity[productNumber] && productQuantity[productNumber] <= 10) {
            productLastPrice[productNumber] = productPrice[productNumber] * productQuantity[productNumber] * 0.95;
            cout << "Product added with a 5% discount\n\n";
        }
        else {
            productLastPrice[productNumber] = productPrice[productNumber] * productQuantity[productNumber];
            cout << "\n";
        }
        productTotal ++;
        productNumber ++;
        } else {
            cout << "product limit reached\n";
        }
}

void displayFinalBill(int j){    
    //print the output
    cout << left << setw(15) << "Product" << "| " << left << setw(15) << "Unit Price" << "| " << left << setw(15) << "Quantity" << "| " << left << setw(15) << "Total Cost (Discount Applied)\n";
    cout << string(15 * 5 +5, '-') << endl; 
    //printing each product according to product number
    for (int i =0; i < productTotal; i++){
        cout << left << setw(15) << product[j] << "| " << fixed << setprecision(2) << "RM" << left << setw(13) <<productPrice[j] << "| " << left << setw(15) << productQuantity[j] << "| " << "RM "<< left << setw(15) << productLastPrice[j]  << endl;
        grandTotal += productLastPrice[j];
        j++;
    }
    cout << string(15 * 5 +5, '-') << endl;
    if (memberDiscount == true){
        grandTotal *= 0.975;
        cout << "Membership Discount: 2.5%" << endl;
    }
    if (voucherDiscount == true){
        grandTotal *= ((100 - voucherDiscountAmount) / 100);
        cout << "Voucher Discount: " << voucherDiscountAmount << "%" << endl; 
    }
    cout << string(15 * 5 +5, '-') << endl;
    cout << "Grand Total Amount Due: RM " << grandTotal;
}