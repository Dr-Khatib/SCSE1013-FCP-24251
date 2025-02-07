#include <iostream>
#include <string>
using namespace std;

void readMedalCounts(int medals[][3], int numCountries, int& numYears, string years[]) {
    cout << "Enter the number of years: ";
    cin >> numYears;

    for (int year = 0; year < numYears; year++) {
        cout << "\nEnter the name of year " << year + 1 << ": ";
        cin >> years[year];

        cout << "\nEnter medal counts for year " << years[year] << ":" << endl;
        for (int country = 0; country < numCountries; country++) {
            cout << "\nCountry " << country + 1 << ":" << endl;
            cout << "\tGold: ";
            cin >> medals[year * numCountries + country][0];
            cout << "\tSilver: ";
            cin >> medals[year * numCountries + country][1];
            cout << "\tBronze: ";
            cin >> medals[year * numCountries + country][2];
        }
    }
}

int getTotalMedalsForCountryYear(int medals[][3], int country, int year, int numCountries) {
    int totalMedals = 0;
    for (int i = 0; i < 3; i++) {
        totalMedals += medals[year * numCountries + country][i];
    }
    return totalMedals;
}

int getLargestMedals(int medals[][3], int numCountries, int year, int numCountriesPerYear) {
    int largestMedals = 0;
    for (int country = 0; country < numCountriesPerYear; country++) {
        for (int j = 0; j < 3; j++) {
            if (medals[year * numCountriesPerYear + country][j] > largestMedals) {
                largestMedals = medals[year * numCountriesPerYear + country][j];
            }
        }
    }
    return largestMedals;
}

int getSmallestMedals(int medals[][3], int numCountries, int year, int numCountriesPerYear) {
    int smallestMedals = medals[year * numCountriesPerYear][0];
    for (int country = 0; country < numCountriesPerYear; country++) {
        for (int j = 0; j < 3; j++) {
            if (medals[year * numCountriesPerYear + country][j] < smallestMedals) {
                smallestMedals = medals[year * numCountriesPerYear + country][j];
            }
        }
    }
    return smallestMedals;
}

int getHighestGoldMedals(int medals[][3], int numCountries, int year, int numCountriesPerYear) {
    int highestGoldMedals = 0;
    for (int country = 0; country < numCountriesPerYear; country++) {
        if (medals[year * numCountriesPerYear + country][0] > highestGoldMedals) {
            highestGoldMedals = medals[year * numCountriesPerYear + country][0];
        }
    }
    return highestGoldMedals;
}

int getTotalBronzeMedals(int medals[][3], int numCountries, int year, int numCountriesPerYear) {
    int totalBronzeMedals = 0;
    for (int country = 0; country < numCountriesPerYear; country++) {
        totalBronzeMedals += medals[year * numCountriesPerYear + country][2];
    }
    return totalBronzeMedals;
}

