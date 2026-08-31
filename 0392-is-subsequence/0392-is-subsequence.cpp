class Solution {
public:
    bool isSubsequence(std::string s, std::string t)
    {
        
        int ptr1{ 0 };
        int ptr2{ 0 };

        while (ptr2 < t.length())
        {
            if (s[ptr1] == t[ptr2])
            {
                ptr1++;
            }
            ptr2++;
        }
     
        return ptr1 == s.length();
    }
};