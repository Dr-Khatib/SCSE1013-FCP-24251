#include <iostream>
#include <iomanip>
using namespace std;

const int typeMedal =3;
const int country=5;
const int maxYear=100000;
int record[maxYear][country][typeMedal]={0};
int existYear[maxYear];

void readMedal(int record[][country][typeMedal],int existYear[]);
void summaryForAYear(int record[][country][typeMedal],int existYear[]);
void displayAllData(int record[][country][typeMedal]);
void summaryForAllYear(int record[][country][typeMedal], int existYear[]);

int totalMedalCountry3(int record[][country][typeMedal],int Cyear);
int largestMedal(int record[][country][typeMedal],int CYear);
int smallestMedal(int record[][country][typeMedal],int CYear);
int highestGold(int record[][country][typeMedal],int CYear);
int totalBronze(int record[][country][typeMedal],int CYear);

int main(){
    char choice;
    int year=1;

    readMedal(record,existYear);

    while(true){
    
    cout << "Menu" << endl;
    cout <<"-A Insert record" << endl;
    cout <<"-B Display All Data" << endl;
    cout <<"-C Summary for a year record" << endl;
    cout <<"-D Summary for all year record" << endl;
    cout <<"-E Exits" << endl;
    cout <<"Your choice is :";
    cin  >> choice;
    cout << "\n";

    if(choice=='E'){
        break;
    }
        switch(choice){
        case 'A' :
            readMedal(record,existYear);
            continue;
        case 'B' :
            displayAllData(record);
            continue;
        case 'C' :
            summaryForAYear(record,existYear);
            continue;
        case 'D' :
            summaryForAllYear(record,existYear);
            continue;
        }

    }

    return 0;
}

void readMedal(int [][country][typeMedal],int []){
    int CYear;

    while (true) {
        cout << "Please insert the year you want to record (Press 0 to exit): ";
        cin >> CYear;

        if (CYear == 0) 
            break;

        if (existYear[CYear]) { 
            cout << "Sorry, the record for this year already exists." << endl;
            continue;
        }

        cout << "Now, you are entering the result for year " << CYear  << endl;

        for (int i = 0; i < country; i++) {
            cout << "Please enter the number of each medal for country " << i + 1 << " (Gold, Silver, Bronze): ";
            cin >> record[CYear][i][0] >> record[CYear][i][1] >> record[CYear][i][2];
        }

        existYear[CYear] = 1;
        cout << "Record for year " << CYear << " has been saved!" << endl << endl;
    }
   

}

void displayAllData(int record[][country][typeMedal]){
    cout << "Here is all data recorded" << endl << endl;

    for (int j = 0; j < maxYear; j++) {
        if (!existYear[j]) {
            continue; // Skip years with no data
        }

    cout << "Year: " << j << endl;
    cout << setw(15) << left << "Country" <<"|"
         << setw(15) << "Gold" <<"|"
         << setw(15) << "Silver" <<"|"
         << setw(15) << "Bronze" <<"|"<< endl;
    cout << string(64, '-') << endl;

    for(int i=0;i<country;i++){
        cout << left << setw(15) << ("Country" + to_string(i + 1)) <<"|"
             << setw(15) << record[j][i][0] <<"|"
             << setw(15) << record[j][i][1] <<"|"
             << setw(15) << record[j][i][2] <<"|" << endl;
    }
    cout << "\n";
    }
}

