#include <iostream>
using namespace std;
void readMedals(int medals[][3], int numCountries);
int totalMedalsByCountry(int medals[][3], int country);
int largestTotalMedals(int medals[][3], int numCountries);
int smallestTotalMedals(int medals[][3], int numCountries);
int highestGoldMedals(int medals[][3], int numCountries);
int totalBronzeMedals(int medals[][3], int numCountries);
void displayBestRecord(int records[][4], int years, int numCountries);

int main() {
const int numCountries = 5; 
const int numYears = 3;     
int medals[numYears][numCountries][3]; 
int totalRecords[numYears][4]; 
int yearBest = 0, maxMedals = 0;

for (int y = 0; y < numYears; y++) {
cout << "\nEnter data for Year " << (y + 1) << ":\n";
readMedals(medals[y], numCountries);
totalRecords[y][0] = y + 1; 
totalRecords[y][1] = largestTotalMedals(medals[y], numCountries);
totalRecords[y][2] = highestGoldMedals(medals[y], numCountries);
totalRecords[y][3] = totalBronzeMedals(medals[y], numCountries);
if (totalRecords[y][1] > maxMedals) {
maxMedals = totalRecords[y][1];
yearBest = y;
}
}
cout << "\n*** Overall Records ***\n";
displayBestRecord(totalRecords, numYears, numCountries);
cout << "\nBest Year: Year " << totalRecords[yearBest][0];
cout << "\nBest Total Medals Won: " << maxMedals << "\n";
return 0;
}

void readMedals(int medals[][3], int numCountries) {
for (int i = 0; i < numCountries; i++) {
cout << "Enter Gold, Silver, Bronze for Country " << (i + 1) << ": ";
cin >> medals[i][0] >> medals[i][1] >> medals[i][2];
}
}

int totalMedalsByCountry(int medals[][3], int country) {
return medals[country][0] + medals[country][1] + medals[country][2];
}

int largestTotalMedals(int medals[][3], int numCountries) {
int maxTotal = 0;
for (int i = 0; i < numCountries; i++) {
int total = totalMedalsByCountry(medals, i);
if (total > maxTotal) maxTotal = total;
}
return maxTotal;
}

int smallestTotalMedals(int medals[][3], int numCountries) {
int minTotal = totalMedalsByCountry(medals, 0);
for (int i = 1; i < numCountries; i++) {
int total = totalMedalsByCountry(medals, i);
if (total < minTotal) minTotal = total;
}
return minTotal;
}

int highestGoldMedals(int medals[][3], int numCountries) {
int maxGold = 0;
for (int i = 0; i < numCountries; i++) {
if (medals[i][0] > maxGold) maxGold = medals[i][0];
}
return maxGold;
}

int totalBronzeMedals(int medals[][3], int numCountries) {
int totalBronze = 0;
for (int i = 0; i < numCountries; i++) {
totalBronze += medals[i][2];
}
return totalBronze;
}

void displayBestRecord(int records[][4], int years, int numCountries) {
cout << "Year\tTotal Medals\tMax Gold\tTotal Bronze\n";
for (int i = 0; i < years; i++) {
cout << records[i][0] << "\t" << records[i][1] << "\t\t"
<< records[i][2] << "\t\t" << records[i][3] << endl;
}
}
