#include <bits/stdc++.h>
using namespace std;
 
int main(){
long long n;
cin >>n;
vector <long long>a(n);
vector <long long >b(n);
int i;
long long m=0;
long long s=0;
for(i=0;i<n;i++){
    cin >>a[i];
    cin>>b[i];
    s=s-a[i];
    s=s+b[i];
    if (s>m)
{m=s;}}
cout<<m<<endl;
return 0;}