#include <iostream>
using namespace std;

const int YEARS = 2;
const int COUNTRIES = 4;
const int MEDALS = 3;

void readMedals (int medals [YEARS][COUNTRIES][MEDALS]);
int numberMedalsWonCountry3 (int medals [YEARS][COUNTRIES][MEDALS], int year);
int largestMedals (int medals [YEARS][COUNTRIES][MEDALS], int year);
int smallestMedals (int medals [YEARS][COUNTRIES][MEDALS], int year);
int highestGoldMedals (int medals [YEARS][COUNTRIES][MEDALS], int year);
int numberBronzeMedals (int medals [YEARS][COUNTRIES][MEDALS], int year);

int main ()
{
	int medals [YEARS][COUNTRIES][MEDALS];
	
	readMedals(medals);
	
	for (int h=0; h<YEARS; h++)
	{
		cout << "For year " << h+1 << ":-" << endl;
		cout << "Total number of medal won by country 3 is " << numberMedalsWonCountry3(medals, h) << endl;
		cout << "The largest number of medals won is " << largestMedals(medals, h) << endl;
		cout << "The smallest number of medals won is " << smallestMedals(medals, h) << endl;
		cout << "The highest number of gold medals won is " << highestGoldMedals(medals, h) << endl;
		cout << "The total number of bronze medal won is " << numberBronzeMedals(medals, h) << endl;
	}
	
	return 0;
}

void readMedals (int medals [YEARS][COUNTRIES][MEDALS])
{
	for (int h=0; h<YEARS; h++)
	{
		cout << "Enter data for Year " << h+1 << ":" << endl;
		for (int i=0; i< COUNTRIES; i++)
		{
			cout << "Enter medals for country " << i+1 << " (Gold, Silver, Bronze)";
		
			for (int j=0; j < MEDALS; j++)
			{
				cin >> medals[h][i][j];	
			}
		}	
	}
	
			
}

int numberMedalsWonCountry3 (int medals [YEARS][COUNTRIES][MEDALS], int year)
{
	int total = 0;
	
	for (int j=0; j< MEDALS; j++)
	{
		total+= medals[year][2][j];
	}
	
	return total;
}

int largestMedals (int medals [YEARS][COUNTRIES][MEDALS], int year)
{
	int maxMedals=0;
	
	for (int i=0; i< COUNTRIES; i++)
	{
		int sum = 0;
		for (int j=0; j<MEDALS; j++)
		{
			sum+= medals [year][i][j];
		}
		
		if (sum > maxMedals)
			maxMedals= sum;
	}
	
	return maxMedals;
}

int smallestMedals (int medals [YEARS][COUNTRIES][MEDALS], int year)
{
	int minMedals = 999999;
	
	for (int i=0; i< COUNTRIES; i++)
	{
		int sum = 0;
		for (int j=0; j<MEDALS; j++)
		{
			sum += medals[year][i][j];
		}
		if (sum < minMedals)
		{
			minMedals= sum;
		}
		
	}
	return minMedals;
}

int highestGoldMedals (int medals [YEARS][COUNTRIES][MEDALS], int year)
{
	int maxGold = 0;
    for (int i = 0; i < COUNTRIES; i++) {
        if (medals[year][i][0] > maxGold)
		{
            maxGold = medals[year][i][0];
        }
    }
    return maxGold;
}

int numberBronzeMedals (int medals [YEARS][COUNTRIES][MEDALS], int year)
{
	int totalBronze = 0;
    for (int i = 0; i < COUNTRIES; i++)
	{
        totalBronze += medals[year][i][2];
    }
    return totalBronze;
}

