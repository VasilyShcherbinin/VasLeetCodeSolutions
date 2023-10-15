import java.util.HashMap;
import java.util.regex.*;

class Solution {

    public String freqAlphabets(String s) {
        Map<String,Character> map = new HashMap();
        map.put("1", 'a');
        map.put("2", 'b');
        map.put("3", 'c');
        map.put("4", 'd');
        map.put("5", 'e');
        map.put("6", 'f');
        map.put("7", 'g');
        map.put("8", 'h');
        map.put("9", 'i');
        map.put("10#", 'j');
        map.put("11#", 'k');
        map.put("12#", 'l');
        map.put("13#", 'm');
        map.put("14#", 'n');
        map.put("15#", 'o');
        map.put("16#", 'p');
        map.put("17#", 'q');
        map.put("18#", 'r');
        map.put("19#", 's');
        map.put("20#", 't');
        map.put("21#", 'u');
        map.put("22#", 'v');
        map.put("23#", 'w');
        map.put("24#", 'x');
        map.put("25#", 'y');
        map.put("26#", 'z');

        Pattern hashPattern = Pattern.compile("[0-9]{2}#");
        Matcher patternMatcher = hashPattern.matcher(s);
        while (patternMatcher.find()) {
            String str = patternMatcher.group();
            s = s.replaceAll(str, map.get(str)+"");
        }

        for (char c : s.toCharArray()) {
            if (Character.isDigit(c)) {
                s = s.replaceAll(Character.toString(c), Character.toString(map.get(c+"")));
            }
        }

        return s;    
    }
}