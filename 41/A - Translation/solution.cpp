#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
int x,y;
    cin >>s;
    string t,f;
    cin >>f;
    t=s;
    reverse(t.begin(),t.end());
   if (t==f){
    cout <<"YES"<<endl;
   }
   else{
    cout << "NO"<<endl;
   }
 
 
    return 0;}
 