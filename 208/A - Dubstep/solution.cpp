#include <bits/stdc++.h>
using namespace std;
void solve(){
string s;
cin >>s;
int i=0;
int n;
while(i==0 && s!=""){
  if(s.substr(0,3)=="WUB"){
    n=s.length();
    s=s.substr(3,n);
  }
  else{
    i=1;
  }
}
i=0;
n=s.length();
s=s+"   ";
string p="";
while(i<n){
  if(s.substr(i,3)!="WUB"){
    p+=s[i];
    i++;
  }
  else{
    i+=3;
    if(p.back()!=' '){
      p+=" ";
    }
  }
}
int x=p.length();
if(x>=3){
if(p.substr(x-3,3)=="WUB"){
  cout <<p.substr(0,x-3)<<'
';
}
else{
  cout <<p<<'
';
}
}
else{
  cout <<p<<'
';
}}
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