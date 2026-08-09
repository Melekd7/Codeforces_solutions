#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using ll = long long;
#define tcT template <class T
#define tcTU tcT, class U
 
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vl = V<ll>;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define sum(x) accumulate(all(x), 0LL)
#define mn(x) *min_element(all(x))
#define mx(x) *max_element(all(x))
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
#define fp(i, j, k, l) for (ll i = j; i < k; i += l)
#define fr(i, a, b) for (int i = (a); i < (b); ++i)
#define frz(i, a) fr(i, 0, a)
#define frd(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define frdz(i, a) frd(i, 0, a)
#define rep(a) fr(_, a)
#define each(a, x) for (auto &a : x)
#define yesno(x) cout << ((x) ? "YES
" : "NO
")
#define endl '
'
tcT > void remDup(vector<T> &v) { sort(all(v)); v.erase(unique(all(v)), end(v)); }
 
void solve()
{
   vl a(3);
   cin >> a;
   sor(a);
   cout<<min(a[2]-a[0],a[1]) << '
';
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
 