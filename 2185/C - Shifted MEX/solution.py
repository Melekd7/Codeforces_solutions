t=int(input())
for _ in range (t):
    n=int(input())
    a=list(map(int,input().split()))
    a=set(a)
    a=sorted(a)
    m=0
    x=0
    y=1
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if a[j]-a[i]==j-i:
                if j-i>m:
                    m=j-i
                    x=i
                    y=j
    print(m+1)