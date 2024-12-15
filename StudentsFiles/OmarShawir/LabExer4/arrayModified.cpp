#include <iostream>
using namespace std;

const int countries = 4;      // Number of countries
const int medalType = 3;      // Gold, Silver, Bronze
const int years = 3;          // Number of years to track

void readMedals(int medals[years][countries][medalType]);
int totalMedalsCountry3(const int medals[years][countries][medalType]);
int largestMedals(const int medals[years][countries][medalType]);
int smallestMedals(const int medals[years][countries][medalType]);
int highestGold(const int medals[years][countries][medalType]);
int totalBronze(const int medals[years][countries][medalType]);
void bestRecord(const int medals[years][countries][medalType]);

int main() {
    int medals[years][countries][medalType];

    cout << "Enter the medal counts for 4 countries over " << years << " years (Gold, Silver, Bronze):" << endl;
    readMedals(medals);

    cout << "Total medals won by Country 3: " << totalMedalsCountry3(medals) << endl;
    cout << "Largest number of medals won: " << largestMedals(medals) << endl;
    cout << "Smallest number of medals won: " << smallestMedals(medals) << endl;
    cout << "Highest number of gold medals won: " << highestGold(medals) << endl;
    cout << "Total number of bronze medals won: " << totalBronze(medals) << endl;

    bestRecord(medals);

    return 0;
}

void readMedals(int medals[years][countries][medalType]) {
    for (int year = 0; year < years; ++year) {
        cout << "Enter medals for Year " << year + 1 << " (Gold, Silver, Bronze):" << endl;
        for (int i = 0; i < countries; ++i) {
            cout << "Enter medals for Country " << i + 1 << " (Gold Silver Bronze): ";
            for (int j = 0; j < medalType; ++j) {
                cin >> medals[year][i][j];
            }
        }
    }
}

int totalMedalsCountry3(const int medals[years][countries][medalType]) {
    int total = 0;
    for (int year = 0; year < years; ++year) {
        for (int j = 0; j < medalType; ++j) {
            total += medals[year][2][j]; // Country 3 (index 2)
        }
    }
    return total;
}

int largestMedals(const int medals[years][countries][medalType]) {
    int largest = medals[0][0][0];
    for (int year = 0; year < years; ++year) {
        for (int i = 0; i < countries; ++i) {
            for (int j = 0; j < medalType; ++j) {
                if (medals[year][i][j] > largest) {
                    largest = medals[year][i][j];
                }
            }
        }
    }
    return largest;
}

int smallestMedals(const int medals[years][countries][medalType]) {
    int smallest = medals[0][0][0];
    for (int year = 0; year < years; ++year) {
        for (int i = 0; i < countries; ++i) {
            for (int j = 0; j < medalType; ++j) {
                if (medals[year][i][j] < smallest) {
                    smallest = medals[year][i][j];
                }
            }
        }
    }
    return smallest;
}

int highestGold(const int medals[years][countries][medalType]) {
    int highest = medals[0][0][0]; // Start with the first country in the first year
    for (int year = 0; year < years; ++year) {
        for (int i = 0; i < countries; ++i) {
            if (medals[year][i][0] > highest) {  // Gold is at index 0
                highest = medals[year][i][0];
            }
        }
    }
    return highest;
}

int totalBronze(const int medals[years][countries][medalType]) {
    int total = 0;
    for (int year = 0; year < years; ++year) {
        for (int i = 0; i < countries; ++i) {
            total += medals[year][i][2]; // Bronze is at index 2
        }
    }
    return total;
}

void bestRecord(const int medals[years][countries][medalType]) {
    for (int i = 0; i < countries; ++i) {
        int bestYear = 0;
        int bestTotal = 0;

        for (int year = 0; year < years; ++year) {
            int totalMedalsForYear = 0;
            for (int j = 0; j < medalType; ++j) {
                totalMedalsForYear += medals[year][i][j];
            }

            if (totalMedalsForYear > bestTotal) {
                bestTotal = totalMedalsForYear;
                bestYear = year;
            }
        }

        cout << "Best record for Country " << i + 1 << " was in Year " << bestYear + 1
             << " with a total of " << bestTotal << " medals." << endl;
    }
}

