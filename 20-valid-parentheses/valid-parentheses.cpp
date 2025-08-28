class Solution {
public:
    bool isValid(string s) {
        stack<char>ch;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                ch.push(s[i]);
                i++;
            }

               else if(s[i]==')' || s[i]=='}' || s[i]==']' ){
                    if (ch.empty()) {
                    return false;
                } 
                char top = ch.top();
                    ch.pop();
                      if ((s[i] == ')' && top != '(') ||
                    (s[i] == '}' && top != '{') ||
                    (s[i] == ']' && top != '[')) {
                    return false;
                }
                i++;
                }
             else {
                return false;
            }
       
        }
          return ch.empty();

    }
};