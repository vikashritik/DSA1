class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n= arr.size();
        k = k%n;
       reverse(arr,0,n-1);
       reverse(arr,0,k-1);
       reverse(arr,k,n-1);
    }

       void reverse(vector<int>& arr, int i, int j){
        while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
        }  
    }
};