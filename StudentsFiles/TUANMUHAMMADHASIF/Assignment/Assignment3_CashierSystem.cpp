//Exercise: Cashier System
//Tuan Muhammad Hasif bin Tuan Zaki (A24CS0205)
//SCSE1013- Fundamental Programming Concept
//Dr. Muhammad Khatibsyarbini
//6 November 2024

#include <iostream>
#include <string>
#include <iomanip>
#define MAX_PRODUCTS 100
using namespace std;

int main()
{
	string names[MAX_PRODUCTS];
    float unit_price[MAX_PRODUCTS], costs[MAX_PRODUCTS], total=0;
    int quantities[MAX_PRODUCTS], choice, productCount=0;
    
	
	
	cout << "Cashier System\n";
	cout << "1. Add Product to Bill\n";
	cout << "2. Display Final Bill and Exit\n";
	
	while (true)
	{
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();
		
		if (choice == 1)
		{
			if (productCount >= MAX_PRODUCTS)
			{
				cout << "Cannot add more products. The maximum limit have been reached.\n";
				continue;
			}
			
			cout << "\nEnter Product Name: ";
			getline (cin, names[productCount]);
			cout << "Enter Unit Price: ";
			cin >> unit_price[productCount];
			cout << "Enter Quantity Purchased: ";
			cin >> quantities[productCount];
		
		
		
			if (quantities[productCount] > 10)
				costs[productCount]= 0.9 * (unit_price[productCount] * quantities[productCount]) ;
			
			else if (quantities[productCount] >= 5 && quantities[productCount] <= 10)
				costs[productCount]= 0.95 * (unit_price[productCount] * quantities[productCount]) ;
			
			else if (quantities[productCount] < 5)
				costs[productCount]= unit_price[productCount] * quantities[productCount] ;
			
		
		
			total += costs[productCount];
			productCount++;
			cout << "Product added succesfully to the bill.\n";
		
	}
		else if (choice == 2)
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
			cout << "Grand Total Amount Due: $" << total << endl;
			break;

		}
	
		else
		{
			cout << "\nYou had chose the wrong number '_' ";
		}
	}
		
	
	return 0;
}
                       