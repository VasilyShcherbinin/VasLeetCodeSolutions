class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        result = []
        start = 0

        for end in range(len(nums)):
            # Keep going if the next number is consecutive
            if end + 1 < len(nums) and nums[end + 1] == nums[end] + 1:
                continue

            # Otherwise, the current range ends here
            if start == end:
                result.append(str(nums[start]))
            else:
                result.append(f"{nums[start]}->{nums[end]}")

            # The next range starts after end
            start = end + 1

        return result