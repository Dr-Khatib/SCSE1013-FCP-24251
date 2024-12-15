#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

ofstream outputFile;
ifstream inputFile;

string dashline();
bool check_output_input_file();
void display_menu();
double add_product();
double apply_membership_discount();
double apply_voucher_discount();
void display_final_bill(double, double, double);

int main()
{
	int choice;
	double discountedTotal = 0, memberDiscount = 0, voucherDiscount = 0;
	
	if(!check_output_input_file())
	{
		cout << "Error: Program will exit.";
		return 1;
	}
	
	do
	{
		display_menu();
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore(50,'\n');
		
		while(choice != 1 && choice != 2 && choice != 3 && choice != 4)
		{
			cout << "Pls enter a valid choice (either 1, 2, 3 or 4).\n\n\n";
			display_menu();
			cout << "Enter your choice: ";
			cin >> choice;
			cin.ignore(50,'\n');
		}
		
		cout << "\n\n";
		
		if(choice == 1)
		{
			double result = add_product();
			
			if(result == -0.1)
			{
				cout << "Pls enter a non-negative price.\n\n\n";
				continue;
			}
			
			else if(result == -0.2)
			{
				cout << "Quantity Purchased cannot be a negative value, pls try again.\n\n\n";
				continue;
			}
			
			else
				discountedTotal += result;			
		}
		
		else if(choice == 2)
			memberDiscount = apply_membership_discount();
		
		else if(choice == 3)
			voucherDiscount = apply_voucher_discount();
		
		else if(choice == 4)
			display_final_bill(discountedTotal, memberDiscount, voucherDiscount);
		
	} while(choice != 4);
	
	
	
	outputFile.close();
	inputFile.close();
}

bool check_output_input_file()
{
	outputFile.open("final_bill.txt");               
	if(!outputFile)
	{
		cout << "final_bill.txt is fail opening.";
		return false;
	}
	
	inputFile.open("final_bill.txt");
	if(!inputFile)
	{
		cout << "Fail to read from final_bill.txt.";
		return false;
	}
	
	return true;	
}

string dashline()
{
	return string(86,'-') + "\n";
}

void display_menu()
{
	cout << "Cashier System\n"
		 << "1. Add Product to Bill.\n"
		 << "2. Apply Membership Discount.\n"
		 << "3. Apply Voucher Discount.\n"
		 << "4. Display Final Bill and Exit.\n";
}

double add_product()
{
	string productName;
	double unitPrice, discount, discountedTotal;
	int quantityPurchased;
	
	cout << "Enter Product Name: ";
	getline(cin,productName);
	
	cout << "Enter Unit Price: ";
	cin >> unitPrice;
	
	if(unitPrice < 0)
		return -0.1;
	
	cout << "Enter Quantity Purchased: ";
	cin >> quantityPurchased;
	cin.ignore(50,'\n');
	
	if(quantityPurchased < 0)
		return -0.2;
		
	else if(quantityPurchased > 10)
		discount = 10.0;
		
	else if(quantityPurchased >= 5)
		discount = 5.0;
		
	else
		discount = 0.0;
	
	cout << "Product added with a " << discount << "% bulk discount.\n\n\n";	
	
	discountedTotal = unitPrice * quantityPurchased * ((100 - discount)/100.0);
	
	outputFile << fixed << setprecision(2)
			   << setw(15) << left << productName          << setw(3) << left << "| $"
			   << setw(14) << left << unitPrice            << setw(3) << left << "|  "
			   << setw(14) << left << quantityPurchased    << setw(3) << left << "| $"
			   << setw(34) << left << discountedTotal      << endl
			   << dashline();
	
	return discountedTotal;	
}

double apply_membership_discount()
{
	char option[10];
	cout << "Does the customer have a membership? (yes/no): ";
	cin >> option;
	cin.ignore(50,'\n');
	
	double memberDiscount = 0.0;
	
	if(!strcmp(option, "yes"))
	{
		memberDiscount = 2.5;
		cout << memberDiscount << "% membership discount applied.\n\n\n";
	}
	
	else

		cout << memberDiscount << "% membership discount applied.\n\n\n";

	return memberDiscount;
}

double apply_voucher_discount()
{
	double voucherDiscount;
	
	do
	{
		cout << "Enter voucher discount (max 5%): ";
		cin >> voucherDiscount;
		cin.ignore(50,'\n');
		
		if(voucherDiscount > 5.0)
		{
			cout << "The maximum voucher discount is 5%, pls try again.\n\n\n";
			continue;
		}
		
		else if(voucherDiscount < 0.0)
		{
			cout << "The voucher discount cannot be negative, pls try again.\n\n\n";
			continue;
		}
		
		else
			cout << "Voucher discount applied.\n\n\n";
			
	}while(voucherDiscount > 5.0 || voucherDiscount < 0.0); 
	
	return voucherDiscount;
}

void display_final_bill(double disTotal, double memberDis, double voucherDis)
{
	cout << "Final Bill : \n\n"
		 << setw(15) << left << "Product"     << setw(2) << left << "|"
	 	 << setw(15) << left << "Unit Price"  << setw(2) << left << "|"
		 << setw(15) << left << "Quantity"    << setw(2) << left << "|"
	 	 << setw(35) << left << "Total Cost (Discount Applied)" << endl 
		 << dashline();
		 
	string tuples;
	while (getline (inputFile, tuples))
		cout << tuples << endl;
	
	cout << dashline()
		 << "Membership Discount: " << memberDis << "%\n"
		 << "Voucher Discount: " << voucherDis << "%\n" << dashline();
		 
	double grandTotal = disTotal * ((100 - memberDis - voucherDis)/100.0);
	
	cout << "Grand Total Amount Due: $" << fixed << setprecision(2) << grandTotal << endl;	 		 
}






	

