class Solution {
public:
    bool checkPalindrome(const std::string& s, int leftPtr, int rightPtr)
    {
        while (leftPtr < rightPtr)
        {
            if (s[leftPtr] != s[rightPtr])
            {
                return false;
            }

            leftPtr++;
            rightPtr--;
        }

        return true;
    }

    bool validPalindrome(std::string s)
    {
        int leftPtr{0};
        int rightPtr{static_cast<int>(s.length()) - 1};

        while (leftPtr < rightPtr)
        {
            if (s[leftPtr] == s[rightPtr])
            {
                leftPtr++;
                rightPtr--;
            }
            else
            {
                // Try removing the left character or the right character.
                return checkPalindrome(s, leftPtr + 1, rightPtr) ||
                       checkPalindrome(s, leftPtr, rightPtr - 1);
            }
        }

        return true;
    }
};