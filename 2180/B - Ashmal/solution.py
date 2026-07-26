t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(str,input().split()))
    s=a[0]
    if n==1:
        print(a[0])
        
    else:
        for i in range(1,n):
            if s+a[i]>a[i]+s:
                s=a[i]+s
            else:
                s+=a[i]
        print(s)
                
        