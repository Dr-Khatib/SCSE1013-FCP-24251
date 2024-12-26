//wip medal tracker
#include <iostream>
#include <vector>
using namespace std;

struct Medal
{
    int year;
    int medal[4][3]{};
};

struct Hlight
{
    int totalMedalCountry3{};
    int maxMedal{};
    int minMedal = INT_MAX;
    int maxGold{};
    int totalBronze{};
};

vector<Medal> medalVect;
vector<Hlight> hlightVect;

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
    Hlight hlight;
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
                hlight.totalMedalCountry3 += temp;

            if (temp > hlight.maxMedal)
                hlight.maxMedal = temp;

            if (temp < hlight.minMedal)
                hlight.minMedal = temp;

            if (y == 0 && temp > hlight.maxGold)
                hlight.maxGold = temp;

            if (y == 2)
                hlight.totalBronze += temp;

            medal.medal[x][y] = temp;
        }
    }

    medalVect.emplace_back(medal);
    hlightVect.emplace_back(hlight);
}