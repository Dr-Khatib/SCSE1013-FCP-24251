#include <iostream>
using namespace std;

int totalmedalsfunc (int , int medal [][3] );
int medalcomparebig(int totalmedal[5]);
int medalcomparesmall(int totalmedal[5]);
int goldcompare(int , int medal[][3]);
int totalbytypes(int , int medal[][3]);

const int rows = 5, cols = 3;
const int gold = 0, silver = 1, bronze = 2;

int main(){

    int totalmedal[5] = {};
    int medal[rows][cols];
    //medal input
    for (int i = 0; i < rows; i++){
        cout << "Country " << i + 1 << ": \n";
        for (int j = 0; j < cols; j++){
            if (j == 0) cout << "Gold: ";
            else if (j == 1) cout << "Silver: ";
            else if (j == 2) cout << "Bronze: ";
            cin >> medal [i][j];
        }
    }
    //total medals for each country
    for (int i = 0; i < rows; i++){
        totalmedal[i] = totalmedalsfunc(i , medal);
    }
    
    //output
    cout << "Total medals for Country 3 is: " << totalmedal[2] << endl;
    int biggest = medalcomparebig(totalmedal);
    cout << "Largest number medals won by a country: " << biggest << endl;
    int smallest = medalcomparesmall(totalmedal);
    cout << "Smallest number medals won by a country: " << smallest << endl;
    int goldhighest = goldcompare(gold, medal);
    cout << "Highest number gold medals won by a country: " << goldhighest << endl;
    int bronzetotal = totalbytypes(bronze, medal);
    cout << "Total medals for bronze is: " << bronzetotal << endl;
}

int totalmedalsfunc (int a, int medal[][cols]){
    return medal[a][0] + medal[a][1] + medal [a][2];
}

int medalcomparebig (int totalmedal[5]){
    int biggesttotal = 0;
    for (int i = 0; i < 5; i++){
        if (totalmedal[i] >= biggesttotal) biggesttotal = totalmedal[i];
    }
    return biggesttotal;
}

int medalcomparesmall (int totalmedal[5]){
    int smallesttotal =  totalmedal[0];
    for (int i = 1; i < 5; i++){
        if (totalmedal[i] <= smallesttotal) smallesttotal = totalmedal[i];
    }
    return smallesttotal;
}

int goldcompare (int a, int medal[][cols]){
    int highestgold = 0;
    for (int i = 0; i < 5; i++){
        if (medal[i][a] >= highestgold) highestgold = medal[i][a];
    }
    return highestgold;
}

int totalbytypes(int a, int medal[][cols]){
    return medal[0][a] + medal[1][a] + medal[2][a] + medal[3][a] + medal[4][a];
}