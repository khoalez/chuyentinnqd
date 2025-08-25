#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, tong, gach, tang;
    cin >> n >> k;
    for (int i = 0; i <= n; i++)
        tong += i;
    while (gach < k) {
        tang += 1;
        gach += tang;
    }
    cout << tong << endl;
    cout << tang - 1;
    return 0;
}
