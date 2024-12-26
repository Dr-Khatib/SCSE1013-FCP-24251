//wip medal tracker

#include <iostream>
using namespace std;

int main()
{
    const string medalType[3] = {"Gold", "Silver", "Bronze"};

    int totalMedalCountry3 = 0;
    int maxNumMedal = 0;
    int minNumMedal = 1000;
    int maxNumOfGold = 0;
    int totalBronze = 0;

    int temp;

    for (int index1 = 0; index1 < 4; index1++)
    {
        cout << "Country " << index1 + 1 << endl;
        for (int index2 = 0; index2 < 3; index2++)
        {
            int medal[4][3];
            
            cout << "Enter number of " << medalType[index2] << " medal: ";
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

    cout << "\nTotal number of medal won by country 3 is " << totalMedalCountry3
         << "\nThe largest number of medal won is " << maxNumMedal
         << "\nThe smallest number of medal won is " << minNumMedal
         << "\nThe highest number of gold medal won is " << maxNumOfGold
         << "\nThe total number of bronze won is " << totalBronze;
}