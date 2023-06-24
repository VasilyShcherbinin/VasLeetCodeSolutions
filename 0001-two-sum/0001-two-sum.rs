impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut solution_vect = vec![];

        for i in 0..nums.len() {
            for j in (i + 1)..nums.len() {
                if nums[i] + nums[j] == target {
                    solution_vect.push(i as i32);
                    solution_vect.push(j as i32);
                }
            }
        }

        solution_vect
    }
}