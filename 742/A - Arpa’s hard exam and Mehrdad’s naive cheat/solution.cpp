#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  int n;
  cin >>n;
  if(n==0){
    cout <<1<<'
';
  }
  else if(n%4==1){
    cout <<8<<'
';
  }
  else if(n%4==2){
    cout <<4<<'
';
  }
  else if(n%4==3){
    cout <<2<<'
';
  }
  else{
    cout <<6<<'
';
 
  }
 
}
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