class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) 
        return false;

        int original = x;
        int rev = 0;

        while (x != 0) {
            int remainder = x % 10;
            rev = rev * 10 + remainder;
            x = x / 10;
        }
        if (original == rev) {
            return true;
        } else {
            return false;
        }
    }
}
