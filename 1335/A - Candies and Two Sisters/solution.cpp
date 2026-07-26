#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,f;
    long  long n;
    cin >> t;
    while(t--){
        cin >>n;
        if (n==1 || n==2){
            cout <<0<< endl;
        }
        else{
            f=(double)n/2;
            if(n%2==1){
            
            cout << f << endl;
            
        }
        else{
            cout <<f-1 << endl;
        }
    }}
    
    return 0;
}