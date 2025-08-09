#include <bits/stdc++.h>
using namespace std;
int n, tien;
int main() {
    cin >> n;
    if (n <= 2)
        tien = 1200000 * n;
    if (n >= 3 && n <= 7)
        tien = 1200000 + (n - 7) * 900000 / 5;
    if (n >= 8)
        tien = 1200000 + 4500000 + (n - 12) * 700000 / 5;
    if (n >= 10)
        tien = 0.2 * tien;
    cout << tien;
    return 0;
}

