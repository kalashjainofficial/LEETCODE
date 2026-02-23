class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        for (int a = 0; a <= haystack.length(); a++) {
            int b = 0, c = a;
            while (c < haystack.length() && b < needle.length() && haystack[c] == needle[b]) {
                if (b == needle.length() - 1)
                    return a;
                b++;
                c++;
            }
        }
        return -1;
    }
};
