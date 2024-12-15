#include <iostream>
using namespace std;

//function prototype
void dispMedals(int[][3]);
int wonCountry3(int[][3]); 
int largestMedal(int[][3]);
int smallestMedal(int[][3]);
int goldMedalWon(int[][3]);
int bronzeMedalWon(int[][3]);

int main()
{
    //variable declaration
    int i;
    int max = 4;
    int country;

    int choice;
    int med;
    int gold [max] = {};
    int silver [max] = {};
    int bronze [max] = {};

    const int maxMedals = 3;
    const int maxCountry = 4;

    // 2d array
    int medal [maxCountry][maxMedals] = {
        {0,0,0},
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    for (i = 0; i < 4; i++)
    {
        cout << "\nCountry " << i + 1 << endl;

        cout << "Please enter number of gold medals: ";
        cin >> med;
        medal [i][0] = med;

        cout << "Please enter number of silver medals: ";
        cin >> med;
        medal [i][1] = med;

        cout << "Please enter number of bronze medals: ";
        cin >> med;
        medal [i][2] = med;
    }
    //function calls

    //each country medal display
    dispMedals(medal);
 
    //medals won by country 3
    int result = wonCountry3(medal);
    cout << "\nTotal medal won by Country 3 is : " << result;

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
    cout << "\nTotal number of bronze medal won is: " << totalBronze;

    return 0;
}

//function definition
void dispMedals(int medal[][3]){
    for (int i = 0; i < 4; i++){
        cout << "\nCountry " << i + 1 << " recieved: \n";
        cout << medal[i][0] << " gold medals, ";
        cout << medal[i][1] << " silver medals, ";
        cout << "and " << medal[i][2] << " bronze medals! \n";
    }
}

int wonCountry3(int medal[][3]){
    int result = medal[2][0] + medal[2][1] + medal[2][2];
    return result;
}

int largestMedal(int medal[][3]){
    int largest = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (medal[i][j] > largest)
                largest = medal[i][j];
        }
    }

    return largest;
}

int smallestMedal(int medal[][3]){
    int smallest = medal[0][0];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (medal[i][j] < smallest){
                smallest = medal[i][j];
            }
        }
    }

    return smallest;
}

int goldMedalWon(int medal[][3]){
    int largestGold = medal[0][0];
    for (int i = 0; i < 4; i++){
        if (medal[i][0] > largestGold){
            largestGold = medal[i][0];
        }
    }

    return largestGold;
}

int bronzeMedalWon(int medal[][3]){
    int totalBronze = medal[0][2] + medal[1][2] + medal[2][2] + medal[3][2];
    return totalBronze;
}
