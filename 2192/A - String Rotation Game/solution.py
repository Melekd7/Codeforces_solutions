import sys
input = sys.stdin.buffer.read().split()
 
def solve():
    idx = 0
    t = int(input[idx]); idx += 1
    out = []
 
    for _ in range(t):
        n = int(input[idx]); idx += 1
        s = input[idx].decode(); idx += 1
 
        if n == 1:
            out.append("1")
            continue
 
        transitions = sum(1 for i in range(n) if s[i] != s[(i+1) % n])
        out.append(str(min(transitions + 1, n)))
 
    sys.stdout.write("
".join(out) + "
")
 
solve()