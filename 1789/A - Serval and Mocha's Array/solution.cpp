#include <bits/stdc++.h>
using namespace std;
 
void solve() {
      int n;
     cin>>n;
     vector <int>a(n);
     for(int i=0;i<n;i++){
     cin >>a[i];}
     int m=1000000;
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         m=min(m,std::gcd(a[i],a[j]));
      }
}
if(m<=2){
   cout <<"Yes"<<'
';
}
else{
   cout <<"No"<<'
';
}}
 
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