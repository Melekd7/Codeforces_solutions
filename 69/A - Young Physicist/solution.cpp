#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,s=0,d=0,f=0;
    cin >>n;
    vector <signed int>x(n);
    vector <signed int>y(n);
    vector <signed int>z(n);
    for(int i=0;i<n;i++){
        cin >>x[i]>>y[i]>>z[i];
        s+=x[i];
        d+=y[i];
        f+=z[i];
    }
   if (s==0 && d==0 && f==0){
        cout << "YES"<<endl;
    }
    else{
            cout << "NO"<<endl;
 
    }
 
    return 0;
}