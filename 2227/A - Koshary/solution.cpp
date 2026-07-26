#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,x,y;
    cin >>t;
    while(t--){
            cin>>x>>y;
    if (x%2!=0 && y%2!=0){
        cout <<"NO"<<endl;
    }
     else{
        cout <<"YES"<<endl;
     }
    }
 
 
    return 0;
}