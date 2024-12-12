#include <iostream>
#include <cstdlib>
using namespace std;

void readMed(int medals[4][3]) {
    for (int i = 0; i < 4; i++) {
        cout << "Enter medals for Country " << i + 1 << " (Gold, Silver, Bronze): ";
        for (int j = 0; j < 3; j++) {
            cin >> medals[i][j]; 
        }
    }
}

int MtCountry3(int medals[4][3]) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += medals[2][i];
    }
    return total;
}

int largMed(int medals[4][3]) {
    int maxMedals = 0;
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += medals[i][j];
        }
        if (total > maxMedals) {
            maxMedals = total;
        }
    }
    return maxMedals;
}

int smalMed(int medals[4][3]) {
    int minMedals = 1000000;
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += medals[i][j];
        }
        if (total < minMedals) {
            minMedals = total;
        }
    }
    return minMedals;
}

int highestGoldMedals(int medals[4][3]) {
    int maxGold = 0;
    for (int i = 0; i < 4; i++) {
        if (medals[i][0] > maxGold) {
            maxGold = medals[i][0];
        }
    }
    return maxGold;
}

int totalBronzeMedals(int medals[4][3]) {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += medals[i][2];
    }
    return total;
}

int main() {
    int medals[4][3];

    readMed(medals);
    system("cls");
    
    cout << "Total medals won by Country 3: " << MtCountry3(medals) << endl;
    cout << "Largest number of medals won: " << largMed(medals) << endl;
    cout << "Smallest number of medals won: " << smalMed(medals) << endl;
    cout << "Highest number of gold medals won: " << highestGoldMedals(medals) << endl;
    cout << "Total number of bronze medals won: " << totalBronzeMedals(medals) << endl;

    return 0;
}
