class Solution {
public:
    std::string reverseWords(std::string s) {
        
        auto leftPtr{ 0 };
        auto rightPtr{ 0 };
        auto whiteSpacePtr{ 0 };
        bool endOfWord = false;

        while (whiteSpacePtr <= s.length())
        {
            if (endOfWord != true)
            {
                if (!std::isspace(s[whiteSpacePtr]))
                {
                    whiteSpacePtr++;
                    if (whiteSpacePtr == s.length())
                    {
                        endOfWord = true;
                    }
                }
                else
                {
                    endOfWord = true;
                }
            }
            else
            {
                rightPtr = whiteSpacePtr - 1;
                while (leftPtr < rightPtr)
                {
                    std::swap(s[leftPtr], s[rightPtr]);
                    leftPtr++;
                    rightPtr--;
                }
                leftPtr = whiteSpacePtr + 1;
                rightPtr = leftPtr;
                whiteSpacePtr++;
                endOfWord = false;
            }
        }

        return s;
    }
};