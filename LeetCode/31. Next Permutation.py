class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        i=n-2
        while (i>=0):
            if(nums[i]<nums[i-1]):
                break
            i-=1
        if i==-1:
            return nums.sort()
        
        else:
            j=n-1
            while(nums[j]<nums[i]):
                j-=1
            temp = nums[j]
            nums[j] = nums[i]
            nums[i]=temp
            partial = nums[i+1:]
            partial.sort()
            nums[i+1:]=partial
        return nums
        
obj= Solution()
l=[1,2,3,4]
print(obj.nextPermutation(l))