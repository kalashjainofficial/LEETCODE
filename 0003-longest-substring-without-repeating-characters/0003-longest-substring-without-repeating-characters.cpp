class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char , int> m;
        int l;
        int lar = 0;
        for(int a = 0 ; a<s.length() ; a++){
            l = 0;
           for (int j = a; j < s.length(); j++) {
                if (m[s[j]] == 1) {
                    break; // stop when we find a repeating character
                }
                m[s[j]] = 1;
                l++;
            }
             m.clear();

            if(lar<l){
                lar = l;
            }



        }
    return lar;
    }
};