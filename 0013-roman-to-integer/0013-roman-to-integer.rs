use std::collections::HashMap;

impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let roman_to_int_map: HashMap<char, i32> = [
            ('I', 1),
            ('V', 5),
            ('X', 10),
            ('L', 50),
            ('C', 100),
            ('D', 500),
            ('M', 1000),
        ]
        .iter()
        .cloned()
        .collect();

        let mut result = 0;
        let mut it = s.chars().peekable();

        while let Some(roman_char) = it.next() {
            let mut value = *roman_to_int_map.get(&roman_char).unwrap();
            
            if let Some(&next_char) = it.peek() {
                let next_value = *roman_to_int_map.get(&next_char).unwrap();
                if next_value > value {
                    value = next_value - value;
                    it.next();
                }
            }
            
            result += value;
        }
        
        print!("{result}");
        result
    }
}