//Exercise: Enhanced Cashier System
//Tuan Muhammad Hasif bin Tuan Zaki (A24CS0205)
//SCSE1013- Fundamental Programming Concept
//Dr. Muhammad Khatibsyarbini
//13 November 2024

#include <iostream>
#include <string>
#include <iomanip>
#define MAX_PRODUCTS 100
using namespace std;

double add_product(double &total);
double apply_membership_discount(double &total, double &member);
double apply_voucher_discount(double &total, double &voucher);
void display_final_bill(double total, double member, double voucher);

string names[MAX_PRODUCTS];
float unit_price[MAX_PRODUCTS], costs[MAX_PRODUCTS];
int quantities[MAX_PRODUCTS], productCount=0;

int main()
{
	int choice;
    double member=0 ,voucher=0 ,total = 0;
    
    while (true)
	{
		cout << "\nCashier System\n";
        cout << "1. Add Product\n";
        cout << "2. Apply Membership Discount\n";
        cout << "3. Apply Voucher Discount\n";
        cout << "4. Display Final Bill\n";
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();
		
		if (choice == 1)
		{
			add_product(total);
			continue;
		}
		
		else if (choice == 2)
		{
			apply_membership_discount(total, member);
			continue;			
		}
		
		else if (choice == 3)
		{
			apply_voucher_discount(total, voucher);
			continue;
		}
		
		else if (choice == 4)
		{
			display_final_bill(total, member, voucher);	
			break;
		}
		
		else
		{
			cout << "\nYou had chose the wrong number '_' ";
		}
		
		return 0;
	}
}
    
double add_product(double &total)
{
		cout << "\nEnter Product Name: ";
			getline (cin, names[productCount]);
			cout << "Enter Unit Price: ";
			cin >> unit_price[productCount];
			cout << "Enter Quantity Purchased: ";
			cin >> quantities[productCount];
			cin.ignore();

			if (quantities[productCount] > 10)
				costs[productCount]= 0.9 * (unit_price[productCount] * quantities[productCount]) ;
			
			else if (quantities[productCount] >= 5 && quantities[productCount] <= 10)
				costs[productCount]= 0.95 * (unit_price[productCount] * quantities[productCount]) ;
			
			else if (quantities[productCount] < 5)
				costs[productCount]= unit_price[productCount] * quantities[productCount] ;
			
			total += costs[productCount];
			productCount++;
			
			if (quantities[productCount] >=0 && quantities[productCount]>=4)
				cout << "Product added succesfully to the bill.\n";
			else if (quantities[productCount]>=5 && quantities[productCount]<=10)
				cout << "Product added with 5% bulk discount to the bill.\n";
			else if	(quantities[productCount] >10)
				cout << "Product added with 10% bulk discount to the bill.\n";
			return total;
	}
	
    double apply_membership_discount(double &total, double &member)
    {
    	string membershipDiscount;
    	double mDiscount;
    	
    	cout << "Does the customer have a membership? (yes/no): ";
    	cin >> membershipDiscount;
    	
    	if (membershipDiscount == "yes")
    	{
    		total*= 0.975;
    		cout << "2.5% membership discount applied.\n";
    		member =2.5;
		}
    		
    	else if (membershipDiscount == "no")
    	{
    		cout << "No discount applied.\n";
    		member = 0;
		}
    		
    	
		else 
			cout << "Invalid input. No discount applied.\n";	
    	
    	return total;
	}
	
    double apply_voucher_discount(double &total, double &voucher)
    {
    	double voucherDiscount;
    	
    	cout << "\nEnter voucher discount (max 5%): ";
    	cin >> voucherDiscount;
    	
		if (voucherDiscount>0 && voucherDiscount<=5.0)
		total *= (1- voucherDiscount/100);
		cout << "Voucher discount applied.\n";
		
		voucher = voucherDiscount;
    	
    	return total;
	}
	
	void display_final_bill(double total, double member, double voucher)
	{
		cout << "\nFinal Bill:\n";
			cout << "Product\t\t| Unit Price\t| Quantity\t| Total Cost (Discount Applied)\n";
			cout << "-------------------------------------------------------------------------------\n";
			
			for (int productDisplay = 0; productDisplay< productCount; ++productDisplay)
			{
				cout << names[productDisplay] << "\t\t| $" << unit_price[productDisplay] 
				<< "\t\t| " << quantities[productDisplay]<< "\t\t| $" << costs[productDisplay]
				<< endl; 
			}
			
			cout << "-------------------------------------------------------------------------------\n";
			cout << "Membership Discount: " << member << "%\n";
			cout << "Voucher Discount: " << voucher << "%\n";
			cout << "-------------------------------------------------------------------------------\n";
			cout << "Grand Total Amount Due: $" << total << endl;
		
	}
    
