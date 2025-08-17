#include <bits/stdc++.h>
using namespace std;

int main() {
int n, tong, tam;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tam = 1;
        for (int j = 1; j <= i; j++)
            tam = tam * j;
        tong = tong + tam;
    }
    cout << tong;
    return 0;
}
