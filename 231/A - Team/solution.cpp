#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
int t;
int a,b,c;
int i;
cin >> t;
while(t--){
    cin >>a>>b>>c ;
    if (a+b+c>1){
        i++;
    }
}
    cout <<i<<endl;
 
    return 0;
}