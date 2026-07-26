t=int(input())
for _ in range(t):
    n,s,x=list(map(int,input().split()))
    a=list(map(int,input().split()))
    i=sum(a)
    if i>s:
        print("NO")
    elif(s-i)%x==0:
        print("YES")
    else:
        print("NO")