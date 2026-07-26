#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, t;
    long long x, y;
    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> x >> y;
        if((x + y) % 3 == 0 && x >= 2 * y && x >= -4 * y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}