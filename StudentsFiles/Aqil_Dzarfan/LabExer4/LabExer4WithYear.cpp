//wip medal tracker

#include <iostream>
#include <vector>
using namespace std;

struct 
{
    int totalMedalCountry3{};
    int maxNumMedal{};
    int minNumMedal = INT_MAX;
    int maxNumOfGold{};
    int totalBronze{};
};
vector<medal> yearHighlights;

struct medalType
{
    int gold;
    int silver;
    int bronze;
};
vector<medalType> medalData;


void addRecord();
void dispPastRecord();

int main()
{
    bool menu = true;
    int choice;

    while (menu != false)
    {
        cout << "Medal Tracker" 
             << "\n1. Add new record" 
             << "\n2. View past record and exit" 
             << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addRecord();
                break;
            
            case 2:
                dispPastRecord();
                menu = false;
                break;
            
            default:
                cout << "Invalid number! Please try again\n\n";
        }
    }
}

void addRecord()
{
    

    for (int index1 = 0; index1 < 4; index1++)
    {
        cout << "Country " << index1 + 1 << endl;
        
        for (int index2 = 0; index2 < 3; index2++)
        {
            medal medalobj;
            int gold;
            int silver;
            int bronze;
            
            cout << "Enter number of gold medal: ";
            cin >> gold;

            cout << "Enter number of silver medal: ";
            cin >> silver;

            cout << "Enter number of bronze medal: ";
            cin >> temp;

            if (index1 == 2)
                totalMedalCountry3 += temp;

            if (temp > maxNumMedal)
                maxNumMedal = temp;

            if (temp < minNumMedal)
                minNumMedal = temp;

            if (index2 == 0 && temp > maxNumOfGold)
                maxNumOfGold = temp;

            if (index2 == 2)
                totalBronze += temp;

            medal[index1][index2] = temp;
        }
    }
}

void dispPastRecord()
{
    cout << "\nTotal number of medal won by country 3 is " << totalMedalCountry3
         << "\nThe largest number of medal won is " << maxNumMedal
         << "\nThe smallest number of medal won is " << minNumMedal
         << "\nThe highest number of gold medal won is " << maxNumOfGold
         << "\nThe total number of bronze won is " << totalBronze;
}