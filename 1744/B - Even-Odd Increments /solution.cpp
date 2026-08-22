#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ll = long long;
using ld = long double;
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
using vc = vector<char>;
using umii = unordered_map<int, int>;
using umci = unordered_map<char, int>;
using umsi = unordered_map<string, int>;
using sc = set<char>;
#define si set<int>
#define sl set<ll>
#define sll set<pll>;
#define vvl vector<vector<int>>
 
// vectors
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define sum(x) accumulate(all(x), 0LL)
#define mn(x) *min_element(all(x))
#define mx(x) *max_element(all(x))
#define getv(v, n) for (int i = 0; i < n; i++) {  int x; cin >> x; v.pb(x); };
 
template <typename T = int>
using Pair = pair<T, T>;
vector<string> RET = {"NO", "YES"};
 
template <typename T = int>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}
 
template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (const T &x : v)
        out << x << ' ';
    return out;
}
 
// Pair Input (allows cin >> vector<pair<X, Y>>)
template <typename T, typename U>
istream &operator>>(istream &in, pair<T, U> &p)
{
    return in >> p.first >> p.second;
}
 
// Pair Output for Judges (Space-separated)
template <typename T, typename U>
ostream &operator<<(ostream &out, const pair<T, U> &p)
{
    return out << p.first << ' ' << p.second;
}
 
#define lb(x, a) lower_bound(all(x), a)
#define ub(x, a) upper_bound(all(x), a)
tcT > int lwb(const V<T> &a, const T &b) { return int(lb(a, b) - begin(a)); }
tcT > int upb(const V<T> &a, const T &b) { return int(ub(a, b) - begin(a)); }
 
// sets
#define ml map<ll, ll>
#define mi map<int, int>
 
// loops
#define fp(i, j, k, l) for (ll i = j; i < k; i += l)
#define fr(i, a, b) for (ll i = (a); i < (b); ++i)
#define frz(i, a) fr(i, 0, a)
#define frd(i, a, b) for (ll i = (b) - 1; i >= (a); --i)
#define frdz(i, a) frd(i, 0, a)
#define rep(a) fr(_, a)
#define each(a, x) for (auto &a : x)
 
const ll INF = 4e18;
const int MOD = 1e9 + 7; // or 998244353
const int MX = 3e5 + 5;
const ld PI = acos((ld)-1);
 
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;
 
// bitwise ops
// Type: int (Count of set 1-bits, works for int & long long)
template <typename T>
constexpr int pct(T x) { return sizeof(T) <= 4 ? __builtin_popcount(x) : __builtin_popcountll(x); }
 
// Type: int (0-indexed position of Highest Set Bit MSB, returns -1 if x == 0)
template <typename T>
constexpr int topbit(T x) { return x == 0 ? -1 : (sizeof(T) <= 4 ? 31 - __builtin_clz(x) : 63 - __builtin_clzll(x)); }
 
// Type: int (0-indexed position of Lowest Set Bit LSB, returns -1 if x == 0)
template <typename T>
constexpr int lowbit(T x) { return x == 0 ? -1 : (sizeof(T) <= 4 ? __builtin_ctz(x) : __builtin_ctzll(x)); }
 
// Type: long long (Calculates 2^x, 64-bit safe)
constexpr long long p2(int x) { return 1LL << x; }
 
// Type: long long (Mask of x ones: e.g. msk2(3) = 7 [0b111], 64-bit safe)
constexpr long long msk2(int x) { return p2(x) - 1LL; }
 
ll binpow(ll a, ll e, ll m)
{
    a %= m;
    ll res = 1;
    while (e > 0)
    {
        if (e & 1)
            res = res * a % m;
        a = a * a % m;
        e >>= 1;
    }
    return res;
}
 
ll modinv(ll a, ll m = MOD) { return binpow(a, m - 2, m); }
bool issquare(ll w) { return trunc(sqrt(w)) * trunc(sqrt(w)) == w; }
 
bool isprime(ll a)
{
    if (a < 2)
        return 0;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return 0;
    return 1;
}
 
ll cdiv(ll a, ll b)
{
    return a / b + ((a ^ b) > 0 && a % b);
} // divide a by b rounded up
ll fdiv(ll a, ll b)
{
    return a / b - ((a ^ b) < 0 && a % b);
} // divide a by b rounded down
ll rmod(ll a, ll b) { return (a % b + b) % b; }
 
tcTU > T fstTrue(T lo, T hi, U f)
{
    ++hi;
    assert(lo <= hi); // assuming f is increasing
    while (lo < hi)
    { // find first index such that f is true
        T mid = lo + (hi - lo) / 2;
        f(mid) ? hi = mid : lo = mid + 1;
    }
    return lo;
}
tcTU > T lstTrue(T lo, T hi, U f)
{
    --lo;
    assert(lo <= hi); // assuming f is decreasing
    while (lo < hi)
    { // find first index such that f is true
        T mid = lo + (hi - lo + 1) / 2;
        f(mid) ? lo = mid : hi = mid - 1;
    }
    return lo;
}
tcT > void remDup(vector<T> &v)
{ // sort and remove duplicates
    sort(all(v));
    v.erase(unique(all(v)), end(v));
}
tcTU > void safeErase(T &t, const U &u)
{
    auto it = t.find(u);
    assert(it != end(t));
    t.erase(it);
}
#define bit(x, i) (((x) >> (i)) & 1)
#define uniq(x) (x).erase(unique(all(x)), (x).end())
using tiii = tuple<int, int, int>;
 
#define yes cout << "YES" << '
';
#define no cout << "NO" << '
';
#define yesno(x) cout << ((x) ? "YES
" : "NO
")
#define endl '
'
bool powerof2(ll x) { return x && !(x & (x -1)); }
 
 
void solve(){
    ll n,q;
    cin >> n >> q;
    vl a(n);
    cin >> a;
    ll c, d;
    ll e = 0 ,o=0;
    ll s = sum(a);
    frz(i,n){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    frz(i,q){
        cin >> c >> d;
        if (c == 0){
            s += e * d;
            cout << s << endl;
            if(d%2==1){
                o =n;
                e =0;
            }
        }
        else{
            s += o * d;
            cout << s << endl;
            if(d%2==1){
                o =0;
                e =n;
            }
        }
        }}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '
';
#else
#define debug(x)
#endif
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}