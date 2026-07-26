#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 long long n,k,x;
 cin >>n>>k>>x;
 if (x<=(2*n-k+1)*(k)/2 && k*(k+1)/2<=x){
  cout <<"YES"<<'
';
 }
 else{
  cout <<"NO"<<'
';
 }
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
    cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}