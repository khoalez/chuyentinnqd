#include <bits/stdc++.h>
using namespace std;

float a, b,c;
int main () {
    cin >> a >> b >> c;
    float x;
    x = pow(a, 5) - 2 * sqrt(abs(b)) + a * b * c;
    cout << setprecision(2) << fixed  << x;
    return 0;
}
