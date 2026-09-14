class Solution {
public:
    int findLHS(std::vector<int>& nums) {

        int longest{ 0 };

        std::unordered_map<int, int> frequency{};
        for (int i{ 0 }; i < nums.size(); i++)
        {
            if (frequency.contains(nums[i]))
            {
                frequency[nums[i]]++;
            }
            else
            {
                frequency[nums[i]]=1;
            }
        }

        // We get a map like {1:1
        //                    2:3
        //                    3:2
        //                    5:1
        //                    7:1

        for (const auto& [number, count] : frequency)
        {
            if (frequency.contains(number + 1))
            {
                longest = std::max(longest, count + frequency[number + 1]);
            }
        }

        return longest;
    }
};