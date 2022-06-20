class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        tot = sum(nums)
        s=0
        for i in range(0, len(nums)):
            if 2*s + nums[i] == tot :
                return i
            s+=nums[i]
        return -1