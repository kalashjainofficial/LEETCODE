class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();

        for (int a = 0; a < size; a++) {
            int b = target - nums[a];
            for (int c = a + 1; c < size; c++) {
                if (b == nums[c]) {
                    return {a, c};  // Return the pair of indices
                }
            }
        }

        return {};  // Return empty vector if no pair found
    }
};
