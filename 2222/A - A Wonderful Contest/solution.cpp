#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
 
    cin >>t;
    while(t--){
        cin >>n;
        vector <int>a(n);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        int j=0;
        while(j<n && a[j]!=100){
            j++;
        }
        if (j<n){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
 
 
 
 
    return 0;
}