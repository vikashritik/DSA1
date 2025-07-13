class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int i = 0,j = 0,ans = 0;

        unordered_map<char,int>mp;

        while(j < n){
            while(mp[s[j]] != 0){
                mp[s[i++]]--;
            }
            mp[s[j]]++;
            ans = max(ans,j - i +1);

            j++;
        }
        return ans;
    }
};