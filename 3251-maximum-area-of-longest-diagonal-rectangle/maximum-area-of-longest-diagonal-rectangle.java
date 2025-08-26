class Solution {
    public int areaOfMaxDiagonal(int[][] arr) {
        int n=arr.length;
        int maxArea=0;
        int maxDiag =0;
        for(int i=0;i<arr.length;i++){
           int l=arr[i][0];
           int w=arr[i][1]; 
           int currDiagonal = l * l + w * w;

            if( currDiagonal > maxDiag ||  (currDiagonal == maxDiag && l * w > maxArea) ) {
                maxDiag = currDiagonal;
                maxArea = l * w;
            }
        }
        return maxArea;
        }
    }
