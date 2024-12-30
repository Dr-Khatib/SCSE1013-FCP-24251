#include <iostream>
#include <iomanip>
using namespace std;

void read_GSB_Medal(int arr[4][3][5], int years[], int numYears);
void displayBestRecords(int arr[4][3][5], int years[], int numYears);

int main() {
    const int numCountries = 4;
    const int numMedalTypes = 3;
    const int maxYears = 5;
    int medals[numCountries][numMedalTypes][maxYears] = {};
    int years[maxYears];

    int numYears;
    cout << "How many years are you recording (max 5)?: ";
    cin >> numYears;

    if (numYears > maxYears || numYears <= 0) {
        cout << "Invalid number of years!" << endl;
        return 1;
    }

    for (int i = 0; i < numYears; ++i) {
        cout << "Enter the year for record " << i + 1 << ": ";
        cin >> years[i];
    }

    read_GSB_Medal(medals, years, numYears);
    displayBestRecords(medals, years, numYears);

    return 0;
}

void read_GSB_Medal(int arr[4][3][5], int years[], int numYears) {
    for (int k = 0; k < numYears; ++k) {
        cout << "\nEnter the medal counts (Gold, Silver, Bronze) for year " << years[k] << ":\n";
        for (int i = 0; i < 4; ++i) {
            cout << "Country " << i + 1 << ": ";
            for (int j = 0; j < 3; ++j) {
                cin >> arr[i][j][k];
            }
        }
    }
}

void displayBestRecords(int arr[4][3][5], int years[], int numYears) {
    cout << "\nBest Records for Each Country:\n";
    cout << left << setw(10) << "Country" << setw(10) << "Year" << setw(15) << "Total Medals" << endl;
    cout << "--------------------------------------\n";

    // Display the best year for each country
    for (int country = 0; country < 4; ++country) {
        int maxMedals = -1;
        int bestYearIndex = -1;

        for (int yearIndex = 0; yearIndex < numYears; ++yearIndex) {
            int totalMedals = 0;

            for (int type = 0; type < 3; ++type) {
                totalMedals += arr[country][type][yearIndex];
            }

            if (totalMedals > maxMedals) {
                maxMedals = totalMedals;
                bestYearIndex = yearIndex;
            }
        }

        if (bestYearIndex != -1) {
            cout << setw(10) << country + 1 << setw(10) << years[bestYearIndex] << setw(15) << maxMedals << endl;
        }
    }

    // Display best and worst performing countries each year
    cout << "\nYearly Summary:\n";
    cout << left << setw(10) << "Year" << setw(20) << "Total Medals Won" << setw(15) << "Best Country" << setw(20) << "Medals won" 
         << setw(15) << "Worst Country" << "Medals won" << endl;
    cout << "-------------------------------------------------------------------------------------------\n";

    for (int yearIndex = 0; yearIndex < numYears; ++yearIndex) {
        int maxMedals = -1, minMedals = INT_MAX, totalMedals = 0;
        int bestCountry = -1, worstCountry = -1;

        for (int country = 0; country < 4; ++country) {
            int countryTotal = 0;

            for (int type = 0; type < 3; ++type) {
                countryTotal += arr[country][type][yearIndex];
            }

            totalMedals += countryTotal;

            if (countryTotal > maxMedals) {
                maxMedals = countryTotal;
                bestCountry = country + 1; // 1-based index
            }

            if (countryTotal < minMedals) {
                minMedals = countryTotal;
                worstCountry = country + 1; // 1-based index
            }
        }

        cout << setw(10) << years[yearIndex]
             << setw(20) << totalMedals
             << setw(15) << bestCountry
             << setw(20) << maxMedals
             << setw(15) << worstCountry
             << minMedals << endl;
    }
}