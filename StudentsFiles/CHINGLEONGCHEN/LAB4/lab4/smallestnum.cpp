#include <iostream>
#include "header.h"



string smallestnum(int count, int gold[], int sliver[], int bronze[]) {
    // Initialize totals
    int totalgold = 0, totalsliver = 0, totalbronze = 0;

    // Calculate total counts for each medal type
    for (int i = 0; i < count; i++) {
        totalgold += gold[i];
        totalsliver += sliver[i];
        totalbronze += bronze[i];
    }

    // Determine the medal type with the highest total
    if (totalgold < totalsliver && totalgold <totalbronze) {
        return "Gold";
    } else if (totalsliver < totalgold && totalsliver < totalbronze) {
        return "Silver";
    } else {
        return "Bronze";
    }
}

