#include <iostream>
#include <iomanip>
using namespace std;


const int typeMedal = 3;
const int maxCountry = 100;
int country[maxCountry][typeMedal];

void readMedal (int country[][typeMedal],int &numCountry);
int totalMedalCountry3 (int country[][typeMedal]);
int largestMedal (int country[][typeMedal],int numCountry);
int smallestMedal(int country[][typeMedal],int numCountry);
int highestGold (int country[][typeMedal],int numCountry);
int totalBronze (int country[][typeMedal],int numCountry);
void tableMedal (int country[][typeMedal],int numCountry);

int main(){
    int numCountry =0;
    readMedal(country,numCountry);
    tableMedal(country,numCountry);
    cout << "The total number of medals won by country3 : " << totalMedalCountry3(country)<< endl;
    cout << "The largest number of medal won            : " << largestMedal(country,numCountry)<< endl;
    cout << "The smallest number of medal won           : " << smallestMedal(country,numCountry) << endl;
    cout << "The highest number of gold medal won       : " << highestGold(country,numCountry) << endl;
    cout << "The total number of bronze medal won       : " << totalBronze(country,numCountry) << endl;
    
    return 0;
}

void readMedal(int country[][typeMedal],int &numCountry){
    cout << "Please enter the number of country :";
    cin >> numCountry;

    for (int i = 0;i <numCountry;i++){
        cout << "Please enter the number of each medal for country " << i + 1 << " :";
        cin >> country[i][0] >> country[i][1] >> country[i][2];
    }
}

int totalMedalCountry3 (int country[][typeMedal]){
    int total=0;
    
        total += country[2][0] + country[2][1] + country[2][2];
    
    return total;
}

int largestMedal(int country[][typeMedal],int numCountry){
    int largest = country[0][0];
    for (int i =0;i<numCountry; i++){
        for(int j=0;j<3;j++){
            if(country[i][j]>largest){
                largest = country[i][j];
            }

        }
    }
    return largest;
}

int smallestMedal(int country[][typeMedal],int numCountry){
    int smallest = country[0][0];
    for (int i =0;i<numCountry; i++){
        for(int j=0;j<3;j++){
            if(country[i][j]<smallest){
                smallest = country[i][j];
            }

        }
    }
    return  smallest;
}

int highestGold (int country[][typeMedal],int numCountry){
    int HighGold = country[0][0];
    for(int i=0;i<numCountry;i++){
        if(country[i][0]> HighGold){
            HighGold = country[i][0];
        }

    }
    return HighGold;
}

int totalBronze (int country[][typeMedal],int numCountry){
    int totalBronze=0;
    for(int i=0;i<numCountry;i++){
        totalBronze += country[i][2];
    }
    return totalBronze;
}

void tableMedal (int country[][typeMedal],int numCountry){
    cout << setw(15) << left << "Country"
         << setw(10) << "Gold" 
         << setw(10) << "Silver" 
         << setw(10) << "Bronze" << endl;
    cout << string(40, '-') << endl;

    for(int i=0;i<numCountry;i++){
        cout << left << setw(15) << ("Country" + to_string(i + 1)) 
             << setw(12) << country[i][0] 
             << setw(12) << country[i][1] 
             << setw(12) << country[i][2] << endl;
    }
    cout << "\n\n";
}




