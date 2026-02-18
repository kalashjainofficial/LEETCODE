class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;

        string ans = "";

        // Loop over all start positions
        for (int a = 0; a < n; a++) {
            
            // Loop over all end positions
            for (int b = n - 1; b >= a; b--) {
                
                // Only test substrings longer than current answer
                if ((b - a + 1) <= ans.length()) break;

                int left = a;
                int right = b;
                bool ok = true;

                // Check if substring s[a..b] is palindrome
                while (left < right) {
                    if (s[left] != s[right]) {
                        ok = false;
                        break;
                    }
                    left++;
                    right--;
                }

                // If palindrome found, update answer
                if (ok) {
                    ans = s.substr(a, b - a + 1);
                    break; // no need to check smaller b
                }
            }
        }

        return ans;
    }
};
