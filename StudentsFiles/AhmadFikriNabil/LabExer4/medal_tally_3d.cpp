/*
    Country Medal Tally
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 9/12/2024
*/

#include <iostream>
using namespace std;

// global variable
const int maxCountry = 4; // country 1-4
const int maxYear = 3;
const int maxMedal = 3; // gold, silver, bronze = 3

// function declaration
void displayMedalTable(int medals[][maxYear][maxMedal]); // to display medal tally
int totalMedalbyCountry(int medals[][maxYear][maxMedal], int countryNumber); // to count total medals won by a country
int findLargestNumber(int medals[][maxYear][maxMedal]); // to find largest number of medals won by a country
int findSmallestNumber(int medals[][maxYear][maxMedal]); // to find smallest number of medals won by a country
int findLargestGold(int medals[][maxYear][maxMedal]); // to find largest number of gold medals won by a country
int calculateTotalBronze(int medals[][maxYear][maxMedal]); // to calculate total bronze medals won by all country
void displayBestYearRecord(int medals[][maxYear][maxMedal]); // to display the best record from each country

int main() {

    // variable declaration
    int medals[maxCountry][maxYear][maxMedal] = {
        {   // country 1
            {0,0,0}, // year 2020 = {gold, silver, bronze}
            {0,0,0}, // year 2022 = {gold, silver, bronze}
            {0,0,0}  // year 2024 = {gold, silver, bronze}
        }, 
        {   // country 2
            {0,0,0}, // year 2020 = {gold, silver, bronze}
            {0,0,0}, // year 2022 = {gold, silver, bronze}
            {0,0,0}  // year 2024 = {gold, silver, bronze}
        },
        {   // country 3
            {0,0,0}, // year 2020 = {gold, silver, bronze}
            {0,0,0}, // year 2022 = {gold, silver, bronze}
            {0,0,0}  // year 2024 = {gold, silver, bronze}
        },
        {   // country 4
            {0,0,0}, // year 2020 = {gold, silver, bronze}
            {0,0,0}, // year 2022 = {gold, silver, bronze}
            {0,0,0}  // year 2024 = {gold, silver, bronze}
        },
    };
    int inputMedal;
    int i = 0, j = 0, k = 0;

    // show table of country medal tally
    displayMedalTable(medals);


    // prompt for country number, must be from 1-4
    for (i = 0; i < maxCountry; i++) {

        
        cout << "\n\nCountry " << i+1;

        for (j = 0; j < maxYear; j++) {
            if (j == 0)
                cout << "\nYear 2020";
            else if (j == 1)
                cout << "\nYear 2022";
            else
                cout << "\nYear 2024";
            
            cout << "\nEnter number of gold medals: ";
            cin >> inputMedal;
            medals[i][j][0] = inputMedal;

            cout << "Enter number of silver medals: ";
            cin >> inputMedal;
            medals[i][j][1] = inputMedal;

            cout << "Enter number of bronze medals: ";
            cin >> inputMedal;
            medals[i][j][2] = inputMedal;
        }
    }

    displayMedalTable(medals); // display table of country medal tally

    int result = totalMedalbyCountry(medals, 3);
    cout << "\n\nTotal medals won by Country 3: " << result << " medals";

    int largest = findLargestNumber(medals);
    cout << "\nLargest medals won: " << largest << " medals";

    int smallest = findSmallestNumber(medals);
    cout << "\nSmallest medals won: " << smallest << " medals";

    int largestGold = findLargestGold(medals);
    cout << "\nLargest gold medals won: " << largestGold << " medals";

    int totalBronze = calculateTotalBronze(medals);
    cout << "\nTotal bronze medals won: " << totalBronze << " medals\n\n";

    displayBestYearRecord(medals);

    return 0;
}


// function definition
void displayMedalTable(int medals[][maxYear][maxMedal]) {

    int i = 0, j = 0;
    cout << "\n\t\t\t2020\t\t\t\t2022\t\t\t\t2024";
    cout << "\n\t\tGold\tSilver\tBronze\t\tGold\tSilver\tBronze\t\tGold\tSilver\tBronze";

    for (i = 0; i < 4; i++) {
        cout << "\nCountry " << i+1;
        for (j = 0; j < 3; j++) {
            cout << "\t  " << medals[i][j][0] << "\t  " << medals[i][j][1] << "\t  " << medals[i][j][2] << "\t";
        }
        cout << "\n";
    }

}

int totalMedalbyCountry(int medals[][maxYear][maxMedal], int countryNumber) {
    int result = 0;
    int i = 0, j = 0;

    for (i = 0; i < maxCountry; i++) {
        if (i == (countryNumber-1)) {
            for (j = 0; j < maxYear; j++) {
                result = result + medals[i][j][0] + medals[i][j][1] + medals[i][j][2];
            }
        }
    }

    return result;
}

int findLargestNumber(int medals[][maxYear][maxMedal]) {
    int largest = 0;
    int i = 0, j = 0, k = 0;

    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxYear; j++) {
           for (k = 0; k < maxMedal; k++) {
                if (medals[i][j][k] > largest) 
                    largest = medals[i][j][k];
           }
        }
    }

    return largest;
}

int findSmallestNumber(int medals[][maxYear][maxMedal]) {
    int smallest = medals[0][0][0];
    int i = 0, j = 0, k = 0;

    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxMedal; j++) {
             for (k = 0; k < maxMedal; k++) {
                if (medals[i][j][k] < smallest) 
                    smallest = medals[i][j][k];
           }
        }
    }

    return smallest;
}

int findLargestGold(int medals[][maxYear][maxMedal]) {
    int largest = 0;
    int i = 0, j = 0;

    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxYear; j++) {
            if (medals[i][j][0] > largest)
                largest = medals[i][j][0];
        }
    }

    return largest;
}

int calculateTotalBronze(int medals[][maxYear][maxMedal]) {
    int result = 0;
    int i = 0, j = 0;

    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxYear; j++) {
            result = result + medals[i][j][2];
        }
    }

    return result;
}

void displayBestYearRecord(int medals[][maxYear][maxMedal]) {
    int i = 0, j = 0, k = 0;
    int bestYear = 0, bestGold = 0;
    int actualYear = 0;
    int totalMedal = 0;

    cout << "\nBest Record";
    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxYear; j++) {
           if (medals[i][j][0] > bestGold) {
                bestGold = medals[i][j][0];
                bestYear = j;
           }
        }
        totalMedal = medals[i][bestYear][0] + medals[i][bestYear][1] + medals[i][bestYear][2];
        if (bestYear == 0)
            actualYear = 2020;
        else if (bestYear == 1)
            actualYear = 2022;
        else 
            actualYear = 2024;
        cout << "\nCountry " << i+1 << " : Year " <<  actualYear;
        cout << "\nGold: " << medals[i][bestYear][0] << ", Silver: " << medals[i][bestYear][1] << ", Bronze: " << medals[i][bestYear][2] << ", Total Medals: " << totalMedal;
    }

    cout << "\n\n";
}

