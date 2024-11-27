import java.util.HashMap;
class Solution {
    public boolean equalFrequency(String word) {
         // Step 1: Count the frequency of each character in the word
        Map<Character, Integer> freqMap = new HashMap<>();
        for (char c : word.toCharArray()) {
            freqMap.put(c, freqMap.getOrDefault(c, 0) + 1);
        }

        // Step 2: Count the frequency of those frequencies
        Map<Integer, Integer> countMap = new HashMap<>();
        for (int freq : freqMap.values()) {
            countMap.put(freq, countMap.getOrDefault(freq, 0) + 1);
        }

        // Step 3: Check if one removal can make all frequencies equal
        if (countMap.size() == 1) {
            // All characters have the same frequency, so removing one character works
            return countMap.containsKey(1) || freqMap.size() == 1;
        }

        if (countMap.size() == 2) {
            int[] keys = new int[2];
            int index = 0;
            for (int key : countMap.keySet()) {
                keys[index++] = key;
            }

            int freq1 = keys[0], freq2 = keys[1];
            if ((countMap.get(freq1) == 1 && (freq1 - 1 == freq2 || freq1 - 1 == 0)) ||
                (countMap.get(freq2) == 1 && (freq2 - 1 == freq1 || freq2 - 1 == 0))) {
                return true;
            }
        }

        return false;
    }
}