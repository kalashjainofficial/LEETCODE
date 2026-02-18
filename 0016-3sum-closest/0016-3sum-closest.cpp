class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int minimum = INT_MAX;
        int ans = 0;

        for (int a = 0; a < n - 2; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;

            int s = a + 1;
            int e = n - 1;

            while (s < e) {
                long long sum = nums[a] + nums[s] + nums[e];
                int diff = abs(sum - target);

                if (diff < minimum) {
                    minimum = diff;
                    ans = sum;
                }

                if (sum < target)
                    s++;
                else if (sum > target)
                    e--;
                else
                    return target;  // exact match
            }
        }
        return ans;
    }
};
