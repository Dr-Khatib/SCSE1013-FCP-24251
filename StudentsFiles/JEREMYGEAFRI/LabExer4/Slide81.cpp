#include <iostream>
#include <iomanip>
using namespace std;

const int row = 4, col = 3;
int medal[row][col];
int compare = medal[0][0];
int choice, choice_country, choice_medal, num;
int highestRow, highestCol, total_medal=0;
void largest_num();
void smallest_num();
void largest_gold();
void total_bronze();

int main()
{
    do
    {
        cout << "Medal data" << endl;
        cout << "1. Add data" << endl;
        cout << "2. Display data" << endl;
        cout << "Enter you choice: " << endl;
        cin >> choice;

        if( choice == 1)
        {  
            if(choice <= 4)        
            {  
                cout << "Select country" << endl;
                cout << "1. Country 1" << endl;
                cout << "2. Country 2" << endl;
                cout << "3. Country 3" << endl;
                cout << "4. Country 4" << endl;
                cout << "Enter country choice: " << endl;
                cin >> choice_country;
            }

            else
            {
                cout << "Enter a valid number." << endl;
            }

            if (choice <=3)
            {
                cout << "Select medal" << endl;
                cout << "1. Gold" << endl;
                cout << "2. Silver" << endl;
                cout << "3. Bronze" << endl;
                cout << "Enter medal choice: " << endl;
                cin >> choice_medal;
            }

            else
            {
                cout << "Enter a valid number." << endl;
            }
    
            if(choice_country <= 4 && choice_medal <=3)
            {
                cout << "Number of medal won: " << endl;
                cin >> num;
                medal[choice_country-1][choice_medal-1]=num;
            }

            else
            {
                cout << "Please choose numbers within the given choice" << endl;
            }
        }

        else if(choice == 2)
        {
            break;
        }

        else
        {
            cout << "Invalid number." << endl;
        }
    }
    while(true);
        
    total_gold_country3();
    largest_num();
    smallest_num();
    largest_gold();
    total_bronze();

    return 0;
}

void total_gold_country3()
{
    for(int y = 0 ; y < col; y++)
    {
        total_medal += medal[2][y];
    }
    
    cout << "The total number of medal won by country 3 is " << total_medal << endl;
}

void largest_num()
{
    for ( int i = 0; i < col; i++)
    for ( int j = 0; j < row; j++)
    {
        if (medal[i][j] > compare) 
            { 
                compare = medal[i][j]; 
                highestRow = i; 
                highestCol = j; 
            } 
    }

    cout << "The largest number of medal is " << compare << endl;
}

void smallest_num()
{
    for ( int i = 0; i < col; i++)
    for ( int j = 0; j < row; j++)
    {
        if (medal[i][j] < compare) 
            { 
                compare = medal[i][j]; 
                highestRow = i; 
                highestCol = j; 
            } 
    }

    cout << "The smallest number of medal is " << compare << endl;
}

void largest_gold()
{
    for ( int j = 0; j < col; j++)
    {
        if (medal[0][j] > compare) 
            { 
                compare = medal[0][j]; 
                highestCol = j; 
            } 
    }

    cout << "The highest number of gold medal is " << compare << endl;
}

void total_bronze()
{
    for ( int i = 0; i < col; i++)
    {
        total_medal += medal[i][2];
    }

    cout << "Total number of bronze medal win is  " << total_medal << endl;
}
