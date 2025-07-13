class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        int i = n -1, j = m-1;
        int carry = 0;
        string ans = "";

        while(i  >= 0 && j >= 0){
            int cur = num1[i] - '0';
            int cur2 = num2[j] - '0';

            int sum = cur + cur2 + carry;

            int zer_digit = sum % 10;

            ans += zer_digit + '0';

            carry = sum / 10;
            i--;
            j--;
        }

        while(i >= 0){
            int cur = num1[i] - '0';
            int sum =  cur + carry;
        
            ans += sum%10 + '0';
            carry = sum / 10;
            i--;
        }
        while(j>= 0){
            int cur = num2[j] - '0';

            int sum = cur + carry;

            ans += sum%10 + '0';
            carry = sum / 10;
            j--;
        }
        if(carry){
            ans += '1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};