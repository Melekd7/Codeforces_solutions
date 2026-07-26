#include <algorithm>
#include <iostream>
 
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,x,y,k;
    cin >>t;
    while(t--){
        cin >>x>>y>>k;
        if((x-1)*y+(y-1)==k){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    
    return 0;}