#include <bits/stdc++.h>
using namespace std;
int n, tien;
int main() {
    cin >> n;
    if (n == 1)
        tien = 15000;
    if (n <= 5 && n >= 2)
        tien = 15000 + (n - 1) * 13500;
    if (n >= 6)
        tien = 15000 + 4 * 13500 + (n - 5) * 11000;
    if (n >= 120)
        tien = 0.9 * tien;
    cout << tien;
    return 0;
}
