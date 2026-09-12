class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int leftPtr{ 0 };
        int rightPtr{ 1 };

        // if leftPtr = 0 and rightPtr != 0, then swap. Set leftPtr to +1 and rightPtr to +1
        // if leftPtr = 0 and rightPtr == 0, move rightPtr right until its non zero. Then swap.

        while (rightPtr < nums.size())
        {
            if (nums[leftPtr] == 0)
            {
                while (nums[rightPtr] == 0 && rightPtr != nums.size() - 1)
                {
                    rightPtr++;
                }
                std::swap(nums[leftPtr], nums[rightPtr]);
                leftPtr++;
                rightPtr = leftPtr + 1;
            }
            else
            {
                while (nums[leftPtr] != 0 && leftPtr != nums.size()-1)
                {
                    leftPtr++;
                    rightPtr++;
                }
            }
        }
    }
};