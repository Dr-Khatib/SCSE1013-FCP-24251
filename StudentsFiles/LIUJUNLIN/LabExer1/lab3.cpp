#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num;
    cout << "Enter an integer:";
    cin >> num;
 
    if (num > 0) {
        cout <<num<< " is positive" << endl;
    } else if (num < 0) {
        cout <<num << " is negative" << endl;
    } else {
        cout << "zero" << endl;
    }
 
    return 0;
}
