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
    a = inlt()
    n=a[0]
    k=a[1]
    arr = inlt()
    arr1 = inlt()
    arr.sort(reverse=True)
    arr1.sort()
    i,j=0,0
    s=0
    # print("n,k =",n,k)
    while(i<n and j<k):
        if j<k and i+arr1[j]-1 < n:
            start,end= i,i+arr1[j]-1
            # print(start,end)
            # for l in range(start,end):
            #     s+=arr[l]
            # print(s)
            s+=sum(arr[start:end])
        else:
            break      
        i+=arr1[j]
        j+=1
        # print("i,j=",i,j)
    s+=sum(arr[i:])
    print(s)

if __name__ == "__main__":
    num_test_cases = inp()
    for _ in range(num_test_cases):
        solve()

    # For a single test case
    # solve()