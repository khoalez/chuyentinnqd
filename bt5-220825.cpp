#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m,tien, goi;
    cin >> n >> m;
    goi = n / (m +1);
    tien = (n - goi) * 3000;
    cout << tien;
    return 0;
}


