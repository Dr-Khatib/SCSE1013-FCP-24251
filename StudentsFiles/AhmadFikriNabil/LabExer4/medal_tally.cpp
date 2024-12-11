/*
    Country Medal Tally
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 9/12/2024
*/

#include <iostream>
using namespace std;

// global variable
const int maxCountry = 4; // country 1-4
const int maxMedal = 3; // gold, silver, bronze = 3

// function declaration
void displayMedalTable(int medals[][maxMedal]); // to display medal tally
int totalMedalbyCountry(int medals[][maxMedal], int countryNumber); // to count total medals won by a country
int findLargestNumber(int medals[][maxMedal]); // to find largest number of medals won by a country
int findSmallestNumber(int medals[][maxMedal]); // to find smallest number of medals won by a country
int findLargestGold(int medals[][maxMedal]); // to find largest number of gold medals won by a country
int calculateTotalBronze(int medals[][maxMedal]); // to calculate total bronze medals won by all country

int main() {

    // variable declaration
    int medals[maxCountry][maxMedal] = {
        {0,0,0}, // country 1 = {gold, silver, bronze}
        {0,0,0}, // country 2 = {gold, silver, bronze}
        {0,0,0}, // country 3 = {gold, silver, bronze}
        {0,0,0}  // country 4 = {gold, silver, bronze}
    };
    int inputMedal;
    int i = 0, j = 0;

    // show table of country medal tally
    displayMedalTable(medals);


    // prompt for country number, must be from 1-4
    for (i = 0; i < maxCountry; i++) {

        
        cout << "\n\nCountry " << i+1;

        cout << "\nEnter number of gold medals: ";
        cin >> inputMedal;
        medals[i][0] = inputMedal;

        cout << "Enter number of silver medals: ";
        cin >> inputMedal;
        medals[i][1] = inputMedal;

        cout << "Enter number of bronze medals: ";
        cin >> inputMedal;
        medals[i][2] = inputMedal;
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

    return 0;
}


// function definition
void displayMedalTable(int medals[][maxMedal]) {

    int i = 0;
    cout << "\n\t\tGold\tSilver\tBronze";

    for (i = 0; i < 4; i++) {
        cout << "\nCountry " << i+1 << "\t  " << medals[i][0] << "\t  " << medals[i][1] << "\t  " << medals[i][2];
    }

}

int totalMedalbyCountry(int medals[][maxMedal], int countryNumber) {
    return medals[countryNumber-1][0] + medals[countryNumber-1][1] + medals[countryNumber-1][2];
}

int findLargestNumber(int medals[][maxMedal]) {
    int largest = 0;
    int i = 0, j = 0;

    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxMedal; j++) {
            if (medals[i][j] > largest) 
                largest = medals[i][j];
        }
    }

    return largest;
}

int findSmallestNumber(int medals[][maxMedal]) {
    int smallest = medals[0][0];
    int i = 0, j = 0;

    for (i = 0; i < maxCountry; i++) {
        for (j = 0; j < maxMedal; j++) {
            if (medals[i][j] < smallest) 
                smallest = medals[i][j];
        }
    }

    return smallest;
}

int findLargestGold(int medals[][maxMedal]) {
    int largest = 0;
    int i = 0;

    for (i = 0; i < maxCountry; i++) {
        if (medals[i][0] > largest)
            largest = medals[i][0];
    }

    return largest;
}

int calculateTotalBronze(int medals[][maxMedal]) {
    return medals[0][2] + medals[1][2] + medals[2][2] + medals[3][2];
}