#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    vector <int>x(4);
 vector <int>y(4);
 int i;
 int a,b,c,d;
 while(t--){
 
 for(i=0;i<4;i++){
        cin >>x[i]>>y[i];
 
 }
 a,b;
 a=x[0];
 b=y[0];
 i=1;
 int j=1;
 while(x[i]==a){
    i++;
 }
  c=x[i];
 while(y[j]==b){
    j++;
 }
  d=y[j];
 
 cout<< abs(a-c)*abs(b-d)<<endl;
    }return 0;}