from typing import List

# M-1
class Solution:
    def __init__(self):
        self.ans=[]

    def recursion(self, rec:List[int], a:List[int]):
        if (len(rec)==0):
            self.ans.append(a[:])
            return
        
        self.recursion(rec[1:],a)
        e = rec[0]
        a.append(e)
        self.recursion(rec[1:],a)
        a.pop()

    def subsets(self, nums: List[int]) -> List[List[int]]:
        # for i in range(len(nums)):
        #     for j in range(len(nums)):
        a=[]
        self.recursion(nums,a)
        return self.ans

obj = Solution()
print(obj.subsets([1,2,3,4]))

# M-2


