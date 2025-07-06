class Solution {
    public int[] searchRange(int[] arr, int target) {
       int start=0;
       int end=arr.length-1;
        int[] result = new int[]{-1, -1};
        if (arr.length == 0) {
            return result;
        }
       while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            end = mid-1;
            result[0]=mid ;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
       }
       start=0;
       end=arr.length-1;
       while(start<=end){
         int mid=start+(end-start)/2;
        if(arr[mid]==target){
            start= mid+1;
            result[1]=mid ;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
       }
       return result;

    }
}