#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double add_product ();
double apply_membership_discount ();
double apply_voucher_discount ();
void display_final_bill (double, double, double); 

ofstream outBills("Bills.txt");

int main ()
{
	int MenuC, counter = 1;                          // MenuC  = Menu Choice
	double TPrice = 0, MDiscount = 0, VDiscount = 0; // TPrice = Total Price | MDiscount = Membership Discount | VDiscount = Voucher Discount

	do
	{
	    cout << "Cashier System"                 << endl
	         << "1. Add Product to Bill"         << endl
	         << "2. Apply Membership Discount"   << endl
	         << "3. Apply Vouncher Discount"     << endl
	         << "4. Display Final Bill and Exit" << endl
			 << "Enter your choice: ";
	    cin  >> MenuC;
	    cout << endl;
	    
	    if      (MenuC == 1) TPrice += add_product();
	    else if (MenuC == 2) MDiscount = apply_membership_discount();
	    else if (MenuC == 3) VDiscount = apply_voucher_discount();
	    else if (MenuC == 4) break;
	    else                 {cout << "Invalid choice. Please try again." << endl << endl; continue;}
	}
	while (counter = 1);
	
	outBills.close();
	
	TPrice = TPrice * ((100 - MDiscount - VDiscount) / 100.0);
	
	display_final_bill(MDiscount, VDiscount, TPrice);
	
	return 0;
}

double add_product ()
{
	string PName;                  // PName  = Product Name
	double UPrice, DPrice, TPrice; // UPrice = Unit Price | DPrice = Discounted Price | TPrice = Total Price
	int QPurchased, Discount;      // QPurchased = Quantity Purchased 
	
	cout << "Enter Product Name: "      ; cin.ignore(10, '\n'); getline(cin, PName); 
	cout << "Enter Unit Price: "        ; cin >> UPrice; 
	if (UPrice < 0) {cout << "Unit Price cannot be negative. Please Try Again.\n\n"; return 0;}
	cout << "Enter Quantity Purchased: "; cin >> QPurchased;
		
	if      (QPurchased >  10)                    Discount = 10;
	else if (QPurchased >= 5 && QPurchased <= 10) Discount = 5;
	else if (QPurchased <  5 && QPurchased >= 0 ) Discount = 0;
	else 	{cout << "Quantity Purchased cannot be negative. Please Try Again.\n\n"; return 0;}                                     
					
	cout << "Product added with a " << Discount << "% bulk discount." << endl << endl;
	
	DPrice = UPrice * QPurchased * ((100 - Discount) / 100.0);
	
	outBills << setw(10) << left                             << PName      << " | $"
			 << setw(9)  << left << fixed << setprecision(2) << UPrice     << " | "
			 << setw(8)  << left                             << QPurchased << " | $"
			 << setw(9)  << left                             << DPrice     << endl
			 << "-----------------------------------------------------------------" << endl;
	
	return DPrice;
}

double apply_membership_discount ()
{
	string Choices;
	
	cout << "Does the customer have a membership? (yes/no): "; cin >> Choices; 
	if      (Choices == "yes") {cout << "2.5% membership discount applied."        << endl << endl; return 2.5;}
	else if (Choices == "no")  {cout << "There is no membership discount applied." << endl << endl; return 0;}
	else                       {cout << "Invalid input. Please try again."         << endl << endl; return 0;}
}

double apply_voucher_discount ()
{
	double VDiscount; // VDiscount = Voucher Discount
	
	cout << "Enter vouncher discount (max 5%): "; cin >> VDiscount; cin.ignore(100, '\n');
	if      (VDiscount >= 0 && VDiscount <= 5) {cout << "Voucher discount applied."                         << endl << endl; return VDiscount;}
	else if (VDiscount < 0)                    {cout << "Invalid input. Please try again."                  << endl << endl; return 0;}
	else                                       {cout << "Maximum voucher discount is 5%. Please try again." << endl << endl; return 0;}
}

void display_final_bill (double MDiscount, double VDiscount, double TPrice)
{
	string FBills;
	ifstream inBills("Bills.txt");
	
	cout << "Final Bill:"                                                        << endl
	     << "Product    | Unit Price | Quantity | Total Cost (Discount Applied)" << endl
	     << "-----------------------------------------------------------------"  << endl;
	     
	while (getline (inBills, FBills)) cout << FBills << "\n";
	
	cout << "Membership Discount: " << MDiscount << "%"                         << endl
	     << "Voucher Discount: "    << VDiscount << "%"                         << endl
	     << "-----------------------------------------------------------------" << endl
	     << "Grand Total Amount Due: $" << fixed << setprecision(2) << TPrice;
	         
	inBills.close(); 
	remove("Bills.txt");
}
