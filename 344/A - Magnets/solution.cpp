#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long b,c;
    long long s=1;
  cin >>b;
  n--;
    while(n--){
 cin>>c;
 if(c!=b){
s++;
 }
 b=c;
    }cout<<s<<endl;
    return 0;
}