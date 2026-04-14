class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int izq = 0, der = s.length() - 1;
        
        while (izq < der) {
            if (s[izq++] != s[der--]) return false;
        }
        return true;
    }
};