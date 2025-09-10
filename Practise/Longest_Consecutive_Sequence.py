from typing import List
class Solution:
    def LongestConsecutiveSequence(self, nums)->int:
        ans =0 
        s= set(nums)
        for e in s:
            if e+1 not in s:
                i=e
                while(i in s):
                    i-=1
                ans= max(ans,e-i)
        return ans 
if __name__== "__main__":
    sol = Solution()
    print(sol.LongestConsecutiveSequence([1,5,6,8,0,-1]))