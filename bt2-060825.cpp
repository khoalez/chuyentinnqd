#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
int main(){
    cin >> a >> b >> c;
    d = a;
    if (d < b)
        d = b;
    if (d < c)
        d = c;
    cout << d;
    return 0;
}

