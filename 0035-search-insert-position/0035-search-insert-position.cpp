class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left_idx = 0;
        int right_idx = static_cast<int>(nums.size()) - 1;
        while (left_idx <= right_idx)
        {
            int midpoint_idx = (right_idx + left_idx) / 2;
            if (nums[midpoint_idx] == target)
            {
                return midpoint_idx;
            }
            if (target < nums[midpoint_idx])
            {
                right_idx = midpoint_idx - 1;
            }
            else if (target > nums[midpoint_idx])
            {
                left_idx = midpoint_idx + 1;
            }
        }
        return left_idx;
    }
};