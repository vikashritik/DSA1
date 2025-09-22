class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int currentFreq = 1;
        int maxFreq = 0;
        int countNumbers = 0;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                currentFreq++;
            } else {
                if (currentFreq > maxFreq) {
                    maxFreq = currentFreq;
                    countNumbers = 1;
                } else if (currentFreq == maxFreq) {
                    countNumbers++;
                }
                currentFreq = 1;
            }
        }
        
        if (currentFreq > maxFreq) {
            maxFreq = currentFreq;
            countNumbers = 1;
        } else if (currentFreq == maxFreq) {
            countNumbers++;
        }
        
        return maxFreq * countNumbers;

    }
};