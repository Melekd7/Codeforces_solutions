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
 
#define fp(i, j, k, l) for (ll i = j; i < k; i += l)
#define fr(i, a, b) for (ll i = (a); i < (b); ++i)
#define frz(i, a) fr(i, 0, a)
#define frd(i, a, b) for (ll i = (b) - 1; i >= (a); --i)
#define frdz(i, a) frd(i, 0, a)
 
ll rmod(ll a, ll b) { return (a % b + b) % b; }
 
 
 
void solve(){
    ll n,q;
    cin>>n>>q;
    vl a(n), b(n);
    cin>>a>>b;
    vl pre(n+1);
    ll maxb = 0;
    ll best = 0;
    frz(i,min(n,q)){
        pre[i + 1] = pre[i] + a[i];
        maxb = max(b[i], maxb);
        best = max(best, pre[i+1]+(q-i-1)*maxb);
    }
    cout << best << endl;
}
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
 
 
 
 