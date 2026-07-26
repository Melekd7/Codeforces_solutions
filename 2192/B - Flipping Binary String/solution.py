import sys
input = sys.stdin.buffer.read().split()
 
def solve():
    idx = 0
    t = int(input[idx]); idx += 1
    out = []
 
    for _ in range(t):
        n = int(input[idx]); idx += 1
        s = input[idx].decode(); idx += 1
 
        ones  = [i+1 for i in range(n) if s[i] == '1']
        zeros = [i+1 for i in range(n) if s[i] == '0']
 
        c1 = len(ones)
        c0 = len(zeros)
 
        # Case A: choose T = ones, need c1 even
        if c1 % 2 == 0:
            out.append(str(c1))
            out.append(" ".join(map(str, ones)) if ones else "")
        # Case B: choose T = zeros, need c0 odd
        elif c0 % 2 == 1:
            out.append(str(c0))
            out.append(" ".join(map(str, zeros)) if zeros else "")
        else:
            out.append("-1")
 
    sys.stdout.write("
".join(out) + "
")
 
solve()