#include <iostream>
#include <iomanip>
using namespace std;

const int x = 4, y = 3;

void medalType(int);
int readNumMedals(int[][y]);
void showTable(int [][y]);
int totalMedalsCountry3(int[][y]);
int largestNumMedals(int[][y]);
int smallestNumMedals(int[][y]);
int highestNumGolds(int[][y]);
int totalBronze(int[][y]);

int main()
{
	int medal[x][y], TMedalsC3, LnumMedals, SnumMedals, Hnumgold, TnumBronze;
	cout << "Please enter the number of medals for each country respectively.\n";
	readNumMedals(medal);
	showTable(medal);
	TMedalsC3 = totalMedalsCountry3(medal);
	cout << "The total number of medals won by country 3 is " << TMedalsC3 << endl;
	LnumMedals = largestNumMedals(medal);
	cout << "The largest number of medals won is " << LnumMedals << endl;
	SnumMedals = smallestNumMedals(medal);
	cout << "The smallest number of medals won is " << SnumMedals << endl;
	Hnumgold = highestNumGolds(medal);
	cout << "The highest number of gold medal won is " << Hnumgold << endl;
	TnumBronze = totalBronze(medal);
	cout << "The total number of bronze medal won is " << TnumBronze << endl;
	
	return 0;
}

void medalType(int x)
{
	switch(x)
	{
		case 0 : cout << "Gold   : "; break;
		case 1 : cout << "Silver : "; break;
		case 2 : cout << "Bronze : "; break;
	}
}

int readNumMedals(int medal[][y])
{
	for(int i = 0; i < x; i++)
	{
		cout << "Country " << i + 1 << endl;
		for(int j = 0; j < y; j++)
		{
			medalType(j);
			cin >> medal[i][j];
			cin.ignore(50,'\n');
			do
			{
				if(cin.fail())
				{
					cin.clear();
					cin.ignore(50,'\n');
					cout << "Please enter a non-negative integer : ";
					cin >> medal[i][j];
					cin.ignore(50,'\n');
				}
	
				else
					break;
			}while(1);	
		}
		cout << endl;
	}
}

void showTable(int medal[][y])
{
	cout << string(60,'-') << endl;   
	cout << '|' << string(13,' ')  << '|';
	cout << setw(14) << left << "Gold"   << '|';
	cout << setw(14) << left << "Silver" << '|';
	cout << setw(14) << left << "Bronze" << '|';
	cout << endl;
	for(int i = 0; i < x; i++)
	{
		cout << string(60,'-') << endl;
		cout << '|' << "Country " << setw(5) << left << i + 1 << setw(1) << '|';
		for(int j = 0; j < y; j++)
			cout << setw(14) << left << medal[i][j] << '|';
		cout << endl;
	}
	cout << string(60,'-') << endl;
}

int totalMedalsCountry3(int medal[][y])
{
	int sum = 0;
	for(int i = 0; i < y; i++)
		sum += medal[2][i];
	return sum;
}

int largestNumMedals(int medal[][y])
{
	int largest = 0;
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			if(largest < medal[i][j])
				largest = medal[i][j];
				
	return largest;	
}

int smallestNumMedals(int medal[][y])
{
	int smallest = medal[0][0];
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			if(smallest > medal[i][j])
				smallest = medal[i][j];
				
	return smallest;
}

int highestNumGolds(int medal[][y])
{
	int highest = 0;
	for(int i = 0; i < x; i++)
		if(highest < medal[i][0])
			highest = medal[i][0];
	
	return highest;
}

int totalBronze(int medal[][y])
{
	int total;
	for(int i = 0; i < x; i++)
	total += medal[i][2];
	
	return total;
}

