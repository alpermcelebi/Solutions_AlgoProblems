class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;
        //comparing length of the strings in advance
        if(s.length() != t.length()) return false;

        //adding letters to table: char -> number of repetition in str
        for(int i = 0; i < s.length(); i++) {
            if(!letters.contains(s[i]))
                letters[s[i]] = 1;
            else{
                letters[s[i]] += 1;
            }
        }

        for(char c: t) {
            if(!letters.contains(c)) return false;
            else{
                letters[c] -= 1;
                if(letters[c] < 0) return false;
            }
        }

        return true;

        
    }
};