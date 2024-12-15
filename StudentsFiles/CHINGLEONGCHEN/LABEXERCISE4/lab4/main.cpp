#include <iostream>
#include "header.h"
using namespace std;

int main() {
    string country[100],largest;
    int gold[100], sliver[100], bronze[100],year[100],choice;
    int quit = 1, count = 0, totalMedal;

    // Collect user input for countries and their medals
    while (quit != 0) {

        readdata(count, year ,country, gold, sliver,bronze);

        cout << "Wanna quit? Enter 1 to continue, 0 to quit: ";
        cin >> quit;
       
    }

    displayTable(count, year,country, gold, sliver,  bronze);


    cout << "Enter the result you want to see "<<endl;
    cout << "1. Total medal won by a country "<<endl;
    cout << "2. Largest number of medal won "<<endl;
    cout << "3. Smallest number of medal won "<<endl;
    cout << "4. Highest number of gold medal won "<<endl;
    cout << "5. Total number of bronze medal won "<<endl; 
    cout << "6. The best record "<<endl;
    cout << "Enter your choice :";
    cin >> choice ;

switch (choice){

    case 1 :{
         int totalMedal = total_medal(count, country, gold, sliver, bronze);
        cout << "Total medals for  " << totalMedal << endl;
        break;

    }

       
    case 2 : {

        string Lmedal=largestnum( count,  gold, sliver, bronze);
        cout << "Largest number of medal won is "<< Lmedal <<endl;
        break;
    }

        
    case 3: {

         string Smedal=smallestnum(count,  gold, sliver, bronze);
        cout << "Largest number of medal won is "<< Smedal <<endl;
        break;
    }

    
    case 4 : {

         int Goldmedal = goldmedal ( count , gold);
        cout << " Highest number of gold medal won is "<< Goldmedal <<endl;
        break ; 
    }

       
    case 5 : {

        int Totalbronze = totalbronze ( count ,  bronze);
        cout << "Total number of bronze medal won is "<<Totalbronze << endl;
        break;
    }


    case 6 : {

        displayBestRecord(count, year,country, gold, sliver, bronze);
        break;
    }
     

}
   
 system("pause");
    return 0;


 }

   

