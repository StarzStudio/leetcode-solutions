// Last updated: 5/13/2025, 10:36:40 AM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; i++) 
        {
            int num = nums[i];
            if (num < 0)
            {
                num = -num;
            }
            if (nums[num - 1] < 0) 
            {
                res.push_back(num);
            }
            else 
            {
                nums[num - 1] = -nums[num - 1];
            }
        }
        return res;
    }
};