void summaryForAYear(int record[][country][typeMedal],int existYear[]){
    int CYear;
    while(true){
    cout << "Please insert the year you want to summarize(Enter 0 to exits) :";
    cin >> CYear;
    if(CYear==0){
        break;
    }

    if(!(existYear[CYear])){
        cout << "Sorry, this year no have any record.Please enter again";
        continue;
    }
    

    cout << "The summary of Year " << CYear << " is successfully show" << endl;
    cout << setw(15) << left << "Country" <<"|"
         << setw(15) << "Gold" <<"|"
         << setw(15) << "Silver" <<"|"
         << setw(15) << "Bronze" <<"|"<< endl;
    cout << string(64, '-') << endl;

    for(int i=0;i<country;i++){
        cout << left << setw(15) << ("Country" + to_string(i + 1)) <<"|"
             << setw(15) << record[CYear][i][0] <<"|"
             << setw(15) << record[CYear][i][1] <<"|"
             << setw(15) << record[CYear][i][2] <<"|" << endl;
    }

    cout << "The total number of medals won by country3 : " << totalMedalCountry3(record,CYear)<< endl;
    cout << "The largest number of medal won            : " << largestMedal(record, CYear)<< endl;
    cout << "The smallest number of medal won           : " << smallestMedal(record, CYear) << endl;
    cout << "The highest number of gold medal won       : " << highestGold(record, CYear) << endl;
    cout << "The total number of bronze medal won       : " << totalBronze(record, CYear) << endl;
    break;
    }
}

int totalMedalCountry3(int record[][country][typeMedal],int CYear){
    int total =0;
    total += record[CYear][2][0] + record[CYear][2][1] + record[CYear][2][2]; 


   return total;
}

int largestMedal(int record[][country][typeMedal],int CYear){
    int largest = record[CYear][0][0];

        for(int i =0;i<country;i++){
            for(int j=0;j<typeMedal;j++){
                if(record[CYear][i][j]>largest){
                    largest = record[CYear][i][j];
                }
            }
        }
        return largest;
}

int smallestMedal(int record[][country][typeMedal],int CYear){
    int smallest = record[CYear][0][0];

        for(int i =0;i<country;i++){
            for(int j=0;j<typeMedal;j++){
                if(record[CYear][i][j]<smallest){
                    smallest = record[CYear][i][j];
                }
            }
        }
    return smallest;
}

int highestGold(int record[][country][typeMedal],int CYear){
    int highGold = record[CYear][0][0];

    for(int i=0;i<country;i++){
        if(record[CYear][i][0]>highGold){
            highGold = record[CYear][i][0];
        }
    }
    return highGold;
}

int totalBronze(int record[][country][typeMedal],int CYear){
    int total = 0;

    for(int i=0;i<country;i++){
        total += record[CYear][i][2];
    }
    return total;
}

void summaryForAllYear(int record[][country][typeMedal], int existYear[]) {
    int totalMedals[country] = {0};  // Store total medals for each country
    int highestGold = 0;            // Highest gold medals in any year for any country
    int yearWithHighestGold = 0;    // Year corresponding to highest gold medals
    int countryWithHighestGold = 0; // Country corresponding to highest gold medals

    // Loop through all possible years
    for (int j = 0; j < maxYear; j++) {
        if (!existYear[j]) {
            continue; // Skip years with no data
        }

        // Process the data for this year
        for (int i = 0; i < country; i++) {
            // Add the total medals for each country
            totalMedals[i] += record[j][i][0] + record[j][i][1] + record[j][i][2];

            // Check if this country has the highest gold in this year
            if (record[j][i][0] > highestGold) {
                highestGold = record[j][i][0];
                yearWithHighestGold = j;
                countryWithHighestGold = i + 1; // +1 to match human-readable numbering
            }
        }
    }

    // Display summary
    cout << "Summary for all years:" << endl;
    cout << setw(15) << left << "Country" << "|"
         << setw(15) << "Total Medals" << "|" << endl;
    cout << string(32, '-') << endl;

    // Print total medals for each country
    for (int i = 0; i < country; i++) {
        cout << setw(15) << ("Country" + to_string(i + 1)) << "|"
             << setw(15) << totalMedals[i] << "|" << endl;
    }

    cout << endl;
    cout << "Highest number of gold medals won in any year: " << highestGold
         << " by Country " << countryWithHighestGold << " in Year " << yearWithHighestGold << endl;
}