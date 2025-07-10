class Solution {
    public int thirdMax(int[] arr) {
        if (arr.length == 0) 
        return 0;
        Arrays.sort(arr);
      int note=arr[0];
        int index=1;
        for(int i=1;i<arr.length;i++){
            if(note!=arr[i]){
                arr[index]=arr[i];
                note=arr[i];
                index++;
            }
        }
        if(index<3){
            return arr[index-1];
        }
      return arr[index-3];     
  }
}