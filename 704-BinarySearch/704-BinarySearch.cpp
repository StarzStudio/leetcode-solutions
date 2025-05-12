// Last updated: 5/11/2025, 9:37:01 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size();
        while (left < right) {
            int middle = left + (right - left ) / 2;
            
            if (nums[middle] == target) 
            {
                return middle;
            }
            else if (nums[middle] < target) 
            {
                left = middle + 1;
            }
            else {
                right = middle;
            }
        } 

        return -1;
    }
};
