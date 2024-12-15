#include <iostream>
#include <iomanip>
#include "header.h"


void displayTable(int count, int year[],string country[], int gold[], int silver[], int bronze[]) {
    
    cout << setw(15) << left << "Country"
         << setw(10) << "Year"
         << setw(10) << "Gold"
         << setw(10) << "Silver"
         << setw(10) << "Bronze"
         << setw(10) << "Total" << endl;

    cout << string(55, '-') << endl; 

   
    for (int i = 0; i < count; i++) {
        int total = gold[i] + silver[i] + bronze[i];
        cout << setw(15) << left << country[i]
             << setw(10) << year[i]
             << setw(10) << gold[i]
             << setw(10) << silver[i]
             << setw(10) << bronze[i]
             << setw(10) << total << endl;
    }
}