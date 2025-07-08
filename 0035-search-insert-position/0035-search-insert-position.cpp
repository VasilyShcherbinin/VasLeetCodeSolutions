class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left_idx = 0;
        int right_idx = static_cast<int>(nums.size()) - 1;
        while (left_idx <= right_idx)
        {
            int midpoint_idx = (right_idx + left_idx) / 2;
            int midpoint_val = nums[static_cast<size_t>(midpoint_idx)];
            if (midpoint_val == target)
            {
                return midpoint_idx;
            }
            if (target < midpoint_val)
            {
                right_idx = midpoint_idx - 1;
            }
            else if (target > midpoint_val)
            {
                left_idx = midpoint_idx + 1;
            }
        }
        return left_idx;
    }
};