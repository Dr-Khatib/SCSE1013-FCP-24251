#ifndef LAB4SHOW_H
#define LAB4SHOW_H

#include <string>
using namespace std;

struct MedalRecord {
    string bestCountry;
    int totalMedals;
    int bestyear ;
};


int total_medal(int count, string country[], int gold[], int sliver[], int bronze[]);
string largestnum(int count, int gold[] ,int sliver[], int bronze[]);
void readdata(int &count, int year[],string country[],int gold[], int sliver[],int bronze[]);
int goldmedal (int count , int gold[]);
int totalbronze (int count , int bronze[]);
void displayBestRecord(int count,int year[], string country[], int gold[], int silver[], int bronze[]);
MedalRecord best_record(int count, int year[],string country[], int gold[], int silver[], int bronze[]);
string smallestnum(int count, int gold[], int sliver[], int bronze[]);
void displayTable(int count, int year[],string country[], int gold[], int silver[], int bronze[]);


#endif
