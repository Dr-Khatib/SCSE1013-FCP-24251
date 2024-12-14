#include <iostream>
#include <iomanip>
using namespace std;

const int countryNum = 5;
const int medalType  = 3;
const int yearsmax   = 10000;
//menu
void records       (int [][countryNum][medalType], int [], int&);
void medaltable    (int [][countryNum][medalType], int [], int);
void specifictable (int [][countryNum][medalType], int [], int);
//question
int country3       (int [][countryNum][medalType], int , int);
int largestNumber  (int [][countryNum][medalType], int , int);
int smallestNumber (int [][countryNum][medalType], int , int);
int highestGold    (int [][countryNum][medalType], int , int);
int totalbronze    (int [][countryNum][medalType], int , int);
//summary of all year
void summary(int [][countryNum][medalType], int [], int );

int main(){

  int record[yearsmax][countryNum][medalType] = {0};
  int years[yearsmax]                         = {0};
  int yearCount                               =  0;
  int choice;

  cout << setw(85) << "Welcome to this program, this program will help you to store country medal\n";

  for(int i = 0; i < 25; i++)  cout << "----" ; cout << endl;
  // main menu
  do{
  cout << "        Menu\n";
  cout << "1. Record Medal Data\n";
  cout << "2. Display All Years Medal Data\n";
  cout << "3. Display Specific Year Data\n";
  cout << "4. Summary of all year\n";
  cout << "5. Exit\n";

  cout << "Enter Your Choice: "; cin  >> choice;
  cout << endl;

  switch(choice){
      case 1:  records(record, years, yearCount); break;
      case 2:  medaltable(record, years, yearCount); break;  
      case 3:  specifictable(record, years, yearCount); break;
      case 4:  summary(record, years, yearCount)  ; break;
  }

  }while(choice != 5);

  cout << "Terminating program successfully see you next time!!\n";
  

  return 0;
}

void records(int record[][countryNum][medalType], int years[], int &yearcount){
    int useryear;
    int assignindex = -1;
    cout << "Enter year record: "; cin >> useryear;

    //check exist year
    bool exist = false;
    for (int i = 0; i < yearcount; i++){
        if(years[i] == useryear){
          exist = true;
          assignindex = i; // if the year exist reuse index to update value
          break;
        }
    }

    if(!exist){
        years[yearcount] = useryear;
        assignindex = yearcount;
        yearcount++;
    }
    
    else{
        cout << "Year " << useryear << " already exist, Enter 0 to continue updating " << useryear 
             << " or Enter 1 to terminating process\n";
        int option;
        cout << "Option: "; cin >> option;

        if ( option == 1){
            cout << "Terminating process...\n";
            return;
        }

        
    }

    for (int i = 0; i < countryNum ; i++){
        cout << "Medal Collection for Country " << (i + 1) << endl;
        for(int j = 0; j < medalType; j++){
            

            if      ( j == 0) { cout << "Gold: "  ; cin >> record[assignindex][i][j];}
            else if ( j == 1) { cout << "Silver: "; cin >> record[assignindex][i][j];}
            else if ( j == 2) { cout << "Bronze: "; cin >> record[assignindex][i][j];}
        }
    }
    cout << "Year " << useryear << " successfully recorded!!\n";
}

