class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> brokenSet;
        
        for(char c : brokenLetters) {
            brokenSet.insert(c);
        }
        
        int count = 0;
        bool canType = true;
        
        for(int i = 0; i <= text.size(); i++) {
            if(i == text.size() || text[i] == ' ') {
                if(canType) {
                    count++;
                }
                canType = true;
            } else if(canType) {
                if(brokenSet.find(text[i]) != brokenSet.end()) {
                    canType = false;
                }
            }
        }
        
        return count;
    }
};