class Solution:
    def minimumSwaps(self, nums: list[int]) -> int:
        l = 0
        r = len(nums)-1
        swap_count = 0
        while l < r:
            while l < r and nums[l] != 0:
                l += 1
            while l < r and nums[r] == 0:
                r -= 1

            if nums[l] == 0 and nums[r] != 0:
                swap_count += 1
                l+=1
                r-=1

        return swap_count
            

            