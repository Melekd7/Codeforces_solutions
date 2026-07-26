#include <bits/stdc++.h>
using namespace std;
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
long long a,b;
 
 
cin >>t;
while(t--){
        cin>> a >> b;
        if (a<b){
            swap(a,b);
        }
        if((b%2==1 && a==2*b)|| (a%2==1 && b%2==1)){
            cout << "NO" <<endl;
        }
        else{
            cout <<"YES"<<endl;
        }}
 
 
 
 
 
return 0;}