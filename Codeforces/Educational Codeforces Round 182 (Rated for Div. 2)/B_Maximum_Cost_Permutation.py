import sys

def inp():
    return int(sys.stdin.readline())

def inlt():
    return list(map(int, sys.stdin.readline().split()))

def insr():
    s = sys.stdin.readline().strip()
    return list(s) 

def invr():
    return map(int, sys.stdin.readline().split())

def print_fast(s):
    sys.stdout.write(str(s) + '\n')

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

def solve():
    n = inp()
    arr = inlt()
    s= set(arr)
    l=[]
    cost=0
    for i in range(0,n):
        if(arr[i]==0):
            cost+=1
            if (i+1) not in s:
                arr[i]=i+1
            else:
                l.append(i)
    i=0
    while len(l)!=0 and i<n:
        if arr[i]==0:
            arr[i]=l[0]
            l.pop(0)
        i+=1
    l,r=0,0
    for i in range(n-1):
        if arr[i]>arr[i+1]:
            l=i
            break
    for i in range(n-1,0,-1):
        if arr[i]<arr[i-1]:
            r=i
            break
    # print(arr)
    print(cost+abs(l-r))

if __name__ == '__main__':
    t = inp()
    for _ in range(t):
        solve()