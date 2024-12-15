#include <iostream>
#include "header.h"



// Function definition
int total_medal(int count, string country[], int gold[], int sliver[], int bronze[]) {
    int num, total;

    // Display all countries with their indices
    for (int i = 0; i < count; i++) {
        cout << i << ": " << country[i] << endl;
    }

    // Prompt the user to choose a country
    cout << "Choose a country by entering its index: ";
    cin >> num;

    // Validate the input
    if (num< 0 || num >= count) {
        cout << "Invalid selection. Please choose a valid country index." << endl;
        return 0;
    }

    // Calculate total medals for the selected country
    total = gold[num] + sliver[num] + bronze[num];
    return total;

}
