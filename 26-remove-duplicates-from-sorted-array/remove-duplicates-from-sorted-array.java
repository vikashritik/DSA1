class Solution {
    public int removeDuplicates(int[] nums) {
        int r = 0;
        int l = 0;
        int n = nums.length;
        while(r < n){
            nums[l] = nums[r];
            while(r < n && nums[l] == nums[r]){
                r ++;
            }
            l++;
        }
        return l;
    }
}