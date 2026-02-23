class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // count of elements not equal to val

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // move valid elements forward
                k++;
            }
        }

        return k; // the number of elements not equal to val
    }
};
