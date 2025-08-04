#include <bits/stdc++.h>
using namespace std;

int a, b, Max, Min;

int main () {

    cin >> a >> b;

    //tính Max
    Max= ( ( a + b ) + abs ( a - b ) ) / 2;
    //tính Min
    Min= ( ( a + b ) - abs ( a - b ) ) / 2;
    //in kết quả
    cout << "max = " << Max << endl;
    cout << "min = " << Min << endl;
    return 0;
}
