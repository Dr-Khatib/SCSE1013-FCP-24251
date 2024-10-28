#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::string name;
	//char name[50];
	int birth, current_year;
	
	std :: cout << "Enter your full name: ";
	std :: getline (std::cin, name);
	cout << "Enter your birth year: ";
	cin >> birth;
	
	current_year= 2024 - birth;
	cout << "Hello, " << name << "! You are " << current_year << " years old.";
	
	
	
	
	
	
	
	
	return 0;
}