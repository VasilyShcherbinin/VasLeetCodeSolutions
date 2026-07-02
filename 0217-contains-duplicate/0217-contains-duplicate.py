class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        result = False
        for value in nums:
            if value in seen:
                result = True
                break
            else:
                seen.add(value)
        return result
