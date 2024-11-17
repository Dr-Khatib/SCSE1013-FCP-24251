#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float add_product(int);
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();
    
const int maxx = 10;
int TotalItem = 0, ItemQty[maxx] = {};
string ItemName[maxx] = {};
float ItemPrice[maxx] = {};
float TotalPrice[maxx] = {};

float memberDisc;
double voucher;
float GrandTotal;

int main(){
    int i = 0;
    int choice = 0;
    float GrandTotal;
    
    for (i = 0; i < maxx; i++)
    {
        while (choice != 4)
        {
            cout << "\nDisplay Menu Options\n";
            cout << "1. Add Product to Bill\n";
            cout << "2. Apply Membership Discount\n";
            cout << "3. Voucher Discount\n";
            cout << "4. Display Final Bill and Exit\n";
            cout << "Press Listed Number to Continue\n";
            cin >> choice;
            cin.ignore();

            if (choice == 1)
            {
                TotalPrice[i] = add_product(i);
                break;
            }
            else if (choice == 2){
                apply_membership_discount();
            }

            else if (choice == 3){
                apply_voucher_discount();
            }

            else if (choice == 4){
                display_final_bill();
                break;
            }

            else {
                cout << "Please insert a valid number.\n";
            } 
        }
    }
    
    return 0;
}

//Add Product Function
float add_product(int i){
    float sumPrice;
    cout << "\nEnter Product Name: ";
    getline(cin, ItemName[i]);

    cout << "Enter Unit Price: ";
    cin >> ItemPrice[i];
    cout << "Enter Quantity Purchased: ";
    cin >> ItemQty[i];
    
    if (ItemQty[i] > 10){
        sumPrice = (ItemPrice[i] * ItemQty[i]) * 0.9;
        cout << "10% discount applied.\n";
    }
    else if (ItemQty[i] >= 5, ItemQty[i] <= 10){
        sumPrice = (ItemPrice[i] * ItemQty[i]) * 0.95;
        cout << "5% discount applied.\n";
    }
    else {
        sumPrice = (ItemPrice[i] * ItemQty[i]);
    }  
    TotalItem++;
    return sumPrice;
}

//Add Membership Function
void apply_membership_discount(){
    char choice;
    cout << "\nDoes the customer have membership? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y'){
        memberDisc = 0.975;
        cout << "2.5% of membership discount applied.\n";
    }

    else{
        memberDisc = 0;
        cout << "No membership discount applied.\n";
    }
}

//Add Voucher Function
void apply_voucher_discount(){
    cout << "\nEnter voucher discount (max 5%) : ";
    cin >> voucher;
    cout << "Voucher discount applied.\n";
}

//Display Final Bill Function
void display_final_bill(){
    int i;
    cout << "\nFinal Bill: \n";
    cout << "Product  |  Unit Price  |  Quantity  |  Total Cost  (Discount Applied)\n";
    cout << "----------------------------------------------------------------------\n";
    for (i = 0; i < TotalItem; i++){
        cout << ItemName[i] << "  |  $" << ItemPrice[i] << "  |  " << ItemQty[i] << "  |  $" << TotalPrice[i] << "\n";
        GrandTotal = GrandTotal + TotalPrice[i];
    }
    
    cout << "----------------------------------------------------------------------\n";
    
    // Membership Discount
    if (memberDisc >= 0.975){
        cout << "Membership Discount: 2.5%\n";
        GrandTotal = memberDisc * GrandTotal;
    }
    else {
        cout << "Membership Discount: 0.0%\n";
    }

    // Voucher Discount
    if (voucher != 0){
        cout << "Voucher Discount: " << voucher << "%\n";
        GrandTotal = ((100 - voucher) / 100) * GrandTotal;
    }
    else {
        cout << "Voucher Discount: 0.0%\n";
    }

    cout << "Grand Total Amount Due: $" << GrandTotal;

}