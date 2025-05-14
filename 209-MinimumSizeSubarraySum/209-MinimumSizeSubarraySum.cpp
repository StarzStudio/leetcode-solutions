// Last updated: 5/13/2025, 9:57:47 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int windowLen = 0;
        int windowSum = 0;
        int left = 0;
        int right = 0;
        int res = INT_MAX;
        while (right != nums.size()) 
        {
            windowSum += nums[right];
            windowLen += 1;
            if (windowSum >= target) 
            {
                // shrink the window
                while (left <= right && windowSum >= target) 
                {
                    res = std::min(res, windowLen);

                    windowSum -= nums[left];
                    windowLen -= 1;
                    left++;
                }
            }

            right++;
        }

        return res == INT_MAX ? 0 : res;
    }
};