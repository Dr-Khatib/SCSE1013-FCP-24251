#include <iostream>
using namespace std;

void readMedalCounts(int medals[][3], int numCountries) {
    for (int i = 0; i < numCountries; i++) {
        cout << "Enter medal counts for Country " << i+1 << ":" << endl;
        cout << "Gold: ";
        cin >> medals[i][0];
        cout << "Silver: ";
        cin >> medals[i][1];
        cout << "Bronze: ";
        cin >> medals[i][2];
    }
}

int getTotalMedalsForCountry(int medals[][3], int country, int numCountries) {
    int totalMedals = 0;
    for (int i = 0; i < 3; i++) {
        totalMedals += medals[country][i];
    }
    return totalMedals;
}

int getLargestMedals(int medals[][3], int numCountries) {
    int largestMedals = 0;
    for (int i = 0; i < numCountries; i++) {
        for (int j = 0; j < 3; j++) {
            if (medals[i][j] > largestMedals) {
                largestMedals = medals[i][j];
            }
        }
    }
    return largestMedals;
}

int getSmallestMedals(int medals[][3], int numCountries) {
    int smallestMedals = medals[0][0];
    for (int i = 0; i < numCountries; i++) {
        for (int j = 0; j < 3; j++) {
            if (medals[i][j] < smallestMedals) {
                smallestMedals = medals[i][j];
            }
        }
    }
    return smallestMedals;
}

int getHighestGoldMedals(int medals[][3], int numCountries) {
    int highestGoldMedals = 0;
    for (int i = 0; i < numCountries; i++) {
        if (medals[i][0] > highestGoldMedals) {
            highestGoldMedals = medals[i][0];
        }
    }
    return highestGoldMedals;
}

int getTotalBronzeMedals(int medals[][3], int numCountries) {
    int totalBronzeMedals = 0;
    for (int i = 0; i < numCountries; i++) {
        totalBronzeMedals += medals[i][2];
    }
    return totalBronzeMedals;
}

int main() {
    const int NUM_COUNTRIES = 5;
    int medals[NUM_COUNTRIES][3];

    cout << "This program stores the number of medal collection for 5 countries." << endl;
    cout << "-------------------------------------------------------------------" << endl;
    
    readMedalCounts(medals, NUM_COUNTRIES);

    int totalMedalsCountry3 = getTotalMedalsForCountry(medals, 2, NUM_COUNTRIES);
    cout << "\n- Total medals won by Country 3: " << totalMedalsCountry3 << endl;

    int largestMedals = getLargestMedals(medals, NUM_COUNTRIES);
    cout << "- Largest number of medals won: " << largestMedals << endl;

    int smallestMedals = getSmallestMedals(medals, NUM_COUNTRIES);
    cout << "- Smallest number of medals won: " << smallestMedals << endl;

    int highestGoldMedals = getHighestGoldMedals(medals, NUM_COUNTRIES);
    cout << "- Highest number of gold medals won: " << highestGoldMedals << endl;

    int totalBronzeMedals = getTotalBronzeMedals(medals, NUM_COUNTRIES);
    cout << "- Total number of bronze medals won: " << totalBronzeMedals << endl;

    return 0;
}
