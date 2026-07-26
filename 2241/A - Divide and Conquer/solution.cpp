#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int x,y;
    cin >>x>>y;
    if(x>=y && x%y==0){
        cout <<"YES"<<'
';
    }
    else{
        cout <<"NO"<<'
';
 
    }
 
}
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}