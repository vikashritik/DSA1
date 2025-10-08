class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] arr = new int[m + n];
        
        // Copy all elements from nums1 (only first m elements are valid)
        for (int i = 0; i < m; i++) {
            arr[i] = nums1[i];
        }
        
        // Copy all elements from nums2
        for (int j = 0; j < n; j++) {
            arr[m + j] = nums2[j];
        }
        
        // Sort the merged array
        Arrays.sort(arr);
        
        // Copy the sorted array back to nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
    }
}