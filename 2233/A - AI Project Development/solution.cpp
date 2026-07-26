#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n,x,y,z;
    cin >>n>>x>>y>>z;
    int h=0;
    int i=0;
    while(h<n){
        h+=(x+y);
        i++;
    }
    h=0;
    int j=z;
    n=n-z*x;
    while(h<n){
        h+=(x+10*y);
        j++;
    }
    cout <<min(i,j)<<'
';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}