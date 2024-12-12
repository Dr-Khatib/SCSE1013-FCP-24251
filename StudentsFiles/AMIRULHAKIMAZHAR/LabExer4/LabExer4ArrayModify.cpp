#include <iostream>
using namespace std;

//function prototype
void dispMedals(int[][3][3]);
int wonCountry3(int[][3][3]); 
int largestMedal(int [][3][3]);
int smallestMedal(int[][3][3]);
int goldMedalWon(int[][3][3]);
int bronzeMedalWon(int[][3][3]);
void bestRecord(int[][3][3]);


int main()
{
    //variable declaration
    int i;
    int j;
    int max = 4;
    int country;
    int year;

    int choice;
    int med;
    int gold [max] = {};
    int silver [max] = {};
    int bronze [max] = {};

    const int maxMedals = 3;
    const int maxYear = 3;
    const int maxCountry = 4;
    
    // 3d array
    int medal [maxCountry][maxYear][maxMedals] = {
        {{0,0,0}, {0,0,0}, {0,0,0}},
        {{0,0,0}, {0,0,0}, {0,0,0}},
        {{0,0,0}, {0,0,0}, {0,0,0}},
        {{0,0,0}, {0,0,0}, {0,0,0}},
    };

    for (i = 0; i < 4; i++){       
        for (j = 0; j < 3; j++){
            if (j == 0)
                cout << "\nFor year 2002: ";
            else if (j == 1)
                cout << "\nFor year 2006: ";
            else
                cout << "\nFor year 2010: ";
        
            cout << "\nCountry " << i + 1 << endl;

            cout << "Please enter number of gold medals: ";
            cin >> med;
             medal [i][j][0] = med;

            cout << "Please enter number of silver medals: ";
            cin >> med;
            medal [i][j][1] = med;

            cout << "Please enter number of bronze medals: ";
            cin >> med;
            medal [i][j][2] = med;
        }
    }

    //function calls
    //each country medal display
    dispMedals(medal);

    //medals won by country 3
    int result = wonCountry3(medal);
    cout << "\nNumber of medals obtained by country 3 is: " << result;

    //largest number of medal won
    int largest = largestMedal(medal);
    cout << "\nHighest number of medal won by a country is: " << largest;

    //smallest medal won
    int smallest = smallestMedal(medal);
    cout << "\nSmallest number of medal won by a country is: " << smallest;

    //largest gold medal won
    int largestGold = goldMedalWon(medal);
    cout << "\nHighest number of gold medal won is: " << largestGold;

    //total bronze won
    int totalBronze = bronzeMedalWon(medal);
    cout << "\nTotal number of bronze medal won is: " << totalBronze << endl;

    //display best record
    bestRecord(medal);
 
    return 0;
}

//function definition
//display all countries' medals
void dispMedals(int medal[][3][3]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (j == 0)
                cout << "\n For year 2002: ";
            else if (j == 1)
                cout << "\n For year 2006: ";
            else if (j == 2)
                cout << "\n For year 2010: ";

            cout << "\nCountry " << i + 1 << " recieved: \n";
            cout << medal[i][j][0] << " gold medals, ";
            cout << medal[i][j][1] << " silver medals, ";
            cout << "and " << medal[i][j][2] << " bronze medals! \n";
        }
    }
}

//total medal of country 3
int wonCountry3(int medal[][3][3]){
    int result = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            result = result + medal[i][j][0] + medal[i][j][1] + medal[i][j][2];
        }
    }
    return result;
}

//largestnumber of medals won
int largestMedal(int medal[][3][3]){
    int largest = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if (medal[i][j][k] > largest)
                    largest = medal[i][j][k];
            }
        }
    }
    return largest;
}

//smallest number of medals won
int smallestMedal(int medal[][3][3]){
    int smallest = medal[0][0][0];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if (medal[i][j][k] < smallest)
                    smallest = medal[i][j][k];
            }
        }
    }
    return smallest;
}

//largest number of gold medal a country won
int goldMedalWon(int medal[][3][3]){
    int largestGold = medal[0][0][0];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (medal [i][j][0] > largestGold)
                largestGold = medal[i][j][0];
        }
    }
    return largestGold;
}

// total number of bronze won
int bronzeMedalWon(int medal[][3][3]){
    int totalBronze = medal[0][0][2];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            totalBronze = totalBronze + medal[i][j][2];
        }
    }
    return totalBronze;
}

//dispaly best record
void bestRecord(int medal[][3][3]){
    int i = 0, j = 0, k = 0;
    int highestGold = 0, bestYear = 0, year = 0;
    int totalMedal = 0, bestCountry = 0;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            if (medal[i][j][0] > highestGold){
                highestGold = medal[i][j][0];
                bestCountry = i;
                bestYear = j;
            }
        }
        totalMedal = medal[bestCountry][bestYear][0] + medal[bestCountry][bestYear][1] + medal[bestCountry][bestYear][2]; 

        if (bestYear == 0)
            year = 2002;
        else if (bestYear == 1)
            year = 2006;
        else
            year = 2010;

        cout << "\nThe best record held by Country " << i + 1 << " in " << year;
        cout << " which holds:\n"; 
        cout << medal[bestCountry][bestYear][0] << " gold medals\n";
        cout << medal[bestCountry][bestYear][1] << " silver medals\n";
        cout << medal[bestCountry][bestYear][2] << " bronze medals\n";
        cout << "With the total of " << totalMedal << " medals.\n";
    }
    cout << "\n\n";
}
