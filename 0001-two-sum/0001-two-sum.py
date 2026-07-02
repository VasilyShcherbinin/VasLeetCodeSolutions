class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        idx, idx_2 = 0, 0
        for i, num in enumerate(nums):
            needed = target - num
            if needed in seen:
               idx = seen[needed]
               idx_2=i 
            else:
                seen[num] = i      
        return (idx, idx_2)

        