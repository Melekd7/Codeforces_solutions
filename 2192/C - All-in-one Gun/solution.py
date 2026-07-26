import sys
input = sys.stdin.buffer.read().split()
 
def solve():
    idx = 0
    t = int(input[idx]); idx += 1
    out = []
 
    for _ in range(t):
        n = int(input[idx]); h = int(input[idx+1]); k = int(input[idx+2]); idx += 3
        a = [0] + [int(input[idx+i]) for i in range(n)]; idx += n
 
        # prefix sums
        pref = [0] * (n + 1)
        for i in range(1, n + 1):
            pref[i] = pref[i-1] + a[i]
        S = pref[n]
 
        # prefix min
        pre_min = [0] * (n + 1)
        pre_min[1] = a[1]
        for i in range(2, n + 1):
            pre_min[i] = min(pre_min[i-1], a[i])
 
        # suffix max
        NEG_INF = -10**18
        suf_max = [NEG_INF] * (n + 2)
        suf_max[n] = a[n]
        for i in range(n-1, 0, -1):
            suf_max[i] = max(suf_max[i+1], a[i])
 
        ans = 10**18
 
        for m in range(1, n + 1):
            best = pref[m]
 
            if m < n:
                improve = suf_max[m+1] - pre_min[m]
                if improve > 0:
                    best += improve
 
            if best >= h:
                if m < ans:
                    ans = m
            else:
                need = h - best
                q = (need + S - 1) // S
                time = q * (n + k) + m
                if time < ans:
                    ans = time
 
        out.append(ans)
 
    sys.stdout.write("
".join(map(str, out)))
 
solve()