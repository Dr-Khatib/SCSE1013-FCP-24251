#include <iostream>
#include <string>
#include <iomanip>
#include <climits> 
using namespace std;

int total(int country[4][3])
{
    int total_medals = country[2][0] + country[2][1] + country[2][2];
    return total_medals;
}

int largest(int country[4][3])
{
    int largest_number = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (country[i][j] > largest_number)
            {
                largest_number = country[i][j];
            }
        }
    }
    return largest_number;
}

int smallest(int country[4][3])
{
    int smallest_number = INT_MAX; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (country[i][j] < smallest_number)
            {
                smallest_number = country[i][j];
            }
        }
    }
    return smallest_number;
}

int highest_gold(int country[4][3])
{
    int highest_number_of_gold = 0;
    for (int i = 0; i < 4; i++)
    {
        if (country[i][0] > highest_number_of_gold)
        {
            highest_number_of_gold = country[i][0];
        }
    }
    return highest_number_of_gold;
}

int total_number_of_bronze(int country[4][3])
{
    int total_number_of_bronze_medal = 0;
    for (int i = 0; i < 4; i++)
    {
        total_number_of_bronze_medal += country[i][2];
    }
    return total_number_of_bronze_medal;
}

void printHorizontalLine()
{
    cout << "+------------+-------+-------+-------+" << endl;
}

void printTableHeader()
{
    printHorizontalLine();
    cout << "| Country    | Gold  | Silver| Bronze|" << endl;
    printHorizontalLine();
}

int main()
{
    const int Size = 3; 
    int country[4][3];  
    string medals_name[Size] = {"Gold", "Silver", "Bronze"};

    cout << "Enter the medal counts for 4 countries.\n";

   
    for (int i = 0; i < 4; i++) 
    {
        cout << "Country " << i + 1 << ":\n";
        for (int j = 0; j < Size; j++) 
        {
            cout << setw(10) << medals_name[j] << ": ";
            cin >> country[i][j];
        }
    }

  
    cout << "\nMedal Table:\n";
    printTableHeader();
    for (int i = 0; i < 4; i++)
    {
        cout << "| Country " << i + 1 << " ";
        for (int j = 0; j < Size; j++) 
        {
            cout << " |" << setw(5) << country[i][j] << " ";
        }
        cout << " |" << endl;
        printHorizontalLine();
    }

    
    cout << "\nStatistics:\n";
    cout << "Total number of medals won by Country 3: " << total(country) << endl;
    cout << "The largest number of medals won: " << largest(country) << endl;
    cout << "The smallest number of medals won: " << smallest(country) << endl;
    cout << "The highest number of gold medals won: " << highest_gold(country) << endl;
    cout << "The total number of bronze medals won: " << total_number_of_bronze(country) << endl;

    return 0;
}

