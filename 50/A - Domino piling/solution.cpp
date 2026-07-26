#include <iostream>
 
using namespace std;
int main(){
int t,x;
 
cin >>t>>x;
cout <<((float)(x*t)-(x*t)%2)/2<<endl;
    return 0;
}