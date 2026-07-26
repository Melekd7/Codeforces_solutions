#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
 ll n,m;
 cin>>n>>m;
 vector <ll> a(m);
 bool b=0;
 for(ll i=0;i<m;i++){
  cin >>a[i];
 }
 ll s=0;
 ll d=0;
 for(ll i=0;i<m-1;i++){
  if (a[i+1]<a[i]){
    d+=1;
    b=1;
  }
}
 
s+=d*n;
if(!b){
  cout<<a[m-1]-1<<'
';
}
else{
cout<<s+a[m-1]-1<<'
';
}}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
    //cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}