class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;

        // Count how many zeros to duplicate
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) zeros++;
        }

        // Work backwards
        if (zeros != 0)
        {
            for (int i = n - 1; i >= 0; i--) {
                if (arr[i] == 0) {
                    if (i + zeros < n) arr[i + zeros] = 0;
                    zeros--;
                    if (i + zeros < n) arr[i + zeros] = 0; // duplicate
                } else {
                    if (i + zeros < n) arr[i + zeros] = arr[i];
                }
            }
        }
    }
};