class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = 0, n2 = 0;
        vector<int> ans;

        // Merge the arrays
        while (n1 < nums1.size() && n2 < nums2.size()) {
            if (nums1[n1] < nums2[n2]) {
                ans.push_back(nums1[n1]);
                n1++;
            } else {
                ans.push_back(nums2[n2]);
                n2++;
            }
        }

        while (n1 < nums1.size()) {
            ans.push_back(nums1[n1]);
            n1++;
        }
        while (n2 < nums2.size()) {
            ans.push_back(nums2[n2]);
            n2++;
        }

        int n = ans.size();
        if (n % 2 == 0) {
            // even length
            return (ans[n/2 - 1] + ans[n/2]) / 2.0;
        } else {
            // odd length
            return ans[n/2];
        }
    }
};