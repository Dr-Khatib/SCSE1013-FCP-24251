#include <iostream>
#include <iomanip>
using namespace std;

const int countryNum = 5;
const int medalType =3;

void readmedal(int[][medalType]);
void medaltable(int [][medalType]);

int country3(int [][medalType]);
int largestNumber(int [][medalType]);
int smallestNumber(int [][medalType]);
int highestGold(int [][medalType]);
int totalbronze(int [][medalType]);

int main(){
  
  int medalNum[countryNum][medalType];

  cout << setw(85) << "Welcome to this program, this program will help you to store country medal\n";

  for(int i = 0; i <25; i++){
    cout << "----";
  }
  cout << endl;
// calling function read medal
  readmedal(medalNum);
// calling function table
  medaltable(medalNum);

  cout << "--------------------\n";
  cout << "Question 1\n";
  cout << "--------------------\n";
  cout << "Calculating the total number of medals won by country 3...\n";
  cout << "Total medal won: " << country3(medalNum) << endl;
  cout << "--------------------\n";
  cout << "Question 2\n";
  cout << "--------------------\n";
  cout << "Largest number of medals won is " << largestNumber(medalNum) << endl;
  cout << "--------------------\n";
  cout << "Question 3\n";
  cout << "--------------------\n";
  cout << "Smallest number of medals won is " << smallestNumber(medalNum) << endl;
  cout << "--------------------\n";
  cout << "Question 4\n";
  cout << "--------------------\n";
  cout <<  highestGold(medalNum) << endl;
  cout << "--------------------\n";
  cout << "Question 5\n";
  cout << "--------------------\n";
  cout << "Calculating the total bronze medal won....\n";
  cout << "Total bronze medal: " << totalbronze(medalNum) << endl;

  
  


  return 0;
}


void medaltable(int x [][medalType]){
    cout << "OUTPUT:\n";

    for(int i = 0 ; i < 65 ; i++) cout << "-";
    cout << endl;

    cout << "|"
         << setw (15) << left << "Country" << "|"
         << setw (15) << left << "Gold" << "|"
         << setw (15) << left << "Silver" << "|"
         << setw (15) << left << "Bronze" << "|" << endl;

     for(int i = 0 ; i < 65 ; i++) cout << "-";
     cout << endl;

     //format array

     for (int i = 0; i < countryNum; i++){
        cout << "|" << setw(8) << left << "Country"
                    << setw(7) << left << (i+1) << "|";
          for(int j = 0; j < medalType; j++){
            cout << setw(15) <<  left << x[i][j] << "|";
            
          }
          cout << endl;
     }

     for(int i = 0 ; i < 65 ; i++) cout << "-";
     cout << endl;

    
    
}
//function read medal from each country

void readmedal(int x [][medalType]){
    for(int i = 0; i < countryNum ; i++){
          cout << "The Number of Medal Collection for Country " << (i+1) << endl;
        for (int j = 0; j < medalType ; j++){
         
         if(j == 0){
          cout << "Gold  : ";
          cin  >> x [i][j];
         }
         else if( j == 1){
          cout << "Silver: ";
          cin >> x[i][j];
         }
          else if (j == 2){
            cout << "Bronze: ";
            cin >> x[i][j];
          }

      }
    }
}

//function calculating total medal won by country 3

int country3(int x[][medalType]){
  int totalC3 = 0;
    for (int i = 0 ; i < medalType ; i++){
      totalC3 += x[2][i];

    }

  return totalC3;
}

//determine largest number function
int largestNumber(int x[][medalType]){
    int largest = x[0][0];
    int numcountry = 0;
    int typemedal = 0;
    string name;

    for (int i = 0 ; i < countryNum; i++){
      for(int j = 0 ; j < medalType ; j++){
        if (x[i][j] > largest){
        largest = x[i][j];
        numcountry = i;
        typemedal = j;
        }
      }
    }
    if(typemedal == 0) name = "Gold";
    else if(typemedal == 1) name = "Silver";
    else if(typemedal == 2) name = "Bronze";
    
    cout << "Country " << (numcountry + 1) << "\n";
    cout << "Type of medal: " << name << "\n";
    cout << "Total medals: ";
    return largest;
}
//determine smallest number function

int smallestNumber(int x[][medalType]){
    int smallest = x[0][0];
    int numcountry = 0;
    int typemedal = 0;
    string name;

    for (int i = 0 ; i < countryNum; i++){
      for(int j = 0 ; j < medalType ; j++){
        if (x[i][j] < smallest){
        smallest = x[i][j];
        numcountry = i;
        typemedal = j;
        }
      }
    }

    if(typemedal == 0) name = "Gold";
    else if(typemedal == 1) name = "Silver";
    else if(typemedal == 2) name = "Bronze";
    
    cout << "Country " << (numcountry + 1) << "\n";
    cout << "Type of medal: " << name << "\n";
    cout << "Total medals: ";
    return smallest;
}

int highestGold(int x[][medalType]){
    int high = x[0][0];
    int num = 0;
    for (int i = 0; i < countryNum; i++){
        if(x[i][0] > high){
          high = x[i][0];
          num = i;
        }
    }

    cout << "The highest medal gold is won by country " << (num + 1) << endl;
    cout << "Total Gold: " ;
    return high;
}

int totalbronze(int x[][medalType]){

    int sum = 0;

    for (int i = 0; i < countryNum ; i++){

        sum+= x[i][2];
    }

    return sum;
}

