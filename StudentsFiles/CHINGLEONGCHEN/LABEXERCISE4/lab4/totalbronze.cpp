#include <iostream>
#include "header.h"

using namespace std; 

int totalbronze (int count , int bronze[]){

int total_bronze ;

for (int i = 0; i < count; i++) {
    
        total_bronze += bronze[i];
    }

return total_bronze ;

}