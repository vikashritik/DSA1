class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int>ans(n);

        int i = 0,j = 0,k = 1e9;
        
        for(int x = 0;x < n;x ++){
            if(s[x] == c){
                j = x;
                break;
            }
        }
        while(i < n  ){
            if(i > j ){
                k = j;
                bool fl = true;

                for(int x = i ;x < n;x ++){
                    if(s[x] == c){
                        j = x;
                        fl = false;
                        break;
                    }
                }
                if(fl){
                    j = 1e9;
                }
            }
            else{
                ans[i++] = min(j-i,abs(i - k));
            }
        }
        
        return ans;
    }
};