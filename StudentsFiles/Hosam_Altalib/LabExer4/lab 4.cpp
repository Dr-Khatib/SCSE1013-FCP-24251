#include <iostream>
using namespace std;

const int COUNTRIES = 4; 
const int MEDALS = 3;    


void readMedals(int medals[COUNTRIES][MEDALS]) {
    cout << "Enter the medal counts (Gold, Silver, Bronze) for 4 countries:\n";
    for (int i = 0; i < COUNTRIES; ++i) {
        cout << "Country " << i + 1 << ":\n";
        for (int j = 0; j < MEDALS; ++j) {
            if (j == 0) cout << "  Enter Gold medals: ";
            else if (j == 1) cout << "  Enter Silver medals: ";
            else cout << "  Enter Bronze medals: ";
            cin >> medals[i][j];
        }
    }
}


int totalMedalsCountry3(int medals[COUNTRIES][MEDALS]) {
    int total = 0;
    for (int j = 0; j < MEDALS; ++j) {
        total += medals[2][j]; 
    }
    return total;
}


int largestMedals(int medals[COUNTRIES][MEDALS]) {
    int maxTotal = 0;
    for (int i = 0; i < COUNTRIES; ++i) {
        int total = 0;
        for (int j = 0; j < MEDALS; ++j) {
            total += medals[i][j];
        }
        if (total > maxTotal) {
            maxTotal = total;
        }
    }
    return maxTotal;
}


int smallestMedals(int medals[COUNTRIES][MEDALS]) {
    int minTotal = INT_MAX;
    for (int i = 0; i < COUNTRIES; ++i) {
        int total = 0;
        for (int j = 0; j < MEDALS; ++j) {
            total += medals[i][j];
        }
        if (total < minTotal) {
            minTotal = total;
        }
    }
    return minTotal;
}

int highestGoldMedals(int medals[COUNTRIES][MEDALS]) {
    int maxGold = 0;
    for (int i = 0; i < COUNTRIES; ++i) {
        if (medals[i][0] > maxGold) { 
            maxGold = medals[i][0];
        }
    }
    return maxGold;
}


int totalBronzeMedals(int medals[COUNTRIES][MEDALS]) {
    int totalBronze = 0;
    for (int i = 0; i < COUNTRIES; ++i) {
        totalBronze += medals[i][2]; 
    }
    return totalBronze;
}

int main() {
    int medals[COUNTRIES][MEDALS];

    
    readMedals(medals);

    
    cout << "\nResults:\n";
    cout << "Total medals won by Country 3: " << totalMedalsCountry3(medals) << endl;
    cout << "Largest total medals won by a country: " << largestMedals(medals) << endl;
    cout << "Smallest total medals won by a country: " << smallestMedals(medals) << endl;
    cout << "Highest number of gold medals won: " << highestGoldMedals(medals) << endl;
    cout << "Total number of bronze medals won: " << totalBronzeMedals(medals) << endl;

    return 0;
}

