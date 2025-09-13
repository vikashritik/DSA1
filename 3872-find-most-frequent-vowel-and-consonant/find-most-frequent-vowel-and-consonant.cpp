class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26];
        int maxVowel = 0;
        int maxConso = 0;
        for (int i =0;i<s.size();i++) {
            int j = s[i]- 'a';
            freq[j]++;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                maxVowel = max(maxVowel, freq[j]);
            }
            else {
                maxConso = max(maxConso, freq[j]);
            }
        }
        return maxVowel + maxConso;
    }
};