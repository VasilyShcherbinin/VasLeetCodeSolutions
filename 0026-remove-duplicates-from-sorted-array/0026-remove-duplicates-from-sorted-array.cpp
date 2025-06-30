class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueNums;
        if (!nums.empty()) {
            uniqueNums.insert(nums[0]);
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] != nums[i - 1]) {
                    uniqueNums.insert(nums[i]);
                }
            }
        }
        nums = vector<int>(uniqueNums.begin(), uniqueNums.end());
        return nums.size();
    }
};