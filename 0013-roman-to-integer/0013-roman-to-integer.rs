use std::collections::HashMap;

impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let mut result = 0;
        let mut roman_to_int_map: HashMap<char, i32> = HashMap::new();
        roman_to_int_map.insert('I', 1);
        roman_to_int_map.insert('V', 5);
        roman_to_int_map.insert('X', 10);
        roman_to_int_map.insert('L', 50);
        roman_to_int_map.insert('C', 100);
        roman_to_int_map.insert('D', 500);
        roman_to_int_map.insert('M', 1000);

        let mut it = s.chars().peekable();
        while let Some(roman_char) = it.next() {
            let mut value: i32= 0;
            if roman_char == 'I' {
                value = *roman_to_int_map.get(&roman_char).unwrap();
                if it.peek().is_none() != true {
                    if it.peek().unwrap() == &'V' {
                        value = *roman_to_int_map.get(&'V').unwrap() - *roman_to_int_map.get(&roman_char).unwrap();
                        it.next();
                    }
                    else if it.peek().unwrap() == &'X' {
                        value = *roman_to_int_map.get(&'X').unwrap() - *roman_to_int_map.get(&roman_char).unwrap();
                        it.next();
                    }
                }
            }
            else if roman_char == 'X' {
                value = *roman_to_int_map.get(&roman_char).unwrap();
                if it.peek().is_none() != true {
                    if it.peek().unwrap() == &'L' {
                        value = *roman_to_int_map.get(&'L').unwrap() - *roman_to_int_map.get(&roman_char).unwrap();
                        it.next();
                    }
                    else if it.peek().unwrap() == &'C' {
                        value = *roman_to_int_map.get(&'C').unwrap() - *roman_to_int_map.get(&roman_char).unwrap();
                        it.next();
                    }
                }
            }
            else if roman_char == 'C' {
                value = *roman_to_int_map.get(&roman_char).unwrap();
                if it.peek().is_none() != true {
                    if it.peek().unwrap() == &'D' {
                        value = *roman_to_int_map.get(&'D').unwrap() - *roman_to_int_map.get(&roman_char).unwrap();
                        it.next();
                    }
                    else if it.peek().unwrap() == &'M' {
                        value = *roman_to_int_map.get(&'M').unwrap() - *roman_to_int_map.get(&roman_char).unwrap();
                        it.next();
                    }
                }
            }
            else {
                value = *roman_to_int_map.get(&roman_char).unwrap();
            }
            result += value;
        }
        print!("{result}");
        return result;
    }
}