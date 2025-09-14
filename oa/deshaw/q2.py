ans=[]
def sub (s="AMMMNZ"):
    l=list(s)
    a=""
    rec(l,a)
    print(ans)
    count=0
    for e in ans:
        if e=="AMZ":
            # print(e)
            count+=1
    if count>0:
        print(count*2)
    else:
        c1,c2=0,0
        for e in ans:
            if e=="AM":
                c1+=1
        for e in ans:
            if e=="MZ":
                c2+=1
        ans1=max(c1,c2)
        print(ans1)
def rec(l,a):
    if len(l)==0:
        ans.append(a)
        return 
    rec(l[1:],a)
    a+=(l[0])
    rec(l[1:],a)
sub()