impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
      let mut commonprefix:Vec<char> = Vec::new();
      if let Some(first_string) = strs.get(0) {
        for (i, char1) in first_string.chars().enumerate() {
            let mut found_in_all = true;
            for string in strs.iter().skip(1) {
                if let Some(char2) = string.chars().nth(i) {
                    if char2 != char1 {
                        found_in_all = false;
                        break;
                    }
                } else {
                    found_in_all = false;
                    break;
                }
            }
            if found_in_all {
                commonprefix.push(char1);
            } else {
                break;
            }
        }
      }

      let solution: String = commonprefix.into_iter().collect();
      if solution.len() == 0 {
        return "".to_string();
      }
      else{
        return solution;
      }
    }
}