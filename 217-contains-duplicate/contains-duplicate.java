import static java.lang.Boolean.FALSE;
import static java.lang.Boolean.TRUE;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        for (int i = 0; i < nums.length-1; i++) {
            if (nums[i] == nums[i+1]) {
                return TRUE;
            }
        }
        return FALSE;
    }
}