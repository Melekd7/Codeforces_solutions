#include <bits/stdc++.h>
using namespace std;
 int main(){
     int n,t;
     cin >>t;
     
     int s;
     int i;
     while(t--){
     s=0;
     cin >> n;
     vector <int>a(n);
      for(i=0;i<n;i++){cin >>a[i];
     s+=a[i];}
     if (s%2==0){
        cout << "YES"<<endl;
 
     }
     else{
        cout << "NO" <<endl;
     }
 
 
     }
 
 return 0;}