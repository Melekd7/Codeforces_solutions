#include<iostream>
using namespace std;
int main(){
int n,h,max_h=0,min_h=101,max_i=0,min_i=0;
cin>>n;
for(int i=0;i<n;++i){
cin>>h;
if(h>max_h){max_h=h;max_i=i;}
if(h<=min_h){min_h=h;min_i=i;}
}
int ans=max_i+(n-1-min_i);
if(max_i>min_i)ans--;
cout<<ans<<"
";
return 0;
}