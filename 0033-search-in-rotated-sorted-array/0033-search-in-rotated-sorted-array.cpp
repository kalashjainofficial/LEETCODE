class Solution {
public:
    int pivot(const vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // Pivot is in the right half
        if (nums[mid] > nums[end]) {
            start = mid + 1;
        }
        // Pivot is in the left half (including mid)
        else {
            end = mid;
        }
    }

    // start == end == pivot index
    return start;
}
    int search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size()-1;
        int mid = pivot(nums);



        if(target >= nums[mid] && target <= nums[end])start = mid;
        else{
            end = mid-1;
        }

        while(start<=end){
            mid = start + (end - start) / 2;
            if(target == nums[mid])return mid;

            if(target > nums[mid])start = mid+1;
            else{
                end = mid-1;
            }
        }

        return -1;
    }
};