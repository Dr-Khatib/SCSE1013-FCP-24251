#include <iostream>
#include "header.h"



MedalRecord best_record(int count, int year[], string country[], int gold[], int silver[], int bronze[]) {
    
    int maxMedals = 0;
    string bestCountry = "";
    int bestyear=0;     

    for (int i = 0; i < count; i++) {
        int totalMedals = gold[i] + silver[i] + bronze[i];
        if (totalMedals > maxMedals) {
            maxMedals = totalMedals;
            bestCountry = country[i];
            bestyear=year[i];

        }
    }

    return {bestCountry, maxMedals,bestyear};
}