from functools import cache
import time
import math
from typing import Optional
n=6

# def fib(x):
#     if x<=1:
#         return 1
#     return fib(x-1)+fib(x-2)
# start_time= time.time()
# print(fib(n))
# end_time = time.time()
# recursion = start_time - end_time
# print("Execution Time:",recursion)

# 0 1 1 2 3 5 8 13 21 34 55 89
# 1 2 3 4 5 6 7 8  9  10 11 12

class Raj():
    @cache
    def fib(self, x):
        if x<=1:
            return 1
        return self.fib(x-1)+self.fib(x-2)
ob=Raj()
start_time= time.time()
print(ob.fib(n))
end_time = time.time()
cached_recursion= start_time - end_time
print("Execution Time:",cached_recursion)

class Raj1():
    def fib(self, n:int)->int:
        memo={0:0,1:1}
        def f(n):
            if n in memo:
                return memo[n]
            
            memo[n]= f(n-1)+f(n-2)
            return memo[n]
        
        return f(n)
    
ob1=Raj1()
start_time= time.time()
print(ob1.fib(n))
end_time = time.time()
cached_recursion= start_time - end_time
print("Execution Time:",cached_recursion)

def fibo(n):
    sqrt_5= math.sqrt(5)

    f=(sqrt_5+1)/2
    s=(sqrt_5-1)/2

    ans= (f**n - s**n)//n
    return ans

start_time= time.time()
print(fibo(n))
end_time = time.time()
cached_recursion= start_time - end_time
print("Execution Time:",cached_recursion)
