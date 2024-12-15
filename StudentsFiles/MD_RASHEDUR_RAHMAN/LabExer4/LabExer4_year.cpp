#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_COUNTRIES = 4;
const int NUM_MEDAL_TYPES = 3;

int getYears(int[]);
void printMedalType(int);
void enterMedals(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);
void printMedalTable(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);
void calculateTotalForCountry3(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);
void findMaxMedals(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);
void findMinMedals(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);
void findMaxGoldMedals(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);
void calculateTotalBronzeMedals(int[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int[], int);

int main() {
    int years[2500], numberOfYears;
    numberOfYears = getYears(years);
    int medals[numberOfYears][NUM_COUNTRIES][NUM_MEDAL_TYPES];
    cout << "Please enter the number of medals for each country for each year:\n";
    enterMedals(medals, years, numberOfYears);
    printMedalTable(medals, years, numberOfYears);
    cout << endl;
    calculateTotalForCountry3(medals, years, numberOfYears);
    cout << endl;
    findMaxMedals(medals, years, numberOfYears);
    cout << endl;
    findMinMedals(medals, years, numberOfYears);
    cout << endl;
    findMaxGoldMedals(medals, years, numberOfYears);
    cout << endl;
    calculateTotalBronzeMedals(medals, years, numberOfYears);
    return 0;
}
int getYears(int years[]) {
    cout << "Enter the years for analysis (type any letter after year to stop):\n";
    int count = 0;

    while (true) {
        cout << "Enter year " << count + 1 << ": ";
        cin >> years[count];

        if (cin.fail()) {
            cin.clear();
            cin.ignore(50, '\n');
            break;
        }
        count++;
    }
    if (count == 0) {
        cout << "No valid years entered. Exiting program." << endl;
        exit(0);
    }
    return count;
}
void printMedalType(int type) {
    if (type == 0) cout << "Gold   : ";
    else if (type == 1) cout << "Silver : ";
    else if (type == 2) cout << "Bronze : ";
}
void enterMedals(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        cout << "Year " << years[yearIndex] << ":\n";

        for (int country = 0; country < NUM_COUNTRIES; country++) {
            cout << "  Country " << country + 1 << ":\n";

            for (int medalType = 0; medalType < NUM_MEDAL_TYPES; medalType++) {
                printMedalType(medalType);
                cin >> medals[yearIndex][country][medalType];

                while (cin.fail() || medals[yearIndex][country][medalType] < 0) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "    Invalid input. Please enter a non-negative integer: ";
                    cin >> medals[yearIndex][country][medalType];
                }
            }
        }
    }
}
void printMedalTable(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        cout << "\nYear: " << years[yearIndex] << "\n";
        cout << string(60, '-') << "\n";
        cout << "| Country      | Gold         | Silver       | Bronze       |\n";
        cout << string(60, '-') << "\n";

        for (int country = 0; country < NUM_COUNTRIES; country++) {
            cout << "| Country " << country + 1 << "  |";
            for (int medalType = 0; medalType < NUM_MEDAL_TYPES; medalType++) {
                cout << " " << setw(12) << medals[yearIndex][country][medalType] << " |";
            }
            cout << "\n";
        }
        cout << string(60, '-') << "\n";
    }
}
void calculateTotalForCountry3(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    int totalAllYears = 0;

    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        int yearlyTotal = 0;

        for (int medalType = 0; medalType < NUM_MEDAL_TYPES; medalType++) {
            yearlyTotal += medals[yearIndex][2][medalType];
        }
        cout << "Total medals won by Country 3 in " << years[yearIndex] << ": " << yearlyTotal << endl;
        totalAllYears += yearlyTotal;
    }
    cout << "Overall total medals won by Country 3: " << totalAllYears << endl;
}
void findMaxMedals(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    int maxOverall = 0;

    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        int maxYear = 0;

        for (int country = 0; country < NUM_COUNTRIES; country++) {
            for (int medalType = 0; medalType < NUM_MEDAL_TYPES; medalType++) {
                if (medals[yearIndex][country][medalType] > maxYear) {
                    maxYear = medals[yearIndex][country][medalType];
                }
            }
        }
        cout << "Max medals in year " << years[yearIndex] << ": " << maxYear << endl;
        if (maxYear > maxOverall) {
            maxOverall = maxYear;
        }
    }
    cout << "Max medals across all years: " << maxOverall << endl;
}
void findMinMedals(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    int minOverall = medals[0][0][0];

    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        int minYear = medals[yearIndex][0][0];

        for (int country = 0; country < NUM_COUNTRIES; country++) {
            for (int medalType = 0; medalType < NUM_MEDAL_TYPES; medalType++) {
                if (medals[yearIndex][country][medalType] < minYear) {
                    minYear = medals[yearIndex][country][medalType];
                }
            }
        }
        cout << "Min medals in year " << years[yearIndex] << ": " << minYear << endl;
        if (minYear < minOverall) {
            minOverall = minYear;
        }
    }
    cout << "Min medals across all years: " << minOverall << endl;
}
void findMaxGoldMedals(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    int maxOverallGold = 0;

    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        int maxYearGold = 0;

        for (int country = 0; country < NUM_COUNTRIES; country++) {
            if (medals[yearIndex][country][0] > maxYearGold) {
                maxYearGold = medals[yearIndex][country][0];
            }
        }
        cout << "Max gold medals in year " << years[yearIndex] << ": " << maxYearGold << endl;
        if (maxYearGold > maxOverallGold) {
            maxOverallGold = maxYearGold;
        }
    }
    cout << "Max gold medals across all years: " << maxOverallGold << endl;
}
void calculateTotalBronzeMedals(int medals[][NUM_COUNTRIES][NUM_MEDAL_TYPES], int years[], int numberOfYears) {
    int totalAllYears = 0;
    for (int yearIndex = 0; yearIndex < numberOfYears; yearIndex++) {
        int yearlyTotal = 0;
    for (int country = 0; country < NUM_COUNTRIES; country++) {
            yearlyTotal += medals[yearIndex][country][2];
        }
        cout << "Total bronze medals in year " << years[yearIndex] << ": " << yearlyTotal << endl;
        totalAllYears += yearlyTotal;
    }
    cout << "Overall total bronze medals: " << totalAllYears << endl;
}
