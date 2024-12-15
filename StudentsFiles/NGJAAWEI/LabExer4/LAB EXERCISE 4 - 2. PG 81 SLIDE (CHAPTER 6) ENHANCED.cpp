#include <iostream>
#include <iomanip>
using namespace std;

const int Year = 10000, CountryNum = 5, MedalType = 3;

void dataCollect  (int [][CountryNum][MedalType], int []);

void analysisCall (int [][CountryNum][MedalType], int [], char);
void medalTable   (int [][CountryNum][MedalType], int);

int totalMedalC3  (int [][CountryNum][MedalType], int);
int largestMedal  (int [][CountryNum][MedalType], int);
int smallestMedal (int [][CountryNum][MedalType], int);
int highestGold   (int [][CountryNum][MedalType], int);
int totalBronze   (int [][CountryNum][MedalType], int);

int main ()
{
	int MedalNum[Year][CountryNum][MedalType], 
	    RecordYear[Year], 
		AnalysisYear;
	char Action;
	
	cout << "This is a program that stores the number of medal collection for 5 countries." 					 << endl << endl
	     << "--------------------------------------------------------------------------------------------------" << endl << endl;
	
	dataCollect(MedalNum, RecordYear);
	
	do
	{
		cout << "Action (A = All Year Analysis / S = Specific Year Analysis / I = Input More Data / E - End) : "; cin >> Action;
		cout << endl << "--------------------------------------------------------------------------------------------------" << endl << endl;
		
		if      (Action == 'A' || Action == 'S') analysisCall(MedalNum, RecordYear, Action);
		else if (Action == 'I')                  dataCollect (MedalNum, RecordYear);                      
		else if (Action == 'E')                  break;                                      
		else                                     cout << "Invalid input. Please try again." 																  << endl << endl 
													  << "--------------------------------------------------------------------------------------------------" << endl << endl; 
	}
	while (Action != 'E');
	
	cout << "The program is end. Thank you." << endl;

	return 0;
}


void dataCollect (int MedalNum[][CountryNum][MedalType], int RecordYear[])
{
	int InYear;
	
	while (true)
	{
		cout << "Year of the Data (Enter 0 If Done Input All the Data) = "; cin >> InYear;
		cout << endl;
		
		if (InYear == 0) break;
		
		RecordYear[InYear] = 1;
		
		for (int j = 0; j < CountryNum; j += 1)
		{
			cout << "The Number of Medal Collection for Country " << j + 1 << endl;
		
			for (int k = 0; k < MedalType; k += 1)
			{
				if (k == 0)      { cout << "Gold   = "; cin >> MedalNum[InYear][j][k];               }
				else if (k == 1) { cout << "Silver = "; cin >> MedalNum[InYear][j][k];               }
				else if (k == 2) { cout << "Bronze = "; cin >> MedalNum[InYear][j][k]; cout << endl; }
			}
		}
		
		cout << endl;
	}
	
	cout << "--------------------------------------------------------------------------------------------------" << endl << endl;
}


