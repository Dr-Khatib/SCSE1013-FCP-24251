#include <iostream>
using namespace std;

const int countries = 4;
const int medalType = 3;

void readMedals(int medals[countries][medalType]);
int totalMedalsCountry3(const int medals[countries][medalType]);
int largestMedals(const int medals[countries][medalType]);
int smallestMedals(const int medals[countries][medalType]);
int highestGold(const int medals[countries][medalType]);
int totalBronze(const int medals[countries][medalType]);

int main() {
    int medals[countries][medalType];

    cout << "Enter the medal counts for 4 countries (Gold, Silver, Bronze):"<<endl;
    readMedals(medals);

    cout << "Total medals won by Country 3: " << totalMedalsCountry3(medals) << endl;
    cout << "Largest number of medals won: " << largestMedals(medals) << endl;
    cout << "Smallest number of medals won: " << smallestMedals(medals) << endl;
    cout << "Highest number of gold medals won: " << highestGold(medals) << endl;
    cout << "Total number of bronze medals won: " << totalBronze(medals) << endl;

    return 0;
}

void readMedals(int medals[countries][medalType]) {
    for (int i = 0; i < countries; ++i) {
        cout << "Enter medals for Country " << i + 1 << " (Gold Silver Bronze): ";
        for (int j = 0; j < medalType; ++j) {
            cin >> medals[i][j];
        }
    }
}

int totalMedalsCountry3(const int medals[countries][medalType]) {
    int total = 0;
    for (int j = 0; j < medalType; ++j) {
        total += medals[2][j];
    }
    return total;
}

int largestMedals(const int medals[countries][medalType]) {
    int largest = medals[0][0];
    for (int i = 0; i < countries; ++i) {
        for (int j = 0; j < medalType; ++j) {
            if (medals[i][j] > largest) {
                largest = medals[i][j];
            }
        }
    }
    return largest;
}

int smallestMedals(const int medals[countries][medalType]) {
    int smallest = medals[0][0];
    for (int i = 0; i < countries; ++i) {
        for (int j = 0; j < medalType; ++j) {
            if (medals[i][j] < smallest) {
                smallest = medals[i][j];
            }
        }
    }
    return smallest;
}

int highestGold(const int medals[countries][medalType]) {
    int highest = medals[0][0];
    for (int i = 0; i < countries; ++i) {
        if (medals[i][0] > highest) {
            highest = medals[i][0];
        }
    }
    return highest;
}

int totalBronze(const int medals[countries][medalType]) {
    int total = 0;
    for (int i = 0; i < countries; ++i) {
        total += medals[i][2];
    }
    return total;
}

