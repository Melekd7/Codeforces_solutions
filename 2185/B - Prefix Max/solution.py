t=int(input())
for _ in range (t):
    n=int(input())
    a=list(map(int,input().split()))
    m=max(a)
    print(m*n)