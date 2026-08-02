#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ll = long long;
using ld = long double;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
#define mp make_pair
#define tcT template <class T
#define tcTU tcT, class U
 
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
 
using vi = V<int>;
using vl = V<ll>;
using vpi = V<pi>;
using vpl = V<pl>;
 
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define ins insert
#define pb push_back
#define eb emplace_back
 
#define sum(x) accumulate(all(x), 0LL)
#define mn(x) *min_element(all(x))
#define mx(x) *max_element(all(x))
 
 
#define mn_idx(x) (int)(min_element(all(x)) - (x).begin())
#define mx_idx(x) (int)(max_element(all(x)) - (x).begin())
 
#define ml map <ll,ll>
#define mi map<int,int>
#define si set<int>
#define sl set <ll>
 
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};
 
template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}
 
template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}
 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
#define lb(x,a) lower_bound(all(x),a)
#define ub(x,a) upper_bound(all(x),a)
tcT > int lwb(const V<T> &a, const T &b) { return int(lb(a, b) - begin(a)); }
tcT > int upb(const V<T> &a, const T &b) { return int(ub(a, b) - begin(a)); }
 
#define fp(i,j,k,l) for(ll i=j;i<k;i+=l)
#define fr(i, a, b) for (int i = (a); i < (b); ++i)
#define frz(i, a) fr(i, 0, a)
#define frd(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define each(a,x) for (auto &a : x)
 
ll MOD=998244353;
const ll BIG=1e18; 
const ld PI=acos((ld)-1);
 
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
 
 
constexpr int pct(int x) { return __builtin_popcount(x);}  //count 1s
constexpr int bits(int x) {  return x == 0 ? 0 : 31 - __builtin_clz(x);} //floor(log2(x))
constexpr int p2(int x) { return 1 << x; } //greatest power of 2 <=x
 
ll binpow(ll a, ll e, ll m) {a%=m;ll res=1;while(e>0) {if (e&1) res=res*a%m;a=a*a%m;e>>=1;}return res;}
bool is_square(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
bool is_prime(ll a){if (a<2) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1;}
bool powerof2(ll x) { return x && !(x & (x - 1));}
ll modinv(ll a, ll m = MOD) { return binpow(a, m - 2, m); }
 
ll cdiv(ll a, ll b) 
{return a / b + ((a ^ b) > 0 && a % b);} // divide a by b rounded up
ll fdiv(ll a, ll b) {
   return a / b - ((a ^ b) < 0 && a % b);} // divide a by b rounded down
 ll rmod(ll a, ll b) { return (a % b + b) % b; }
 // rmod: true modulo for negative values, always returns a result in [0, b) when b > 0 since in c++  %  is just the remainder operator
 
 tcT > bool ckmin(T &a, const T &b) {return b < a ? a = b, 1 : 0;}  // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b) {return a < b ? a = b, 1 : 0;}  // set a = max(a,b)
 
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
 
#define yes cout<<"YES"<<'
';
#define no cout<<"NO"<<'
';
#define yesno(x) cout << ((x) ? "YES
" : "NO
")
#define endl '
'
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '
';
#else
#define debug(x)
#endif
 
void solve(){
   ll n;
   cin>>n;
   vl a(n);
   cin >>a;
   ll d=0,x=0;
   ll m;
   ll i=0;
   ll k=n;
   while(!a.empty()){
if (a.back()>=a.front()){
    m=a.back();
    a.pop_back();}
 
else{
    m=a.front();
    a.erase(a.begin());}
if(i%2==0){d+=m;}
else{x+=m;}
   i++; }
   cout <<d<<" "<<x;
   
}
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
 // cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}
      
 
 
 
 
 
 
 