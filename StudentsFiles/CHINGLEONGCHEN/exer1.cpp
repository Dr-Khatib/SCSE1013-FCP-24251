#include <iostream>
using namespace std ;

string user_name (){

    string name ;
    cout << "enter your full name :";
    getline(cin,name);
    return name ;

};

int  year(){

    int birth_year ;
    cout << "Enter your birth year :";
    cin >> birth_year ;
    return birth_year ;

};

int calculate (int birth_year){

    int current_year;
    current_year = 2024 - birth_year ;
    return current_year ;

};

void show (string name , int birth_year , int current_year){

    cout << "enter your full name :"<<name <<endl;
    cout <<"Enter your birth year :"<<birth_year <<endl;
    cout << "Hello,"<<name<<"you are "<<current_year<<"years old "<<endl ;
};


int main() {
 
    string name =user_name();
    int birth_year =year ();
    int current_year =calculate (birth_year);
    show (name, birth_year ,current_year);

    system("pause");

    return 0;
}
