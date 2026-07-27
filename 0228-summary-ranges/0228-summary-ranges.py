class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        result = []
        templist = []

        if not nums:
            return result

        for i in range(len(nums) - 1):
            if nums[i + 1] - nums[i] == 1:
                templist.append(nums[i])
            else:
                templist.append(nums[i])

                if templist[0] != templist[-1]:
                    result_str = str(templist[0]) + "->" + str(templist[-1])
                else:
                    result_str = str(templist[0])

                result.append(result_str)
                templist = []

        # Add the final number, which the loop does not process
        templist.append(nums[-1])

        if templist[0] != templist[-1]:
            result_str = str(templist[0]) + "->" + str(templist[-1])
        else:
            result_str = str(templist[0])

        result.append(result_str)

        return result