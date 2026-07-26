#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,s=0;
    cin >>t;
    vector <long long>x(t);
 
 int i;
 
 
 for(i=0;i<t;i++){
        cin >>x[i];
 
 }
 sort(x.begin(),x.end());
 int h=t/2;
 
 for(i=0;i<h;i++){
        int v=x[i]+x[t-i-1];
        s+=pow(v,2);
 
 }
 cout<< s<<endl;
    return 0;}