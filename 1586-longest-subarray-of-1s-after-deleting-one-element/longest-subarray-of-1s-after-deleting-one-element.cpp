class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int ans = 0,cur = 0,j = 0;
        bool fl = true;

        for(int i = 0;i < n;i ++){
            if(nums[i] == 1){
                cur ++;
            }
            else{
                if(fl){
                    fl = false;
                }
                else{
                    while(nums[j] != 0){
                        j++;
                        cur --;
                    }
                    j++;
                }
            }
            ans = max(ans,cur);
        }
        if(ans == n) return n-1;
        return ans;
    }
};