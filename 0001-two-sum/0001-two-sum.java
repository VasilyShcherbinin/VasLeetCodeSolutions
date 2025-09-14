import java.util.Hashtable;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Hashtable<Integer, Integer> ht = new Hashtable<>();
        int[] answer = new int[2];
        for (int i = 0; i < nums.length; i++)
        {
            int difference = target - nums[i];
            if(ht.containsKey(difference))
            {
                answer[0] = ht.get(difference);
                answer[1] = i;
                break;
            }
            ht.put(nums[i], i);
        }
        return answer;
    }
}