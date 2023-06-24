impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        let mut output = false;
        let mut x_string: String = x.to_string();
        let x_string_len = x_string.len();
        // String is even number length
        if x_string_len % 2 == 0 {
            let (half1, half2) = x_string.split_at(x_string_len/2);
            if half1 == half2.chars().rev().collect::<String>() {
                output = true;
            }				        
        }
        else {
            // Remove the mid character
            x_string.remove(x_string_len/2);
            let (half1, half2) = x_string.split_at(x_string_len/2);
            if half1 == half2.chars().rev().collect::<String>() {
                output = true;
            }	
        }
        return output;
    }
}