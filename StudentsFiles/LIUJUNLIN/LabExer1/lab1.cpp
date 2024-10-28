#include <bits/stdc++.h>

using namespace std;

int main()
{
	string fullname;
	int birth,age;
	
	cout<< "Enter your full name: ";
	getline(cin,fullname);
	cout<<"Enter your birth year: ";
	cin >> birth;
	age=2024-birth;
	cout<<"Hello,"<<fullname<<"! You are "<<age <<" years old.";

}
