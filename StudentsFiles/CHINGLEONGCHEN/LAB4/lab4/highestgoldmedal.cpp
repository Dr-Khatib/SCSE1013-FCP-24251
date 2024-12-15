#include <iostream>
#include "header.h"



int goldmedal (int count , int gold[]){

int totalgold ;

for (int i = 0; i < count; i++) {
        totalgold += gold[i];
    }

return totalgold ;


}


