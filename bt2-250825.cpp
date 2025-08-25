#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long vi_khuan = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        vi_khuan *= 2;
    cout << vi_khuan;
    return 0;
}
