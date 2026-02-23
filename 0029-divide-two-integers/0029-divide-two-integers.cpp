class Solution {
public:
    int divide(int dividend, int divisor) {

        if (divisor == 0)
            return INT_MAX;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);

        long long result = 0;

        while (a >= b) {
            long long temp = b;
            long long count = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                count <<= 1;
            }

            a -= temp;
            result += count;
        }

        if ((dividend < 0) ^ (divisor < 0))
            result = -result;

        return (int)result;
    }
};
