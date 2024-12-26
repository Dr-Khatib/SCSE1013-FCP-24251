#include <iostream>
#include <iomanip>
using namespace std;

const int CountryNum = 5, MedalType = 3;

void dataCollect  (int [][MedalType]);
void medalTable   (int [][MedalType]);

int totalMedalC3  (int [][MedalType]);
int largestMedal  (int [][MedalType]);
int smallestMedal (int [][MedalType]);
int highestGold   (int [][MedalType]);
int totalBronze   (int [][MedalType]);

int main ()
{
	int MedalNum[CountryNum][MedalType];
	
	cout << "This is a program that stores the number of medal collection for 5 countries." 					 << endl << endl 
		 << "--------------------------------------------------------------------------------------------------" << endl << endl;
	
	dataCollect(MedalNum);

	medalTable(MedalNum);
	cout << "Total Number of Medal Won by Country 3 : " << totalMedalC3  (MedalNum) << endl;
	cout << "The Largest Number of Medals Won       : " << largestMedal  (MedalNum) << endl;
	cout << "The Smallest Number of Medals Won      : " << smallestMedal (MedalNum) << endl;
	cout << "The Highest Number of Gold Medal Won   : " << highestGold   (MedalNum) << endl;
	cout << "The Total Number of Bronze Medal Won   : " << totalBronze   (MedalNum) << endl;
	
	return 0;
}


void dataCollect (int MedalNum[][MedalType])
{
	for (int i = 0; i < CountryNum; i += 1)
	{
		cout << "The Number of Medal Collection for Country " << i + 1 << endl;
		
		for (int j = 0; j < MedalType; j += 1)
		{
			if (j == 0)      { cout << "Gold   = "; cin >> MedalNum[i][j];               }
			else if (j == 1) { cout << "Silver = "; cin >> MedalNum[i][j];               }
			else if (j == 2) { cout << "Bronze = "; cin >> MedalNum[i][j]; cout << endl; }
		}
	}
	
	cout << "--------------------------------------------------------------------------------------------------" << endl << endl;
}


void medalTable (int MedalNum[][MedalType])
{
	cout << "Result :"                                                          << endl
		 << "+---------------+---------------+---------------+---------------+" << endl
		 << "|"
		 << setw(15) << left << " "      << "|"
		 << setw(15) << left << "Gold" 	 << "|"
		 << setw(15) << left << "Silver" << "|"
		 << setw(15) << left << "Bronze" << "|"                                 << endl
		 << "+---------------+---------------+---------------+---------------+" << endl;
		 
	for (int i = 0; i < CountryNum; i += 1)
	{
		cout << "|" << setw(8) << left << "Country " 
		            << setw(7) << left << i + 1 << "|";
		
		for (int j = 0; j < MedalType; j += 1)
			cout << setw(15) << left << MedalNum[i][j] << "|";
			
		cout << endl;
	}
	
	cout << "+---------------+---------------+---------------+---------------+" << endl;
}


int totalMedalC3 (int MedalNum[][MedalType])
{
	int TotalMedalC3 = 0;
	
	for (int i = 0; i < MedalType; i += 1)
		TotalMedalC3 = TotalMedalC3 + MedalNum[2][i];
	
	return TotalMedalC3;
}


int largestMedal (int MedalNum[][MedalType])
{
	int LargestMedal = MedalNum[0][0];
	
	for (int i = 0; i < CountryNum; i += 1)
	{
		for (int j = 0; j < MedalType; j += 1)
		{
			if (MedalNum[i][j] >= LargestMedal) LargestMedal = MedalNum[i][j];
			else;
		}
	}
	
	return LargestMedal;
}


int smallestMedal (int MedalNum[][MedalType])
{
	int SmallestMedal = MedalNum[0][0];
	
	for (int i = 0; i < CountryNum; i += 1)
	{
		for (int j = 0; j < MedalType; j += 1)
		{
			if (MedalNum[i][j] <= SmallestMedal) SmallestMedal = MedalNum[i][j];
			else;
		}
	}
	
	return SmallestMedal;
}


int highestGold (int MedalNum[][MedalType])
{
	int HighestGold = MedalNum[0][0];
	
	for (int i = 0; i < CountryNum; i += 1)
	{
		if (MedalNum[i][0] >= HighestGold) HighestGold = MedalNum[i][0];
		else;
	}
	
	return HighestGold;
}


int totalBronze (int MedalNum[][MedalType])
{
	int totalBronze = 0;
	
	for (int i = 0; i < CountryNum; i += 1)
	{
		totalBronze += MedalNum[i][2];
	}
	
	return totalBronze;
}
