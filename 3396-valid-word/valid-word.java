class Solution {
    public boolean isValid(String word) {
        if (word.length() < 3) {
            return false;
        } 
        boolean hasVowel = false;
        boolean hasConsonant = false;
        // boolean hasDigitOrLetter = true;
        
        for (int i = 0; i < word.length(); i++) {
            char c = word.charAt(i);
            
            // Check if character is valid (letter or digit)
            if (!Character.isLetterOrDigit(c)) {
                return false;
            }
            
            // Check for vowels (both lowercase and uppercase)
            if ("aeiouAEIOU".indexOf(c) != -1) {
                hasVowel = true;
            }
            // Check for consonants (letters that aren't vowels)
            else if (Character.isLetter(c)) {
                hasConsonant = true;
            }
        }
        
        return hasVowel && hasConsonant;
    }
}