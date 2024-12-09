#include <iostream>
using namespace std;

const int x = 4, y = 3;

int yearCollect(int[]);
void medalType(int);
void readNumMedals(int[][x][y], int[], int);
void totalMedalsCountry3(int[][x][y], int[], int);
void largestNumMedals(int[][x][y], int[], int);
void smallestNumMedals(int[][x][y], int[], int);
void highestNumGolds(int[][x][y], int[], int);
void totalBronze(int[][x][y], int[], int);


int main()
{
	int year[2500], numYears;
	numYears = yearCollect(year);
	int z = numYears;
	
	int medal[z][x][y];
	cout << "Please enter the number of medals for each country with its corresponding year respectively.\n";
	readNumMedals(medal, year, z);
	totalMedalsCountry3(medal, year, z);
	largestNumMedals(medal, year, z);
	smallestNumMedals(medal, year, z);
	highestNumGolds(medal, year, z);
	totalBronze(medal, year, z);
	
	return 0;
}

int yearCollect(int year[])
{
	cout << "Enter all the years(integer) that you want to analyze **Enter any letter to stop keying.\n1. ";
	cin >> year[0];
	
	if(cin.fail())
	{
		cout << "\nSince no year is entered, the analysis is ended.";
		exit(0);
	}
	
	int numYears = 1;
	while(1)
	{
		cout << numYears + 1 << ". ";
		cin >> year[numYears];
		cin.ignore(50,'\n');
		
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(50,'\n');
			break;
		}
		numYears++;
	}
	
	return numYears;
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

void readNumMedals(int medal[][x][y], int year[],int z)
{
	for(int k = 0; k < z; k++)
	{
		cout << year[k] << " : \n";
		for(int i = 0; i < x; i++)
		{
			cout << "Country " << i + 1 << endl;
			for(int j = 0; j < y; j++)
			{
				medalType(j);
				cin >> medal[k][i][j];
				cin.ignore(50,'\n');
				do
				{
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(50,'\n');
						cout << "Please enter a non-negative integer : ";
						cin >> medal[k][i][j];
						cin.ignore(50,'\n');
					}
	
					else
						break;
				}while(1);	
			}
			cout << endl;
		}
	}
}

void totalMedalsCountry3(int medal[][x][y], int year[], int z)
{
	int Sum = 0;
	for(int k = 0; k < z; k++)
	{
		int sum = 0;
		for(int i = 0; i < y; i++)
			sum += medal[k][2][i];
		cout << "The total number of medals won by country 3 in " << year[k] << " is " << sum << endl;
		Sum += sum;
	}
	cout << "The total number of medals won by country 3 in all the years is " << Sum << endl;
}

void largestNumMedals(int medal[][x][y], int year[], int z)
{
	int Largest = 0;
	for(int k = 0; k < z; k++)
	{
		int largest = 0;
		for(int i = 0; i < x; i++)
		{
			for(int j = 0; j < y; j++)
				if(largest < medal[k][i][j])
					largest = medal[k][i][j];
		}
		cout << "The largest number of medals won in " << year[k] << " is " << largest << endl;	
		if(Largest < largest)
			Largest = largest; 
	}
	cout << "The largest number of medals won in all the years is " << Largest << endl;	
}

void smallestNumMedals(int medal[][x][y], int year[], int z)
{
	int Smallest = medal[0][0][0];
	for(int k = 0; k < z; k++)
	{
		int smallest = medal[k][0][0];
		for(int i = 0; i < x; i++)
			for(int j = 0; j < y; j++)
				if(smallest > medal[k][i][j])
					smallest = medal[k][i][j];
		cout << "The smallest number of medals won in " << year[k] << " is " << smallest << endl;
		if(Smallest > smallest)
			Smallest = smallest;
	}
	cout << "The smallest number of medals won in all the years is " << Smallest << endl;	
}

void highestNumGolds(int medal[][x][y], int year[], int z)
{
	int Highest = 0;
	for(int k = 0; k < z; k++)
	{
		int highest = 0;
		for(int i = 0; i < x; i++)
			if(highest < medal[k][i][0])
				highest = medal[k][i][0];
		cout << "The highest number of gold medal won in " << year[k] << " is " << highest << endl;
		if(Highest < highest)
			Highest = highest;
	}
	cout << "The highest number of gold medal won in all the years is " << Highest << endl;
}

void totalBronze(int medal[][x][y], int year[], int z)
{
	int Total = 0;
	for(int k = 0; k < z; k++)
	{
		int total = 0;
		for(int i = 0; i < x; i++)
		total += medal[k][i][2];
		cout << "The total number of bronze medal won in " << year[k] << " is " << total << endl;
		Total += total;
	}
	cout << "The total number of bronze medal won in all the years is " << Total << endl;
}

