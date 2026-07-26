#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        vector<pair<int,long long>> ops(m);
        for (int i = 0; i < m; i++) {
            cin >> ops[i].first >> ops[i].second;
            ops[i].first--; // 0-indexed
        }
 
        // Find the last crash by scanning forwards with prefix sums per index
        // Use a delta array to track cumulative additions since last reset
        // Scan forward, track additions per index, detect crash
 
        // We need to find the last index `last_crash` such that
        // after operation last_crash, array exceeds h.
        // Then replay ops[last_crash+1 .. m-1] on original a.
 
        // To find last crash efficiently:
        // Go backwards: simulate from the end, find last op that causes crash.
 
        // Forward scan with a map of current additions (reset-aware):
        // Use a "current additions" array, reset it when crash detected.
        // But naive reset is O(n) again.
 
        // Better: scan backwards from last op.
        // After last crash, the array is reset to `a`.
        // So we only need to find the LAST op i where:
        //   a[ops[i].first] + sum of ops[j].second for j in [last_crash+1..i]
        //   where ops[j].first == ops[i].first  > h
        // This is complex. Instead:
 
        // Scan forward but track per-index running sum since last reset.
        // When crash: clear the running sums map (O(distinct indices touched))
        // Total work = O(m) amortized since each op is added once and cleared once.
 
        vector<long long> extra(n, 0); // additions since last reset
        vector<int> touched;           // indices modified since last reset
        int last_crash = -1;
 
        for (int i = 0; i < m; i++) {
            int idx = ops[i].first;
            long long val = ops[i].second;
 
            if (extra[idx] == 0) touched.push_back(idx);
            extra[idx] += val;
 
            if (a[idx] + extra[idx] > h) {
                // crash: reset extra
                for (int j : touched) extra[j] = 0;
                touched.clear();
                last_crash = i;
            }
        }
 
        // Replay ops after last_crash on original array
        vector<long long> f = a;
        for (int i = last_crash + 1; i < m; i++) {
            f[ops[i].first] += ops[i].second;
        }
 
        for (int i = 0; i < n; i++) {
            cout << f[i];
            if (i < n - 1) cout << ' ';
        }
        cout << '
';
    }
 
    return 0;
}