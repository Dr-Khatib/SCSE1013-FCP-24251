#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a integer number = ";
    cin>>num;
    if(num<0)
    {
        cout<< num << " is negative."<<endl;
    }
    else if(num==0)
    {
        cout<< num << " is zero."<<endl;
    }
    else
    {
        cout<< num << " is positive.";
    }

    getch();
    return 0;
}
