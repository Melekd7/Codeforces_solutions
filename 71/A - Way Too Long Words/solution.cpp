#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
int t;
string c;
cin >> t;
while(t--){
    cin >> c;
if (c.length()>10){
 
cout <<c[0]<<c.length()-2<<c[c.length()-1] << endl;}
 
else{
    cout <<c<<endl;
}
 
 
}
    return 0;
}