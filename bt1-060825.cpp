#include <bits/stdc++.h>
using namespace std;

float t;
int main(){
    cin >> t;
    if (9.0 <= t)
        cout << "VERY TOXIC";
    if (5.0 <= t && t <= 8.9)
        cout << "TOXIC";
    if (t > 5.0)
        cout << "SAFE";
    return 0;
}
