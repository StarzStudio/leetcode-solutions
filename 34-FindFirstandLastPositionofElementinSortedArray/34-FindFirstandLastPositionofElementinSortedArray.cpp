// Last updated: 5/11/2025, 9:39:38 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // find first
        int left = 0;
        int right = nums.size();
        while (left < right) 
        {
            int middle = left + (right - left) / 2;
            if (nums[middle] >= target) right = middle;
            else left = middle + 1;
        }

        if (left == nums.size()) return {-1, -1};   
        if (nums[left] != target) return {-1, -1};   
        vector<int> res;
        res.emplace_back(left);
        
        left = 0;
        right = nums.size();
        while (left < right) 
        {
            int middle = left + (right - left) / 2;
            if (nums[middle] > target) right = middle;
            else left = middle + 1;
        }

        res.emplace_back(left - 1);
        return res;
    }
};