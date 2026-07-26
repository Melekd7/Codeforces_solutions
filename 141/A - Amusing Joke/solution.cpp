#include <bits/stdc++.h>
using namespace std;
void solve(){
string s,p,f;
cin >>s>>p>>f;
s=s+p;
sort(s.begin(),s.end());
sort(f.begin(),f.end());
if(f==s){
  cout<<"YES";
}
else{cout<<"NO";}
 
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
 // cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}