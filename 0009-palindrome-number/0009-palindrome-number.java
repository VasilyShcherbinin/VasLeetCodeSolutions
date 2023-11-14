import static java.lang.Boolean.FALSE;
import static java.lang.Boolean.TRUE;

class Solution {
    public boolean isPalindrome(int x) {
        String originalString = Integer.toString(x);
        String reverseString = new StringBuilder(originalString).reverse().toString();
        if (originalString.equals(reverseString)) {
            return TRUE;
        }
        return FALSE;
    }
}