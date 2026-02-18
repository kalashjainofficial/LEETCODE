class Solution {
public:
    bool isPalindrome(int x) {
        long long a = x;

        if (x < 0) {
            return false;
        }

        long long p = 0;
        long long d = 1;
        while (a != 0) {
            long long y = a % 10;
            a = a / 10;
            p = (p * 10) + y;
        }

        if (p == x) {
            return true;
        }

        return false;
    }
    };