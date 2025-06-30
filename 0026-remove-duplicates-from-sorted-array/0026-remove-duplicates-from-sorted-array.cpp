class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueNums;
        for (int i : nums)
        {
            uniqueNums.insert(i);
        }
        nums = vector<int>(uniqueNums.begin(), uniqueNums.end());
        return nums.size();
    }
};