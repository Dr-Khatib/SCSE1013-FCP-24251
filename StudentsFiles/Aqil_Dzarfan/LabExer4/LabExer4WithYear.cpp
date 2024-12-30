// wip medal tracker
#include <iostream>
#include <vector>
using namespace std;

struct Medal
{
    int year;
    int medal[4][3]{};
    int totalMedalCountry3{};
    int maxMedal{};
    int minMedal = INT_MAX;
    int maxGold{};
    int totalBronze{};
};
vector<Medal> medalVect;

void add_records();
void disp_records();

int main()
{
    bool menu = true;
    int input;

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
            cout << "Invalid input";
            break;
        }
    }
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