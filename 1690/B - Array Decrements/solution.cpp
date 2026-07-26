#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <string>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
 
 
 
using namespace std;
using ll = long long;
using ld = long double;  // or double, if TL is tight
using str = string;      
 
// pairs
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<ld, ld>;
#define mp make_pair
#define fi first
#define se second
 
#define tcT template <class T
#define tcTU tcT, class U
// ^ lol this makes everything look weird but I'll try it
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<ld>;
using vs = V<str>;
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<pd>;
 
// vectors
#define sz(x) int(size(x))
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
 
#define lb(x,a) lower_bound(all(x),a)
#define ub(x,a) upper_bound(all(x),a)
tcT > int lwb(const V<T> &a, const T &b) { return int(lb(a, b) - bg(a)); }
tcT > int upb(const V<T> &a, const T &b) { return int(ub(a, b) - bg(a)); }
 
// sets
#define ml map <ll,ll>
#define mi map<int,int>
#define si set<int>
#define sl set <ll>
#define sll set <pll>
 
// loops
#define fp(i,j,k,l) for(ll i=j;i<k;i+=l)
#define fr(i, a, b) for (int i = (a); i < (b); ++i)
#define frz(i, a) fr(i, 0, a)
#define frd(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define frdz(i, a) frd(i, 0, a)
#define rep(a) fr(_, a)
#define each(a, x) for (auto &a : x)
 
const int MOD = 998244353;  // 1e9+7;
const int MX = (int)2e5 + 5;
const ll BIG = 1e18;  // not too close to LLONG_MAX
const ld PI = acos((ld)-1);
#define ln(x) log(x) // natural log of x
#define log(n,x) (ln(x)/ln(n))
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};  // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
 
// bitwise ops
 
constexpr int pct(int x) { return __builtin_popcount(x); }  // # of bits set
constexpr int bits(int x) {  // assert(x >= 0); // make C++11 compatible until
                            // USACO updates ...
   return x == 0 ? 0 : 31 - __builtin_clz(x);
}  // floor(log2(x))
constexpr int p2(int x) { return 1 << x; }
constexpr int msk2(int x) { return p2(x) - 1; }
bool prime(ll a){if (a<2) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1;}
ll cdiv(ll a, ll b) {
   return a / b + ((a ^ b) > 0 && a % b);
}  // divide a by b rounded up
ll fdiv(ll a, ll b) {
   return a / b - ((a ^ b) < 0 && a % b);
}  // divide a by b rounded down
 ll rmod(ll a, ll b) { return (a % b + b) % b; }
 // rmod: true modulo for negative values, always returns a result in [0, b) when b > 0 since in c++  %  is just the remainder operator
tcT > bool ckmin(T &a, const T &b) {
   return b < a ? a = b, 1 : 0;
}  // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b) {
   return a < b ? a = b, 1 : 0;
}  // set a = max(a,b)
 
tcTU > T fstTrue(T lo, T hi, U f) {
   ++hi;
   assert(lo <= hi);  // assuming f is increasing
   while (lo < hi) {  // find first index such that f is true
      T mid = lo + (hi - lo) / 2;
      f(mid) ? hi = mid : lo = mid + 1;
   }
   return lo;
}
tcTU > T lstTrue(T lo, T hi, U f) {
   --lo;
   assert(lo <= hi);  // assuming f is decreasing
   while (lo < hi) {  // find first index such that f is true
      T mid = lo + (hi - lo + 1) / 2;
      f(mid) ? lo = mid : hi = mid - 1;
   }
   return lo;
}
tcT > void remDup(vector<T> &v) {  // sort and remove duplicates
   sort(all(v));
   v.erase(unique(all(v)), end(v));
}
tcTU > void safeErase(T &t, const U &u) {
   auto it = t.find(u);
   assert(it != end(t));
   t.erase(it);
}
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
bool check(int k,int n, const vl& a, const vl& b) {
    int e2=0,e0=0;
    int l=-1; 
    frz(i,n) {
        int c=(a[i]>=k)+(b[i]>=k);
        if (c==2) {
            e2++;
            l=2;
        } else if (c==0) {
            if (l!=0) {
                e0++;
                l=0;
            }
        }
    }
    
    return (e2-e0>=1);
 
}
 
void solve(){
  ll n;
  cin >>n;
   vl a(n);
   vl b(n);
   frz(i,n){
      cin >>a[i];
   }
  ll d = 0;
    frz(i,n) {
        cin >> b[i];
        d = max(d,a[i]-b[i]);
    }
    
   frz(i,n){
        if (a[i]<b[i]) {
            no;
            return;
        }
        if (b[i]>0 && a[i]-b[i]!=d) {
            no;
            return;
        }
    }
    
    yes;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >>t;
    //t=1;
    while(t--){
      solve();
    }
    return 0 ;}