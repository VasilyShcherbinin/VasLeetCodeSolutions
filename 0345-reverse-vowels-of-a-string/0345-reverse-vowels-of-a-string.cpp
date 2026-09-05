class Solution {
public:
    std::string reverseVowels(std::string s) {
        
        // Start with pointer in the beginning and pointer in the end.
        // Move pointers until they point to a vowel
        // Switch positions of the vowels
        // Move on until pointers meet or left pointer exceeds right pointer

        auto leftPtr{ 0 };
        auto rightPtr{ static_cast<int>(s.length()) - 1 };
        const std::unordered_set<char> vowels {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U'
        };
        while (leftPtr < rightPtr)
        {
            if (!vowels.contains(s[leftPtr]))
            {
                leftPtr++;
            }
            else if (!vowels.contains(s[rightPtr]))
            {
                rightPtr--;
            }
            else
            {
                std::swap(s[leftPtr], s[rightPtr]);
                leftPtr++;
                rightPtr--;
            }
        }

        return s;
    }
};