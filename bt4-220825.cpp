#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, tien, lai, thang = 0;
    cin >> a >> b;
    tien = a;
    lai = a * 0.008;
    while (tien < b) {
        thang ++ ;
        tien += lai;

    }
    cout << thang;
    return 0;
}
