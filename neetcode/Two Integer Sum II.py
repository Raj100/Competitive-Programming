from typing import List
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l,r=0,len(numbers)-1
        while(l<r):
            mid=(l+r)//2
            if (numbers[l]+numbers[r])==target:
                return [l+1,r+1]
            elif (numbers[l]+numbers[r])<target:
                l+=1
            else:
                r-=1
        return []
# learnings
# number[i]in tead of that and read question properly wheater to return index or the numbers
m= Solution()
print(m.twoSum([1,2,3,4],4))