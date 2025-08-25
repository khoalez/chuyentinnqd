#include <bits/stdc++.h>
using namespace std;

int main() {
    int nguoi, nuoc,tien;
    cin >> nguoi >> nuoc;
    if (nuoc < 4 * nguoi)
        tien = 6700 * nuoc;
    if (nuoc >= 4 * nguoi && nuoc <= 6 * nguoi)
        tien = 6700 * 4 * nguoi + (nuoc - 4 * nguoi) * 12900;
    if (nuoc > 6 * nguoi)
        tien = 6700 * 4 * nguoi + 12900 * 2 * nguoi + (nuoc - 6 * nguoi) * 14400;
    cout << tien;
    return 0;
}

