class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        mp={0:0,1:0,2:0}
        ans=[]
        for e in nums:
            mp[e]=mp.get(e,0)+1
        # 0-> 0 to  mp[0]-1
        # 1-> mp[0] to mp[0] + mp[1]-1
        # 2-> mp[0] + mp[1] to mp[0] + mp[1] +mp[2]-1
        nums[:mp[0]-1]=[0]*mp[0]
        nums[mp[0]:mp[0]+mp[1]-1] = [1]*mp[1]
        nums[mp[0]+mp[1]:]= [2]*mp[2]




# class Solution(object):
#     def sortColors(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: None Do not return anything, modify nums in-place instead.
#         """
#         n=len(nums)
#         i=0
#         while(i <(n)):
#             c=nums[i]
#             if c ==0:
#                 del nums[i]
#                 i+=1
#                 nums.insert(0,0)
#             if c==2:
#                 del nums[i]
#                 nums.insert(n-1,2)