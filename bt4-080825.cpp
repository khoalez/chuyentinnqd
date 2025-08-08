#include <bits/stdc++.h>
using namespace std;
int n, tien;
int main() {
    cin >> n;
    if (n <= 10)
        tien = 500 * n;
    if (n >= 50 && n <= 11)
        tien = 5000 + (n - 10) * 400;
    if (n >= 51)
        tien = 5000 + 16000 + (n - 50) * 300;
    if (n >= 200)
        tien = 0.85 * tien;
    cout << tien;
    return 0;
}
