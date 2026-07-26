#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define pairi pair <int,int>
#define pairll pair <long long,long long>
#define vi vector <int> 
#define vll vector <long long> 
#define mapi map <int,int> 
#define mapill map <int,long long> 
#define seti set <int> 
#define setll set <long long> 
#define pb push_back
#define fr(i,a,b) for(int i = a ; i < b ; i++)
#define fir(i,a,b) for(int i = b ; i >= a ; i--)
typedef long long ll ;
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n+1);
    for (int i=1;i<=n;i++) {
        cin >>a[i];
    }
 
    vector<int> d;
    long long l=0;
    
    for (int i=1;i<n;i++) {
        if (a[i]>a[i+1]) {
            d.push_back(i);
            l=max(l,a[i]-a[i + 1]);
        }
    }
 
    if (d.empty()) {
        cout <<"YES
";
        return;
    }
    long long R = 2e18;
    for (int x=0;x<(int)d.size()-1;x++) {
        int p1=d[x];
        int p2=d[x+1];
        
        if (p1+1==p2) {
            R=-2e18;
            break;
        }
        long long mx=-2e18;
        for (int j = p1+1;j<p2;j++) {
            mx = max(mx,a[j+1]-a[j]);
        }
        R = min(R,mx);
    }
    if (l<=R) {
        cout <<"YES
";
    } else {
        cout <<"NO
";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}