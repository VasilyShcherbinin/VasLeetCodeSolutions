class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        
        bool isAnagram = false;
        std::unordered_map<char, int> wordCharsS{};
        std::unordered_map<char, int> wordCharsT{};
        for (char c : t)
        {
            wordCharsS[c]++;
        }
        for (char c : s)
        {
            wordCharsT[c]++;
        }
        if (wordCharsS == wordCharsT)
        {
            isAnagram = true;
        }
        
        return isAnagram;
    }
};