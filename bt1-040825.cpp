#include <bits/stdc++.h>
using namespace std;

int T, to100, to20, to5, to1, tong;
int main () {
    cin >> T;
    to100 = T / 100;
    T = T - to100 * 100;
    to20 = T / 20;
    T = T - to20 * 20;
    to5 = T / 5;
    T = T - to5 * 5;
    to1 = T;
    tong = to100 + to20 + to5 + to1;
    cout << to100 << endl;
    cout << to20 << endl;
    cout << to5 << endl;
    cout << to1 << endl;
    cout << tong << endl;
    return 0;
}
