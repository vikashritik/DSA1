class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int freq[26] = {0}; 
        for(int j = 0; j < brokenLetters.size(); j++) {
            int k = brokenLetters[j] - 'a'; 
            freq[k] = 1; 
        }
        
        int count = 0;
        bool canType = true;
        
        for(int i = 0; i < text.size(); i++) {
            if(text[i] == ' ') { 
                if(canType) {
                    count++;
                }
                canType = true; 
            } else {
                if(freq[text[i] - 'a'] == 1) {
                    canType = false;
                }
            }
        }

        if(canType) {
            count++;
        }
        
        return count;
    }
};