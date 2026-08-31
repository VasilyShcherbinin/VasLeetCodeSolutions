class Solution 
{
public:
    bool isHappy(int n) 
    {
        std::unordered_set<int> seenNumbers{};
        while (n != 1) 
        {
            if (seenNumbers.contains(n)) {
                return false; // We have seen n before, so the cycle will repeat
            }

            seenNumbers.insert(n);

            int sum{ 0 };
            while (n > 0) 
            {
                int digit{ n % 10 };
                sum += pow(digit, 2);
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};