void analysisCall (int MedalNum[][CountryNum][MedalType], int RecordYear[], char Action)
{
	if (Action == 'A')
	{
		cout << "<<<<<< Preparing all year analysis, please wait. >>>>>>" << endl << endl << endl;
		
		for (int i = 0; i < Year; i += 1)
		{
			if (RecordYear[i] == 0) continue;
			
			else
			{
				medalTable (MedalNum, i);
				cout << "Total Number of Medal Won by Country 3 : " << totalMedalC3  (MedalNum, i) << endl;
				cout << "The Largest Number of Medals Won       : " << largestMedal  (MedalNum, i) << endl;
				cout << "The Smallest Number of Medals Won      : " << smallestMedal (MedalNum, i) << endl;
				cout << "The Highest Number of Gold Medal Won   : " << highestGold   (MedalNum, i) << endl;
				cout << "The Total Number of Bronze Medal Won   : " << totalBronze   (MedalNum, i) << endl << endl;
			}
		}
		
		cout << "--------------------------------------------------------------------------------------------------" << endl << endl;
	}
	
	else if (Action == 'S')
	{
		int i = 1;
		
		while (i != 0)
		{
			cout << "Year Required Analysis (Enter 0 For Pick Other Action): "; cin >> i;
		
			if (i == 0)
			{
				cout << endl 
					 << "--------------------------------------------------------------------------------------------------" << endl << endl;
				return;
			}
		
			if (RecordYear[i] == 0) 
			{
				cout << endl << endl << "No record at year " << i << ". Please try again." 									 << endl << endl
					 << "--------------------------------------------------------------------------------------------------" << endl << endl;
				continue;
			}
			
			else
			{
				cout << endl << endl;
				medalTable (MedalNum, i);
				cout << "Total Number of Medal Won by Country 3 : " << totalMedalC3  (MedalNum, i) 						     << endl
					 << "The Largest Number of Medals Won       : " << largestMedal  (MedalNum, i) 							 << endl
					 << "The Smallest Number of Medals Won      : " << smallestMedal (MedalNum, i) 							 << endl
					 << "The Highest Number of Gold Medal Won   : " << highestGold   (MedalNum, i) 							 << endl
					 << "The Total Number of Bronze Medal Won   : " << totalBronze   (MedalNum, i) 							 << endl << endl
					 << "--------------------------------------------------------------------------------------------------" << endl << endl;
			}
		}
	}
}


void medalTable (int MedalNum[][CountryNum][MedalType], int i)
{
	cout << "Result At Year " << i << " : "                                     << endl
		 << "+---------------+---------------+---------------+---------------+" << endl
		 << "|"
		 << setw(15) << left << " "      << "|"
		 << setw(15) << left << "Gold" 	 << "|"
		 << setw(15) << left << "Silver" << "|"
		 << setw(15) << left << "Bronze" << "|"                                 << endl
		 << "+---------------+---------------+---------------+---------------+" << endl;
		 
	for (int j = 0; j < CountryNum; j += 1)
	{
		cout << "|" << setw(8) << left << "Country " 
		            << setw(7) << left << j + 1 << "|";
		
		for (int k = 0; k < MedalType; k += 1)
			cout << setw(15) << left << MedalNum[i][j][k] << "|";
			
		cout << endl;
	}
	
	cout << "+---------------+---------------+---------------+---------------+" << endl;
}


int totalMedalC3 (int MedalNum[][CountryNum][MedalType], int i)
{
	int TotalMedalC3 = 0;
	
	for (int k = 0; k < MedalType; k += 1)
		TotalMedalC3 = TotalMedalC3 + MedalNum[i][2][k];
	
	return TotalMedalC3;
}


int largestMedal (int MedalNum[][CountryNum][MedalType], int i)
{
	int LargestMedal = MedalNum[i][0][0];
	
	for (int j = 0; j < CountryNum; j += 1)
	{
		for (int k = 0; k < MedalType; k += 1)
		{
			if (MedalNum[i][j][k] >= LargestMedal) LargestMedal = MedalNum[i][j][k];
			else;
		}
	}
	
	return LargestMedal;
}


int smallestMedal (int MedalNum[][CountryNum][MedalType], int i)
{
	int SmallestMedal = MedalNum[i][0][0];
	
	for (int j = 0; j < CountryNum; j += 1)
	{
		for (int k = 0; k < MedalType; k += 1)
		{
			if (MedalNum[i][j][k] <= SmallestMedal) SmallestMedal = MedalNum[i][j][k];
			else;
		}
	}
	
	return SmallestMedal;
}


int highestGold (int MedalNum[][CountryNum][MedalType], int i)
{
	int HighestGold = MedalNum[i][0][0];
	
	for (int j = 0; j < CountryNum; j += 1)
	{
		if (MedalNum[i][j][0] >= HighestGold) HighestGold = MedalNum[i][j][0];
		else;
	}
	
	return HighestGold;
}


int totalBronze (int MedalNum[][CountryNum][MedalType], int i)
{
	int totalBronze = 0;
	
	for (int j = 0; j < CountryNum; j += 1)
	{
		totalBronze += MedalNum[i][j][2];
	}
	
	return totalBronze;
}
