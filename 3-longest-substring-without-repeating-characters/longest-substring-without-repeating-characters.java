import java.util.HashMap;
import java.util.Map;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxLength = 0;
        Map<Character, Integer> charMap = new HashMap<>();
        int left = 0;
        
        for (int i = 0; i < n; i++) {
            char currentChar = s.charAt(i);
            
            if (charMap.containsKey(currentChar)) {
            
                left = Math.max(left, charMap.get(currentChar) + 1);
            }
            
            
            charMap.put(currentChar, i);
            
            
            maxLength = Math.max(maxLength, i - left + 1);
        }
        
        return maxLength;
    }
}