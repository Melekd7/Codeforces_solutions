#include <iostream>
using namespace std;
int main(){
long long x;
long long s;
long long f;
cin >> x;
s=0;
for(int i=5;i>0;i--){
f=(double)x/i;
x=x%i;
s+=f;}
cout <<s<<endl;
return 0;}