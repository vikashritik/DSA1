class Solution {
    public String addStrings(String num1, String num2) {
        StringBuilder str = new StringBuilder();
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        
        // Process both strings while both have digits
        while (i >= 0 && j >= 0) {
            int number_1 = num1.charAt(i) - '0';
            int number_2 = num2.charAt(j) - '0';
            number_1 += number_2;
            number_1 += carry;

            carry = number_1 / 10;
            int bit = number_1 % 10;

            char c = (char)('0' + bit);
            str.append(c);
            i--;
            j--;
        }
        
        // Process remaining digits of num1
        while (i >= 0) {
            int number_1 = num1.charAt(i) - '0';
            number_1 += carry;
            carry = number_1 / 10;
            int bit = number_1 % 10;
            char c = (char)('0' + bit);
            str.append(c);
            i--;
        }

        // Process remaining digits of num2
        while (j >= 0) {
            int number_2 = num2.charAt(j) - '0';
            number_2 += carry;
            carry = number_2 / 10;
            int bit = number_2 % 10;
            char c = (char)('0' + bit);
            str.append(c);
            j--;
        }
        
        // Add final carry if exists
        if (carry > 0) {
            str.append(carry);
        }
        
        return str.reverse().toString();
    }
}
