class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = {}
        result = True
        for index, value in enumerate(nums):
            seen[value]=index
        if len(seen) == len(nums):
            result = False    
        return result
