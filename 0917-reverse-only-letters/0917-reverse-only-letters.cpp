class Solution {
public:
    std::string reverseOnlyLetters(std::string s) {
        
        auto leftPtr{ 0 };
        auto rightPtr{ static_cast<int>(s.length() - 1) };

        while (leftPtr < rightPtr)
        {
            if (!isalpha(s[leftPtr]))
            {
                leftPtr++;
            }
            else if (!isalpha(s[rightPtr]))
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