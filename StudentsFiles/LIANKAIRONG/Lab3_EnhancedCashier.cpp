#include <iostream>
#include <iomanip>
using namespace std;

const int maxproduct = 1000 ;
    int i =0,quantity[maxproduct];
    string product[maxproduct];
    float Unitprice[maxproduct],costProduct[maxproduct];
    float totalAmount=0,voucher_discount=0;
    bool membershipApplied = false ;
    

void add_product();
void apply_membership_discount();
void apply_voucher_discount();
void display_final_bill();

int main(){
    int choice;
   
    do{
    cout << "     Menu for Cashier     \n";
    cout << "------------------------------\n";
    cout << "1. Add Product to Bill\n" << "2. Apply Membership Discount\n" 
        << "3. Apply Voucher Discount\n" << "4. Display Final Bill and Exit\n";
    cout << "Your Choice is : ";
    cin >> choice;

      
            switch (choice){
            case 1:
                add_product();
                break;
            case 2:
                apply_membership_discount();
                break;
            case 3:
                apply_voucher_discount();
                break;
            case 4:
                display_final_bill();
                break;
            default:
                cout <<"Invalid Choice. Try Again\n";
            }
    }while (choice!= 4);

return 0;
}

void add_product(){
    cout << "\nEnter Product Name: ";
    cin >> product[i];
    cout << "Enter Unit Price: ";
    cin >> Unitprice[i];
    cout << "Enter Quantity Purchased: ";
    cin >> quantity[i];
    costProduct[i] = quantity[i] * Unitprice[i];

    if (quantity[i] >10){
            costProduct[i] *= 0.9;
            cout << "Product added with a 10% discount.\n\n";
        }else if(quantity[i]>=5 && quantity[i]<=10){
            costProduct[i] *= 0.95;
            cout << "Product added with a 5% discount.\n\n";
        }else{
            cout << "No discount given\n\n";        
        }

        totalAmount += costProduct[i];
        i += 1;
}

void apply_membership_discount(){
    string membership;
    cout << "Does the customer have a membership? (yes/no) : ";
    cin >> membership;

    if (membership == "yes"){
        membershipApplied = true;
        cout << "Your membership discount 2.5% is successfully applied!\n\n";
    }else{
        cout << "Sorry, you cannot apply membership discount\n\n";
    }
}

void apply_voucher_discount(){
    cout << "\nPlease Enter Voucher Discount Value : ";
    cin >> voucher_discount;

    if (voucher_discount > 5){
        voucher_discount = 5;
        cout << "The voucher discount is limited to 5%\n\n";
    }else {
        cout << "The voucher discount " << voucher_discount << "% is applied\n\n";
    }
    voucher_discount /= 100; 
}

void display_final_bill(){
    double Final_Bill = totalAmount;
    if (membershipApplied == true){
        Final_Bill *= 0.975;
    }
    Final_Bill *= (1-voucher_discount);

    cout << "\nFinal Bill:\n";
    cout << left << setw(15) << "Product" << setw(15) << "| Unit Price" << setw(15) << "| Quantity" << setw(25) <<"| Total Cost (Discount Applied)\n";
    cout << "--------------------------------------------------------------------------\n";
    
    for(int j=0;j<i;j+=1){
        cout <<  left << setw(15) << product[j] << "| RM "<< setw(10) << Unitprice[j] << "| "<<  setw(13) << quantity[j] <<"| RM "<<  setw(22) << fixed << setprecision(2) << costProduct[j] << endl;
    }
    cout << "--------------------------------------------------------------------------\n";
    if (membershipApplied == true && voucher_discount > 0 ){
        cout << "Membership Discount : 2.5% "<< endl;
        cout << "Voucher Discount    : "  << voucher_discount*100 << "%" << endl;
        cout << "--------------------------------------------------------------------------\n";
    }else if (membershipApplied == true){
        cout << "Membership Discount : 2.5% "<< endl;
        cout << "--------------------------------------------------------------------------\n";  
    }else if (voucher_discount > 0){
        cout << "Voucher Discount    : "  << voucher_discount*100 << "%" << endl;
        cout << "--------------------------------------------------------------------------\n";
    }
    cout << "Grand Total Amount Due    : RM " << fixed << setprecision(2) << Final_Bill;
}