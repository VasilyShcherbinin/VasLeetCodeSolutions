class Solution:
    def isPalindrome(self, x: int) -> bool:
        x_str = str(x)
        counter1 = 0
        counter2 = len(x_str)-1
        result = True
        while counter1 < counter2:
            value1 = x_str[counter1]
            value2 = x_str[counter2]
            if value1 == value2:
                result = True
                counter1 = counter1+1
                counter2 = counter2-1
            else:
                result = False
                break
        return result