#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{long long n ;
vector <int> a(5);
a={100,20,10,5,1};
cin >>n;
long long s=0;
for (int i=0;i<5;i++){
    s+=(long long)n/a[i];
    n=n%a[i];
}
 
 
 
 cout<< s <<endl;
    return 0;}