int main() {
    const int NUM_COUNTRIES = 5;
    int numYears;
    string years[100]; // Array to store year names (max 100 years)
    int medals[NUM_COUNTRIES * 3][3];

    cout << "This program stores the number of medal collection for 5 countries." << endl;
    cout << "-------------------------------------------------------------------" << endl;

    readMedalCounts(medals, NUM_COUNTRIES, numYears, years);

    int choice;
    do {
        cout << "\n--------------------------------------------\n";
        cout << "Select an analysis option:" << endl;
        cout << "1. Analysis for a specific year" << endl;
        cout << "2. Analysis across all years separately" << endl;
        cout << "3. Analysis across all years combined" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        cout << "--------------------------------------------\n";

        switch (choice) {
            case 1: {
                string yearName;
                cout << "Enter the name of the year you want to analyze: ";
                cin >> yearName;

                int yearIndex = -1;
                for (int i = 0; i < numYears; i++) {
                    if (years[i] == yearName) {
                        yearIndex = i;
                        break;
                    }
                }

                if (yearIndex == -1) {
                    cout << "\nYear not found. Please try again." << endl;
                    break;
                }

                cout << "\nAnalysis for year " << yearName;
                cout << "\n-------------------------------------";

                int totalMedalsCountry3 = getTotalMedalsForCountryYear(medals, 2, yearIndex, NUM_COUNTRIES);
                cout << "\n- Total medals won by Country 3 in year " << yearName << ": " << totalMedalsCountry3 << endl;

                int largestMedals = getLargestMedals(medals, NUM_COUNTRIES, yearIndex, NUM_COUNTRIES);
                cout << "- Largest number of medals won in year " << yearName << ": " << largestMedals << endl;

                int smallestMedals = getSmallestMedals(medals, NUM_COUNTRIES, yearIndex, NUM_COUNTRIES);
                cout << "- Smallest number of medals won in year " << yearName << ": " << smallestMedals << endl;

                int highestGoldMedals = getHighestGoldMedals(medals, NUM_COUNTRIES, yearIndex, NUM_COUNTRIES);
                cout << "- Highest number of gold medals won in year " << yearName << ": " << highestGoldMedals << endl;

                int totalBronzeMedals = getTotalBronzeMedals(medals, NUM_COUNTRIES, yearIndex, NUM_COUNTRIES);
                cout << "- Total number of bronze medals won in year " << yearName << ": " << totalBronzeMedals << endl;
                break;
            }
            case 2: {
                for (int year = 0; year < numYears; year++) {
                    cout << "\nAnalysis for year " << years[year] << ":" << endl;
                    cout << "-------------------------------------" << endl;

                    int totalMedalsCountry3 = getTotalMedalsForCountryYear(medals, 2, year, NUM_COUNTRIES);
                    cout << "- Total medals won by Country 3: " << totalMedalsCountry3 << endl;

                    int largestMedals = getLargestMedals(medals, NUM_COUNTRIES, year, NUM_COUNTRIES);
                    cout << "- Largest number of medals won: " << largestMedals << endl;

                    int smallestMedals = getSmallestMedals(medals, NUM_COUNTRIES, year, NUM_COUNTRIES);
                    cout << "- Smallest number of medals won: " << smallestMedals << endl;

                    int highestGoldMedals = getHighestGoldMedals(medals, NUM_COUNTRIES, year, NUM_COUNTRIES);
                    cout << "- Highest number of gold medals won: " << highestGoldMedals << endl;

                    int totalBronzeMedals = getTotalBronzeMedals(medals, NUM_COUNTRIES, year, NUM_COUNTRIES);
                    cout << "- Total number of bronze medals won: " << totalBronzeMedals << endl;
                }
                break;
            }
            case 3: {
                int totalMedalsCountry3 = 0;
                int largestMedals = 0;
                int smallestMedals = medals[0][0];
                int highestGoldMedals = 0;
                int totalBronzeMedals = 0;

                cout << "\nAnalysis for all years combined: ";
                cout << "\n-------------------------------------";

                for (int i = 0; i < NUM_COUNTRIES * numYears; i++) {
                    totalMedalsCountry3 += medals[i][0] + medals[i][1] + medals[i][2];

                    if (medals[i][0] > highestGoldMedals) {
                        highestGoldMedals = medals[i][0];
                    }

                    if (medals[i][0] + medals[i][1] + medals[i][2] > largestMedals) {
                        largestMedals = medals[i][0] + medals[i][1] + medals[i][2];
                    }

                    if (medals[i][0] + medals[i][1] + medals[i][2] < smallestMedals) {
                        smallestMedals = medals[i][0] + medals[i][1] + medals[i][2];
                    }

                    totalBronzeMedals += medals[i][2];
                }

                cout << "\n- Total medals won by Country 3 across all years: " << totalMedalsCountry3 << endl;
                cout << "- Largest number of medals won across all years: " << largestMedals << endl;
                cout << "- Smallest number of medals won across all years: " << smallestMedals << endl;
                cout << "- Highest number of gold medals won across all years: " << highestGoldMedals << endl;
                cout << "- Total number of bronze medals won across all years: " << totalBronzeMedals << endl;
                break;
            }
            case 4:
                cout << "\nExiting..." << endl;
                break;
            default:
                cout << "\nInvalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}