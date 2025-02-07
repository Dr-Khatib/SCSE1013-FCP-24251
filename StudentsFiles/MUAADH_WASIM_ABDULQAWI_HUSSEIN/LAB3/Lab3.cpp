#include <iostream>
#include <iomanip>
using namespace std;




void add_product(string &product_name , float &Unit_Price, int &Quantity_Purchased, float &productPrice  , float &productPrice1)
{
cout << "\nEnter Product Name: ";
        cin >> product_name ;
        cout << "Enter Unit Price: ";
        cin >> Unit_Price ;
        cout << "Enter Quantity Purchased: ";
        cin >> Quantity_Purchased ;

        productPrice = Unit_Price * Quantity_Purchased;
        Quantity_Purchased > 10 ? productPrice -= productPrice* 0.10 : (Quantity_Purchased <= 10 && Quantity_Purchased >= 5 ? productPrice -= productPrice * 0.05 : productPrice);
        productPrice1 = productPrice;

        if(Quantity_Purchased > 10){
        cout << "Product Added With a 10% bullk discount. \n";

        }else if(Quantity_Purchased <= 10 && Quantity_Purchased >= 5)
        cout << "Product Added With a 5% bullk discount. \n";
        else
        cout << "No discount if the quantity is fewer than 5 units.\n";
}
void apply_membership_discount(float &productPrice ,float &membership ){

    cout << "\nDoes the customer have a membership?: (yes/no): ";
        string yes_no;
        cin >> yes_no ;
        if (yes_no == "yes" || "YES" || "Yes"){
            productPrice -= productPrice * 0.025;
            cout <<  "2.5% membership discount applied.\n" ;
            membership = 2.5;
        }
        else {
            cout <<"No discount applied.\n";
            productPrice;}
            
}
void apply_voucher_discount(float &productPrice, float &voucher){
    cout << "\nEnter Voucher discount(MAX 5%)(Enter without %): ";
        cin >> voucher;
        if(voucher > 0 && voucher < 6){
        cout << "Voucher disscount applied.\n";
        productPrice -= productPrice * (voucher / 100.f) ;
        }
        else
        cout << "No Voucher disscount.\n";
}
void display_final_bill(float &productPrice, float &productPrice1, string &product_name, float &Unit_Price, int &Quantity_Purchased, float &membership,  float &voucher){
    cout << "\nFinal Bill:\n";
        cout << "Product | Unit Price | Quantity | Total Cost (Discount Applied)\n";
        cout << "--------------------------------------------------------------\n";
        cout << product_name<<"\t| $" << fixed << setprecision(2) << Unit_Price<<"      | " << Quantity_Purchased<<"        | $" << productPrice1 <<"  \n";
        cout << "--------------------------------------------------------------\n";
        cout << "Memmbership Disscount: "<< defaultfloat << membership <<"%\n";
        cout << "Voucher Disscount: " << voucher <<"%\n";
        cout << "--------------------------------------------------------------\n";
        cout << "Grand Total Amount Due: $"<< fixed << setprecision(2) << productPrice << "\n";
}

int main(){
    string product_name = "unknown"; 
    float Unit_Price = 0;
    int Quantity_Purchased = 0;
    int choice;
    float productPrice = 0;
    float membership = 0;
    float productPrice1;
    float voucher = 0 ; 
    while(1 == 1){
    cout << "\nCashier System\n";
    cout << "1. Add Product to Bill\n";
    cout << "2. Apply Membership Discount\n";
    cout << "3. Apply Voucher Discount\n";
    cout << "4. Display Final Bill and Exit\n";
    cout << "Enter your Choice(only numbers): ";
    cin >> choice;
    
    

    if (choice == 1){
        add_product(product_name , Unit_Price, Quantity_Purchased, productPrice, productPrice1 );

        
    }
    else if (choice == 2){
         apply_membership_discount(productPrice, membership);
        
    }

    else if (choice == 3){
        apply_voucher_discount(productPrice, voucher);
    }

    else if (choice == 4){
        display_final_bill(productPrice, productPrice1, product_name, Unit_Price, Quantity_Purchased, membership, voucher);
        return 1;
    }
    else 
        cout << "\nCHOOSE ONLY NUMBERS FROM 1-4\n";
    }
    return 0;
}