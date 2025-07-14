class Solution {
    public int reverse(int num) {
        long rev = 0;
        while(num!=0){
            int rem= num%10;
            num=num/10;
            rev = rev*10+rem;
            
        }
        if(rev < -2147483648 || rev> 2147483647){
        return 0;
    }
    return (int)rev;
        
    }
}