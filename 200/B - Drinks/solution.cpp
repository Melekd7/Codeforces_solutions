#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,s=0;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>a;
        s+=a;
    }
 
    cout <<(double)s/n<<endl;
    return 0;
}