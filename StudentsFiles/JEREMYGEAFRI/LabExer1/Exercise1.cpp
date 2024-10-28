#include <iostream>
using namespace std;
int main()
{
    string Name;
    cout << "Enter your full name:" << endl;
    getline(cin,Name);
    int Year=0;
    cout << "Enter your birth year:" << endl;
    cin >> Year ;
    int sum=0;
    sum = 2024-Year ;
    cout << "Hello , " << Name << " !" << " Your are " << sum << " years old." <<endl;
    return 0;
}
