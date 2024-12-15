#include <iostream>
using namespace std;

const int country = 5, meds = 3, year = 3;
const int gold = 0, silver = 1, bronze = 2;

int totalmedalsfunc (int , int , int medal[][meds][year]);
int medalcomparebig(int totalmedal[country][year]);
int medalcomparesmall(int totalmedal[country][year]);
int goldcompare(int , int medal[][meds][year], int &, int &);
int totalbytypes(int , int medal[][meds][year]);
void bestrecord(int , int, int medal[][meds][year]);

int main(){
    int countryrecord[country] = {};
    int totalmedal[country][year] = {};
    int medal[country][meds][year];
    int bestyear = 0;
    int bestcountry = 0;
    //medal input
    for (int k = 0; k < year; k++){
        cout << "Year: " << 2024 - k << endl;
        for (int i = 0; i < country; i++){
            cout << "Country " << i + 1 << ": \n";
            for (int j = 0; j < meds; j++){
                if (j == 0) cout << "Gold: ";
                else if (j == 1) cout << "Silver: ";
                else if (j == 2) cout << "Bronze: ";
                cin >> medal [i][j][k];
            }
        }
    }
    //total medals for each country
    for (int k = 0; k < year; k++){
        for (int j = 0; j < country; j++){
            totalmedal[j][k] = totalmedalsfunc(j , k, medal);
        }
    }
    
    //output
    for (int i = 0; i < country; i++){
        for (int k = 0; k < year; k++){
            countryrecord[i] += totalmedal[i][k]; 
        }
    }

    cout << "Total medals for Country 3 is: " << countryrecord[2] << endl;
    int biggest = medalcomparebig(totalmedal);
    cout << "Largest number medals won by a country: " << biggest << endl;
    int smallest = medalcomparesmall(totalmedal);
    cout << "Smallest number medals won by a country: " << smallest << endl;
    int goldhighest = goldcompare(gold, medal, bestyear , bestcountry);
    cout << "Highest number gold medals won by a country: " << goldhighest << endl;
    int bronzetotal = totalbytypes(bronze, medal);
    cout << "Total medals for bronze is: " << bronzetotal << endl;
    bestrecord(bestcountry, bestyear, medal);
}

int totalmedalsfunc (int a, int b, int medal[][meds][year]){
    return medal[a][0][b] + medal[a][1][b] + medal [a][2][b];
}

int medalcomparebig (int totalmedal[country][year]){
    int biggesttotal = 0;
    for (int k = 0; k < year; k++){
        for (int i = 0; i < country; i++){
            if (totalmedal[i][k] >= biggesttotal) biggesttotal = totalmedal[i][k];
        }
    }
    return biggesttotal;
}

int medalcomparesmall (int totalmedal[country][year]){
    int smallesttotal =  totalmedal[0][0];
    for (int k = 0; k < year; k++){
        for (int i = 1; i < country; i++){
            if (totalmedal[i][k] <= smallesttotal) smallesttotal = totalmedal[i][k];
        }
    }
    return smallesttotal;
}

int goldcompare (int a, int medal[][meds][year], int &c, int &y){
    int highestgold = 0;
    for (int k = 0; k < year; k++){
        for (int i = 0; i < country; i++){
            if (medal[i][a][k] >= highestgold){ 
                highestgold = medal[i][a][k];
                c = i;
                y = k;
            }
        }
    }
    return highestgold;
}

int totalbytypes(int a, int medal[][meds][year]){
    int totaltypes = 0;
    for (int k = 0; k < year; k++){
        for (int i = 0; i < country; i++){
            totaltypes += medal[i][a][k];
        }
    }
    return totaltypes;
}

void bestrecord(int c, int y, int medal[][meds][year]){
    cout << "Best Record (by highest gold):  \nYear: " << 2024 - y << endl;
    cout << "Country: " << c + 1 << endl;
    for (int j = 0; j < meds; j++){
        if (j == 0){ 
            cout << "Gold: ";
            cout << medal[c][j][y] << endl;
        }
        else if (j == 1) {
            cout << "Silver: ";
            cout << medal[c][j][y] << endl;
        }
        else if (j == 2) {
            cout << "Bronze: ";
            cout << medal[c][j][y] << endl;
        }
    }
} 