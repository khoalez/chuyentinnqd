#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,tam = 0;
    cin >> n;
    for (int j = 2; j < n; j++) {
        tam = 0;
        for (int i = 2; i < j; i++)
            if (j % i == 0) {
                tam = 1;
                break;
            }
        if (tam == 0)
            cout << j << " ";
    }
    return 0;
}

