class Solution {
    public int maxProfit(int[] prices) {
       int maxprofit=0;
       int best_buy=prices[0]; 
       for(int i=1;i<prices.length;i++){
       if(prices[i]<best_buy){
        best_buy=Math.min(best_buy,prices[i]);
           
           
         }
         maxprofit=Math.max(maxprofit,prices[i]-best_buy);
       }
      return maxprofit;
    }
}