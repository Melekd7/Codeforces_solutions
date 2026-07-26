#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   long long k,n;
   int i=0;
   cin >>n>>k;
   while(i<k){
    if ((n%10)!=0){
        n=n-1;}
    else{
        n=n/10;
    }i++;
 
 
   }cout << n<<endl;
 
 
    return 0;}
 