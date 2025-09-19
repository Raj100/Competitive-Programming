import sys

input = sys.stdin.readline

def inp():
    return int(input())

def inlt():
    return list(map(int, input().split()))

def insr():
    s = input()
    return list(s[:len(s) - 1])  

def invr():
    return map(int, input().split())

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

def solve():
    n = inp()
    arr = inlt()
    l,r=0,0
    for i in range(n):
        if n==arr[i]:
            break
    l,r=i-1,i+1
    for i in range(n-1,0,-1):
        if l>=0 and arr[l]==i:
            l-=1
        elif r<n and arr[r]==i:
            r+=1
        else:
            print("NO")
            return
    print("YES")

if __name__ == "__main__":
    # For multiple test cases
    num_test_cases = inp()
    for _ in range(num_test_cases):
        solve()

    # For a single test case
    # solve()