void medaltable (int record[][countryNum][medalType], int years[], int yearcount){
    cout << "Result:\n\n";
    int passvariable = 0;

    for (int i = 0; i < yearcount; i++){
        cout << "Year " << years[i] << endl;
        //track variable
        passvariable = i;
        for(int a = 0 ; a < 65 ; a++) cout << "-"; cout << endl;
        
        cout << "|"
             << setw (15) << left << "Country"<< "|"
             << setw (15) << left << "Gold"   << "|"
             << setw (15) << left << "Silver" << "|"
             << setw (15) << left << "Bronze" << "|" << endl;
        for(int a = 0 ; a < 65 ; a++) cout << "-"; cout << endl;


      for (int j = 0; j < countryNum; j++){
        cout << "|" << setw(8) << left << "Country"
                    << setw(7) << left << (j+1) << "|";
      
        for(int k = 0; k < medalType; k++){
          cout << setw(15) <<  left << record[i][j][k] << "|";
         

        }
        
        cout << endl;
      }
      for(int a = 0 ; a < 65 ; a++) cout << "-";
        cout << endl ;

      //function calculation call
      cout << "Summary:\n";
      cout << "--------------------\n";
      cout << "Question 1\n";
      cout << "--------------------\n";
      cout << "Calculating the total number of medals won by country 3...\n";
      cout << "Total medal won: " << country3(record, passvariable, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 2\n";
      cout << "--------------------\n";
      cout << "Largest number of medals won is " << largestNumber(record, passvariable, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 3\n";
      cout << "--------------------\n";
      cout << "Smallest number of medals won is " << smallestNumber(record, passvariable, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 4\n";
      cout << "--------------------\n";
      cout <<  highestGold(record, passvariable, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 5\n";
      cout << "--------------------\n";
      cout << "Calculating the total bronze medal won....\n";
      cout << "Total bronze medal: " << totalbronze(record, passvariable, yearcount) << endl;


    }  
}

void specifictable (int record[][countryNum][medalType], int years[], int yearcount){
    int year;
    cout << "Please specific Year: "; cin >> year;
    cout << "System processing...\n"; 
    bool exist = false;
    int index = -1;
// checking availability
    for (int i = 0; i < yearcount; i++){
      if( years[i] == year){
        exist = true;
        index = i;
        break;
      }     
    }
    if(!exist){
        cout << "Record Not Found!! Returning main menu....\n";
        return;
      }

//continue

    cout << "Result:\n" << "Year " << year << endl;
    for(int a = 0 ; a < 65 ; a++) cout << "-"; cout << endl;
    cout << "|"
         << setw (15) << left << "Country"<< "|"
         << setw (15) << left << "Gold"   << "|"
         << setw (15) << left << "Silver" << "|"
         << setw (15) << left << "Bronze" << "|" << endl;
    for(int a = 0 ; a < 65 ; a++) cout << "-"; cout << endl;
    for (int i = 0; i < countryNum; i++){
       cout << "|" << setw(8) << left << "Country"
                   << setw(7) << left << (i+1) << "|";
        for (int j = 0; j < medalType; j++){
          cout << setw(15) <<  left << record[index][i][j] << "|";
        }
        cout << endl;
    }
    for(int a = 0 ; a < 65 ; a++) cout << "-"; cout << endl;
    //gap
          //function calculation call
      cout << "Summary:\n";
      cout << "--------------------\n";
      cout << "Question 1\n";
      cout << "--------------------\n";
      cout << "Calculating the total number of medals won by country 3...\n";
      cout << "Total medal won: " << country3(record, index, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 2\n";
      cout << "--------------------\n";
      cout << "Largest number of medals won is " << largestNumber(record, index, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 3\n";
      cout << "--------------------\n";
      cout << "Smallest number of medals won is " << smallestNumber(record, index, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 4\n";
      cout << "--------------------\n";
      cout <<  highestGold(record, index, yearcount) << endl;
      cout << "--------------------\n";
      cout << "Question 5\n";
      cout << "--------------------\n";
      cout << "Calculating the total bronze medal won....\n";
      cout << "Total bronze medal: " << totalbronze(record, index, yearcount) << endl;

    //gap
    cin.ignore(); // clear previous input make sure code can reuse 

}

int country3       (int record[][countryNum][medalType], int passvariable, int yearcount){ //ok using passvariable to track the specific year
    int totalC3 = 0;
    
  

    //calculating
    

      for(int j = 0; j < medalType; j++){
        totalC3 += record[passvariable][2][j];
      }
    

      return totalC3;

}

int largestNumber  (int record[][countryNum][medalType], int passvariable, int yearcount){ //ok
    int largest = 0;

    
      for(int j = 0; j< countryNum; j++){
        for (int k = 0; k < medalType; k++){
          if( record[passvariable][j][k] > largest){
            largest = record[passvariable][j][k];
          }
        }
      }
    
    return largest;
}

int smallestNumber (int record[][countryNum][medalType], int passvariable, int yearcount){
    int smallest = 1000000000; // impossible number make sure comparison work

    
      for(int j = 0; j< countryNum; j++){
        for (int k = 0; k < medalType; k++){
          if( record[passvariable][j][k] < smallest){
            smallest = record[passvariable][j][k];
          }
        }
      }
    
    return smallest;
}

int highestGold    (int record[][countryNum][medalType], int passvariable, int yearcount){//ok
    int highest = 0;
    int trackindex = 0;

    
      for(int j = 0; j< countryNum; j++){
        if( record[passvariable][j][0] > highest){
          highest = record[passvariable][j][0];
          trackindex = j;
        }
        
      }
    

    cout << "The highest medal gold is won by country " << (trackindex + 1) << endl;
    cout << "Highes Gold: ";
    return highest;
}

int totalbronze    (int record[][countryNum][medalType], int passvariable , int yearcount){//ok
    int sum = 0;

    for(int i = 0; i < countryNum; i++){
      sum+= record[passvariable][i][2];
    }

    return sum;
}
//summary
void summary(int record[][countryNum][medalType], int years[], int yearcount) {
    int totalMedalsCountry3 = 0;

    int largestMedal = 0, countryLargest = -1;

    int smallestMedal = 1000000000, countrySmallest = -1;

    int maxGold = 0, countryWithMostGold = -1;

    int totalBronzeMedals = 0;

    //use array
    for (int y = 0; y < yearcount; y++) {
        for (int c = 0; c < countryNum; c++) {
            int totalMedalsForCountry = 0;

            for (int m = 0; m < medalType; m++) {
                totalMedalsForCountry += record[y][c][m];
                if (m == 0) { // Gold medals
                    if (record[y][c][m] > maxGold) {
                        maxGold = record[y][c][m];
                        countryWithMostGold = c + 1;
                    }
                }
                if (m == 2) { // Bronze medals
                    totalBronzeMedals += record[y][c][m];
                }
            }

            // total medals for Country 3
            if (c == 2) {
                totalMedalsCountry3 += totalMedalsForCountry;
            }

            // largest medal
            if (totalMedalsForCountry > largestMedal) {
                largestMedal = totalMedalsForCountry;
                countryLargest = c + 1;
            }

            //smallest medal count
            if (totalMedalsForCountry < smallestMedal) {
                smallestMedal = totalMedalsForCountry;
                countrySmallest = c + 1;
            }
        }
    }

    //summary
    cout << "\nSummary of All Years:\n";
    for (int i = 0; i < 65; i++) cout << "-"; cout << endl;

    cout << "1. Total medals won by Country 3: " << totalMedalsCountry3 << endl;
    cout << "2. Largest number of medals won: " << largestMedal 
         << " by Country " << countryLargest << endl;
    cout << "3. Smallest number of medals won: " << smallestMedal 
         << " by Country " << countrySmallest << endl;
    cout << "4. Country with the highest gold medals: Country " << countryWithMostGold 
         << " with " << maxGold << " gold medals." << endl;
    cout << "5. Total bronze medals across all years: " << totalBronzeMedals << endl;

    for (int i = 0; i < 65; i++) cout << "-"; cout << endl;
}



