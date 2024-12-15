#include <iostream>
using namespace std;

const int COUNTRIES = 4;
const int MEDALS = 3;

void readMedals (int medals [COUNTRIES][MEDALS]);
int numberMedalsWonCountry3 (int medals [COUNTRIES][MEDALS]);
int largestMedals (int medals [COUNTRIES][MEDALS]);
int smallestMedals (int medals [COUNTRIES][MEDALS]);
int highestGoldMedals (int medals [COUNTRIES][MEDALS]);
int numberBronzeMedals (int medals [COUNTRIES][MEDALS]);
	
int main ()
{
	int medals [COUNTRIES][MEDALS];
	
	readMedals (medals);
	
	cout << "Total number of medal won by country 3 is " << numberMedalsWonCountry3(medals) << endl;
	cout << "The largest number of medals won is " << largestMedals(medals) << endl;
	cout << "The smallest number of medals won is " << smallestMedals(medals) << endl;
	cout << "The highest number of gold medals won is " << highestGoldMedals(medals) << endl;
	cout << "The total number of bronze medal won is " << numberBronzeMedals(medals) << endl;
	
	
	return 0;
}

void readMedals (int medals [COUNTRIES][MEDALS])
{
	for (int i=0; i< COUNTRIES; i++)
	{
		cout << "Enter medals for country " << i+1 << " (Gold, Silver, Bronze)";
		
		for (int j=0; j < MEDALS; j++)
		{
			cin >> medals[i][j];	
		}
		
	}
			
}

int numberMedalsWonCountry3 (int medals [COUNTRIES][MEDALS])
{
	int total = 0;
	
	for (int j=0; j< MEDALS; j++)
	{
		total+= medals[2][j];
	}
	
	return total;
}

int largestMedals (int medals [COUNTRIES][MEDALS])
{
	int maxMedals=0;
	
	for (int i=0; i< COUNTRIES; i++)
	{
		int sum = 0;
		for (int j=0; j<MEDALS; j++)
		{
			sum+= medals [i][j];
		}
		
		if (sum > maxMedals)
			maxMedals= sum;
	}
	
	return maxMedals;
}

int smallestMedals (int medals [COUNTRIES][MEDALS])
{
	int minMedals = 9999999999999;
	
	for (int i=0; i< COUNTRIES; i++)
	{
		int sum = 0;
		for (int j=0; j<MEDALS; j++)
		{
			sum += medals[i][j];
		}
		if (sum < minMedals)
		{
			minMedals= sum;
		}
		
	}
	return minMedals;
}

int highestGoldMedals (int medals [COUNTRIES][MEDALS])
{
	int maxGold = 0;
    for (int i = 0; i < COUNTRIES; i++) {
        if (medals[i][0] > maxGold)
		{
            maxGold = medals[i][0];
        }
    }
    return maxGold;
}

int numberBronzeMedals (int medals [COUNTRIES][MEDALS])
{
	int totalBronze = 0;
    for (int i = 0; i < COUNTRIES; i++)
	{
        totalBronze += medals[i][2];
    }
    return totalBronze;
}

