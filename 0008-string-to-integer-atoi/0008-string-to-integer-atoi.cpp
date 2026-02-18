class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long num = 0;
        int sign = 1;

        // Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Handle sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert until non-digit
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // Handle overflow
            if (sign == 1 && num > INT_MAX) return INT_MAX;
            if (sign == -1 && -num < INT_MIN) return INT_MIN;

            i++;
        }

        return sign * num;
    }
};