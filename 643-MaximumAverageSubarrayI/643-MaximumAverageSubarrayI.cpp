// Last updated: 5/13/2025, 7:32:32 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double windowAvg = 0;
        double windowSum = 0;
        double res = 0;
        int sum = 0;
        for (int i = 0; i < k; i++) 
        {
            windowSum += nums[i];
        }
        windowAvg = windowSum/k;
        res = windowAvg;
        for (int i = k; i < nums.size(); i++) 
        {
            windowSum = windowSum - nums[i-k] + nums[i];
            windowAvg = windowSum / k;
            res = std::max(windowAvg, res); 
        }

        return res;
    }
};