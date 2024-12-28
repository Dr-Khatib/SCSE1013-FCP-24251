#include<iostream>
using namespace std;

void read_4C_GSB_Medal(int arr[4][3]);

int countryNo();
int CountryTotalMedal(int arr[4][3] , int);
void CountryWMaxMedal(int arr[4][3]);
void CountryWMinMedal(int arr[4][3]);

int MedalType();
void SpcfMTypeMax(int arr[4][3] , int);
void SpcfMTypeTotal(int arr[4][3] , int);


int main()
{
 int medals[4][3];
 
 read_4C_GSB_Medal(medals);
 
 while(true){
    int choice;
    cout<<"\n-----------------------------------------------------"<<endl;
    cout<<"Available views are:"<<endl;
    cout<<"1. Total medals won by specific Country."<<endl;
    cout<<"2. Largest number of medals won."<<endl;
    cout<<"3. Smallest number of medals won."<<endl;
    cout<<"4. Highest number of medal won in specific type."<<endl;
    cout<<"5. Total number of medal won in specific type."<<endl;
    cout<<"Press any other key to end program."<<endl<<endl;
    cout<<"Enter view choice number: ";
    cin>>choice;
    cout<<endl;
    
    if (choice==1) {
        int countryIndex = countryNo();
        cout<<"Total medals won by Country "<< countryIndex << ": "<< CountryTotalMedal(medals , countryIndex);
    }
    else if (choice==2) CountryWMaxMedal(medals);
    else if (choice==3) CountryWMinMedal(medals);
    else if (choice==4){
        int type = MedalType();
        SpcfMTypeMax(medals , type);
    }
    else if (choice==5){
        int type = MedalType();
        SpcfMTypeTotal(medals , type);
    }
    else break;
    }
}



void read_4C_GSB_Medal(int arr[4][3]){
    cout<<"----------------------------------------------------------------------------\n";
    cout<<"----------------------------------------------------------------------------\n";
    cout << "**Please enter the medal counts (Gold, Silver, Bronze) for 4 countries.**" << endl;
    for(int i = 0 ; i<4 ; i++){
        cout<<"Country "<<i+1<<": ";
        for(int j=0 ; j<3 ; j++){
            cin >> arr[i][j];
        }
    }
}


// country section 

    int countryNo(){
        cout << "Enter Country number: ";
        int choice;
        cin >> choice;
        return choice;
    }

    int CountryTotalMedal(int arr[4][3] , int countryNoChoice) {
        if (countryNoChoice < 1 || countryNoChoice > 4) {
            cout << "Invalid country number!" << endl;
            return 0;
        }

        int countryTotal = 0;
        for (int j = 0; j < 3; j++) {
            countryTotal += arr[countryNoChoice - 1][j];
        }
        return countryTotal;
    }

    void CountryWMaxMedal(int arr[4][3]){
        int maxMedals = 0 ;
        int CountryWithMax = 0 ;
        for(int i = 0 ; i<4 ; i++){
            int countryTotal = CountryTotalMedal(arr , i+1);
            if (countryTotal>maxMedals){ 
                maxMedals = countryTotal;
                CountryWithMax = i + 1;
            }
        }
        cout<<"Country "<<CountryWithMax<<" has most medals with a total of "<<maxMedals<<" medals."<<endl;
    }

    void CountryWMinMedal(int arr[4][3]){
        int minMedals = INT_MAX ;
        int CountryWithMin = 0 ;
        for(int i = 0 ; i<4 ; i++){
            int countryTotal = CountryTotalMedal(arr , i+1);
            if (countryTotal<minMedals){ 
                minMedals = countryTotal;
                CountryWithMin = i + 1;
            }
        }
        cout<<"Country "<<CountryWithMin<<" has least medals with a total of "<<minMedals<<" medals."<<endl;
    }


//Medal section

    int MedalType(){
        cout << "Please enter the following reserved option number(1/2/3) for choosing Medal type."<<endl;
        cout<<"(Gold = 1, Silver = 2, Bronze = 3)"<<endl;
        cout<<"Enter option number: ";
        int choice;
        cin >> choice;
        return choice;
    }

    void SpcfMTypeMax(int arr[4][3] , int typeChoice){
        if (typeChoice < 1 || typeChoice > 3) {
            cout << "Invalid country number!" << endl;
        }
        
        int maxSType = 0 ;
        int CountryWithMax = 0 ;
        for(int i = 0 ; i<4 ; i++){
            if (arr[i][typeChoice-1]>maxSType){ 
                maxSType = arr[i][typeChoice-1];
                CountryWithMax = i + 1;
            }
        }
        if(typeChoice==1) cout<<"Country "<<CountryWithMax<<" has most Gold medals with a total of "<<maxSType<<" medals."<<endl;
        else if (typeChoice==2) cout<<"Country "<<CountryWithMax<<" has most Silver medals with a total of "<<maxSType<<" medals."<<endl;
        else cout<<"Country "<<CountryWithMax<<" has most Bronze medals with a total of "<<maxSType<<" medals."<<endl;

    }

    void SpcfMTypeTotal(int arr[4][3] , int typeChoice){
        if (typeChoice < 1 || typeChoice > 3) {
            cout << "Invalid country number!" << endl;
        }
        
        int totalSType = 0 ;
        for(int i = 0 ; i<4 ; i++){
            totalSType += arr[i][typeChoice-1];
        }
        if(typeChoice==1) cout<<"Total "<<totalSType<<" Gold medals won."<<endl;
        else if(typeChoice==2) cout<<"Total "<<totalSType<<" Silver medals won."<<endl;
        else cout<<"Total "<<totalSType<<" Bronze medals won."<<endl;
    }