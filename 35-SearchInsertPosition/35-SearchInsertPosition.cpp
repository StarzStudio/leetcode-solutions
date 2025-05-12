// Last updated: 5/11/2025, 9:39:46 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size();
        
        while (left < right) 
        {
            int middle = left + (right - left)/ 2;
            if (nums[middle] == target) return middle;
            else if (nums[middle] > target) right = middle;
            else left = middle + 1;
        }
        return left;
        // if (left == nums.size()) return nums.size();
        // if (nums[left] > target) return left;
        // return left + 1;
    }
};