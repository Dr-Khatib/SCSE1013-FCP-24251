#include <iostream>
using namespace std;

const int COUNTRIES = 4;  
const int MEDALS = 3;     
const int YEARS = 3;      


void readMedals(int medals[YEARS][COUNTRIES][MEDALS], int years[YEARS]) {
    for (int y = 0; y < YEARS; y++) {
        cout << "\nEnter medal counts for year " << years[y] << ":\n";
        for (int i = 0; i < COUNTRIES; i++) {
            cout << "  Country " << i + 1 << ":\n";
            cout << "    Enter Gold medals: ";
            cin >> medals[y][i][0];
            cout << "    Enter Silver medals: ";
            cin >> medals[y][i][1];
            cout << "    Enter Bronze medals: ";
            cin >> medals[y][i][2];
        }
    }
}


void displayBestRecord(int medals[YEARS][COUNTRIES][MEDALS], int years[YEARS]) {
    int bestYear = 0, bestCountry = 0, maxMedals = 0;

    for (int y = 0; y < YEARS; y++) {
        for (int i = 0; i < COUNTRIES; i++) {
            int total = medals[y][i][0] + medals[y][i][1] + medals[y][i][2];
            if (total > maxMedals) {
                maxMedals = total;
                bestYear = years[y];
                bestCountry = i + 1;
            }
        }
    }

   
    cout << "\nThe Best Record:\n";
    cout << "Year: " << bestYear << endl;
    cout << "Country: " << bestCountry << endl;
    cout << "Total medals won: " << maxMedals << endl;
}

int main() {
    int medals[YEARS][COUNTRIES][MEDALS]; 
    int years[YEARS] = {2020, 2021, 2022}; 

    
    readMedals(medals, years);

   
    displayBestRecord(medals, years);

    return 0;
}

