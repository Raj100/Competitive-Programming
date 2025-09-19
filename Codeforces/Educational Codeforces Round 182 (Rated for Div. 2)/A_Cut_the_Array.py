import sys

def inp():
    return int(sys.stdin.readline())

def inlt():
    return list(map(int, sys.stdin.readline().split()))

def insr():
    s = sys.stdin.readline().strip()
    return list(s) # Returns a list of characters for easier manipulation

def invr():
    return map(int, sys.stdin.readline().split())

# Optional: For faster output, especially with many lines
# def print_fast(s):
#     sys.stdout.write(str(s) + '\n')

# Common utility functions (add as needed)
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

# Main solution function
def solve():
    # Your code logic goes here
    n = inp()
    arr = inlt()
    s= set()
    l= [0,1,3]
    for i in range(n):
        arr[i]%=3
    l,r=1,2
    while (l<r and r<n):
            s1=sum(arr[:l])%3
            s2= sum(arr[l:r])%3
            s3=sum(arr[r:])%3
            if(s1==s2 and s2==s3):
                # print("1st")
                break
            elif(s1!=s2 and s2!=s3 and s3!=s1):
                # print("2nd")
                break
            else:
                if(r==(n-1) and l==(n-2)):
                    l,r=0,0
                    # print("3rd")
                    break
                elif(r==(n-1)):
                    l+=1
                    r=l+1
                else:
                    r+=1
    # print(s1,s2,s3)
    print(l,r)

# Call the solution function
if __name__ == '__main__':
    t = inp()
    for _ in range(t):
        solve()