class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            return nums[n-k];
        }
        return -1;
    }

};