#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    long long x,y,n;
    cin >> t;
    int f;
    while(t--){
        cin >> x >> y >> n;
 
 
    f=(double)n/x;
    f=f*x;
    if(f+y<=n){
    cout << f+y<<endl;}
    else{
        cout << f+y-x<<endl;
    }
    }
    return 0;
}