class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = {}
        result = False
        for index, value in enumerate(nums):
            if value in seen:
                result = True
                break
            else:
                seen[value]=index

        return result
