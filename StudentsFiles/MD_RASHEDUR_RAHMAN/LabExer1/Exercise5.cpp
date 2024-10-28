#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number (1-5): ";
    cin>>n;
    if(n<=0 || n>5)
    {
        cout<<"Error: Please enter a number between 1 to 5."<<endl;
    }
    switch(n)
    {

        case 1:
        cout << "You chose 1 - Nice start!" << endl;
        break;

        case 2:
        cout << "You chose 2 - Keep going!" << endl;
        break;

        case 3:
        cout << "You chose 3 - Half way!" << endl;
        break;

        case 4:
        cout << "You chose 4 - Almost there!" << endl;
        break;
        case 5:
        cout << "You chose 5 - Made it!" << endl;
        break;
    }

    getch();
    return 0;
}
