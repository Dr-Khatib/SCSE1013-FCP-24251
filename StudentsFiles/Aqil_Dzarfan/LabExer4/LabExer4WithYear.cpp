// wip medal tracker
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Medal
{
    int year;
    int medal[4][3]{};
    int totalMedalCountry3{};
    int maxMedal{};
    int minMedal = 1000;
    int maxGold{};
    int totalBronze{};
};
vector<Medal> medalVect;

void add_records();
void disp_records();
void disp_country_medal();

int main()
{
    int input;
    bool menu = true;

    while (menu == true)
    {
        cout << "Medal Tracker 3000\n1. Add records\n2. Display previous records and exit\nEnter your choice: ";
        cin >> input;

        switch (input)
        {
        case 1:
            add_records();
            break;

        case 2:
            disp_records();
            menu = false;
            break;

        default:
            cout << "Invalid input. Please Try Again\n";
            break;
        }
    }
    return 0;
}

void add_records()
{
    const string medalType[3] = {"Gold", "Silver", "Bronze"};
    Medal medal;
    int temp;

    cout << "Enter year: ";
    cin >> medal.year;

    for (int x = 0; x < 4; x++)
    {
        cout << "Country " << x + 1 << "\n";

        for (int y = 0; y < 3; y++)
        {
            cout << "Enter number of " << medalType[y] << " medal: ";
            cin >> temp;

            if (x == 2)
                medal.totalMedalCountry3 += temp;

            if (temp > medal.maxMedal)
                medal.maxMedal = temp;

            if (temp < medal.minMedal)
                medal.minMedal = temp;

            if (y == 0 && temp > medal.maxGold)
                medal.maxGold = temp;

            if (y == 2)
                medal.totalBronze += temp;

            medal.medal[x][y] = temp;
        }
    }
    medalVect.emplace_back(medal);
}

void disp_records()
{
    if (medalVect.size() == 0)
    {
        cout << "No Record Exist !";
        exit;
    }

    for (int index = 0; index < medalVect.size(); index++)
    {
        cout << "Year " << medalVect.at(index).year << "\n";
        cout << string(54, '-');

        cout << "Country"
             << setw(10) << "Gold"
             << setw(10) << "Silver"
             << setw(10) << "Bronze";
        disp_country_medal(index);
        cout << string(54, '-');
    }
}

void disp_country_medal(int index)
{
    for (int x = 0; x < 4; x++)
    {
        cout << x;
        for (int y = 0; y < 3; y++)
        {
            cout << setw(10) << left << medalVect.at(index).medal[x][y];
        }
        cout << "\n";
    }
}