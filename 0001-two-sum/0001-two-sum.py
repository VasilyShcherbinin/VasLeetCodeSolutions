class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        idx = 0
        idx_2 = 1
        length = len(nums)
        while length>0:
            x = target - nums[idx]
            if x in nums[idx_2:]:
                idx_2 = nums.index(x, idx + 1)
                break
            else:
                idx = idx+1
                idx_2 = idx_2+1
                length = length-1
        return (idx, idx_2)


        