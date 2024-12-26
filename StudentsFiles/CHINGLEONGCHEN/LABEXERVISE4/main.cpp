#include <iostream>
using namespace std ;


void readdata(int &year, int &country_count, string country[], int medal[][3], char &n);

string findHighestMedalType(int yearcount, int country_count[], int medal[10][10][3]) ;
string findLowestMedalType(int yearcount, int country_count[], int medal[10][10][3]);
int findHighestGoldMedal(int yearcount, int country_count[], int medal[10][10][3]);
int findTotalBronzeMedals(int yearcount, int country_count[], int medal[10][10][3]);




int main (){

int country_count[10] ,i=0 ,year[3],medal[3][3][3],yearcount=0;
string country[3][3];
char n='Y' ;



while (n=='Y'){     
    
     readdata(year[yearcount], country_count[yearcount], country[yearcount], medal[yearcount], n);                  // this while loop ask user to input new year , new country and new medal , create whole new table

    yearcount++;
   

  }
  


cout << "\nStored Data:\n";
    for (int i = 0; i < yearcount; i++) {
        cout << "Year: " << year[i] << endl;

        for (int j = 0; j < country_count[i]; j++) {
            cout << "  Country: " << country[i][j]
                 << " - Gold: " << medal[i][j][0]
                 << ", Silver: " << medal[i][j][1]
                 << ", Bronze: " << medal[i][j][2] << endl;
        }
    }







system ("pause");
return 0 ;

}


void readdata(int &year, int &country_count, string country[], int medal[][3], char &n){

cout << "Create a year:";
    cin >> year;

    cout << "How many country you want to insert :";
    cin >> country_count;

    for (int j = 0 ; j <country_count; j++){

    cout<<"Country"<<j+1<<":";
    cin>>country[j];

    }

    cout << "Enter the medal for each country with the following order (Gold Sliver Bronze):";

    for (int k = 0 ; k<country_count ; k++ ){

        cout << country[k]<<":";

        for (int m = 0 ; m<3 ; m++){
       
        cin>>medal[k][m];

        }


    }


   cout << "Want to enter another year ? (Y/N):";
   cin >> n;



};


string findHighestMedalType(int yearcount, int country_count[], int medal[10][10][3]) {
    int total_gold = 0, total_silver = 0, total_bronze = 0;

    // Summing up medal totals across all years and countries
    for (int i = 0; i < yearcount; i++) {
        for (int j = 0; j < country_count[i]; j++) {
            total_gold += medal[i][j][0];
            total_silver += medal[i][j][1];
            total_bronze += medal[i][j][2];
        }
    }

    // Determine which medal has the highest total
    if (total_gold >= total_silver && total_gold >= total_bronze) {
        return "Gold";
    } else if (total_silver >= total_gold && total_silver >= total_bronze) {
        return "Silver";
    } else {
        return "Bronze";
    }
}

string findLowestMedalType(int yearcount, int country_count[], int medal[10][10][3]) {
    int total_gold = 0, total_silver = 0, total_bronze = 0;

    // Summing up medal totals across all years and countries
    for (int i = 0; i < yearcount; i++) {
        for (int j = 0; j < country_count[i]; j++) {
            total_gold += medal[i][j][0];
            total_silver += medal[i][j][1];
            total_bronze += medal[i][j][2];
        }
    }

    // Determine which medal has the lowest total
    if (total_gold <= total_silver && total_gold <= total_bronze) {
        return "Gold";
    } else if (total_silver <= total_gold && total_silver <= total_bronze) {
        return "Silver";
    } else {
        return "Bronze";
    }
}

int findHighestGoldMedal(int yearcount, int country_count[], int medal[10][10][3]) {

    int highest_gold = 0;

    // Iterate through all years and countries to find the maximum gold medals
    for (int i = 0; i < yearcount; i++) {
        for (int j = 0; j < country_count[i]; j++) {
            if (medal[i][j][0] > highest_gold) {
                highest_gold = medal[i][j][0];
            }
        }
    }

    return highest_gold;
}

int findTotalBronzeMedals(int yearcount, int country_count[], int medal[10][10][3]) {
    int total_bronze = 0;

    // Iterate through all years and countries to sum up bronze medals
    for (int i = 0; i < yearcount; i++) {
        for (int j = 0; j < country_count[i]; j++) {
            total_bronze += medal[i][j][2];
        }
    }

    return total_bronze;
}

