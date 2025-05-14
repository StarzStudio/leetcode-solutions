// Last updated: 5/13/2025, 9:59:02 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int windowSum = 0;
        int left = 0;
        int right = 0;
        int res = INT_MAX;
        while (right != nums.size()) 
        {
            windowSum += nums[right];
            if (windowSum >= target) 
            {
                // shrink the window
                while (left <= right && windowSum >= target) 
                {
                    res = std::min(res, right - left + 1);

                    windowSum -= nums[left];
                    left++;
                }
            }

            right++;
        }

        return res == INT_MAX ? 0 : res;
    }
};