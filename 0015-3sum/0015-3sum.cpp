class Solution {
public:
void merge(vector<int>& nums, int start, int mid, int end) {
    vector<int> t1, t2;

    for (int i = start; i <= mid; i++)
        t1.push_back(nums[i]);

    for (int i = mid + 1; i <= end; i++)
        t2.push_back(nums[i]);

    int i = start;
    int i1 = 0, i2 = 0;

    // Merge both arrays
    while (i1 < t1.size() && i2 < t2.size()) {
        if (t1[i1] <= t2[i2])
            nums[i++] = t1[i1++];
        else
            nums[i++] = t2[i2++];
    }

    // Copy remaining elements
    while (i1 < t1.size())
        nums[i++] = t1[i1++];

    while (i2 < t2.size())
        nums[i++] = t2[i2++];
}



void mergesort(vector<int>& nums, int start, int end) {
    if (start >= end) return;

    int mid = start + (end - start) / 2;

    mergesort(nums, start, mid);
    mergesort(nums, mid + 1, end);

    merge(nums, start, mid, end);
}

    vector<vector<int>> threeSum(vector<int>& nums) {

mergesort(nums, 0, nums.size() - 1);
vector<int> ans;
vector<vector<int>> result;


        for(int a= 0 ; a<nums.size() ; a++){
 if (a > 0 && nums[a] == nums[a - 1]) continue;

            int s = a+1 ; 
            int e = nums.size()-1;

            while(s<e){
                if(nums[a] + nums[s] + nums[e] > 0){
                    e--;
                }
                else if(nums[a] + nums[s] + nums[e] < 0){
                    s++;
                }
                else{
                     result.push_back({nums[a], nums[s], nums[e]});

                s++;
                e--;

// Skip duplicate s
                while (s < e && nums[s] == nums[s - 1]) s++;

                // Skip duplicate e
                while (s < e && nums[e] == nums[e + 1]) e--;
                }
            }
        }


        return result;
    }
};