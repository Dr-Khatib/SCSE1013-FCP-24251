#include <iostream>
#include "header.h"
using namespace std;

void displayBestRecord(int count,int year[], string country[], int gold[], int silver[], int bronze[]) {

    MedalRecord result = best_record(count, year,country, gold, silver, bronze);
    cout << "The country at  "<< result.bestyear <<" with the most medals is " << result.bestCountry 
         << " with " << result.totalMedals << " total medals." << endl;
}
