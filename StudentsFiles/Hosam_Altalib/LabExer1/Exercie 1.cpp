//code for calculate the age based on the current year
 
#include <iostream>
#include <string>
using namespace std;

int main(){

	string name;
	
	int year,age;

	cout<<"Enter your full name: ";
	getline(cin,name);
	cout<<"Enter your birth year: ";
	cin>>year;
	age = 2024 - year;
	cout<<"Hello,"<< name <<"! You are " << age <<" years old.";
	return 0;
}
