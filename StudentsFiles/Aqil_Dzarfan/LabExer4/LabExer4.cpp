//wip medal tracker

#include <iostream>
using namespace std;

int main()
{
    const string medalType[3] = {"Gold", "Silver", "Bronze"};

    int totalMedalCountry3 = 0;
    int maxMedal = 0;
    int minMedal = 1000;
    int maxGold = 0;
    int totalBronze = 0;

    int temp;

    for (int x = 0; x < 4; x++)
    {
        cout << "Country " << x + 1 << "\n";
        for (int y = 0; y < 3; y++)
        {
            int medal[4][3];
            
            cout << "Enter number of " << medalType[y] << " medal: ";
            cin >> temp;

            if (x == 2)
                totalMedalCountry3 += temp;

            if (temp > maxMedal)
                maxMedal = temp;

            if (temp < minMedal)
                minMedal = temp;

            if (y == 0 && temp > maxGold)
                maxGold = temp;

            if (y == 2)
                totalBronze += temp;

            medal[x][y] = temp;
        }
    }

    cout << "\nTotal number of medal won by country 3 is " << totalMedalCountry3
         << "\nThe largest number of medal won is " << maxMedal
         << "\nThe smallest number of medal won is " << minMedal
         << "\nThe highest number of gold medal won is " << maxGold
         << "\nThe total number of bronze won is " << totalBronze;
}