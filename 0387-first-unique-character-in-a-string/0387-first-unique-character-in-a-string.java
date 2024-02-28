import java.util.HashMap; // import the HashMap class

class Solution {
    public int firstUniqChar(String s) {
        int rc = -1;
        HashMap<String, Integer> lettersInString = new HashMap<String, Integer>();
        for (char c : s.toCharArray()) {
            if (lettersInString.containsKey(String.valueOf(c))) {
                int counter = lettersInString.get(String.valueOf(c)) + 1;
                lettersInString.put(String.valueOf(c), counter);
            } 
            else {
                lettersInString.put(String.valueOf(c), 1);
            }
        }
        for (int x = 0; x < s.length(); x++)
        {
            if (lettersInString.get(String.valueOf(s.charAt(x))) == 1)
            {
                rc = x;
                return rc;
            }
        }
        return rc;
    }
}