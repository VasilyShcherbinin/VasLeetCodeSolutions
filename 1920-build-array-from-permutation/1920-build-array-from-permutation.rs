impl Solution {
    pub fn build_array(nums: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::with_capacity(nums.len());
        //let mut ans = vec![0; nums.len()];
        for i in 0..nums.len() {
            ans.push(nums[nums[i] as usize]);
            //ans[i] = nums[nums[i] as usize];
        }
        return ans;
    }
}