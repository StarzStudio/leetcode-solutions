// Last updated: 5/13/2025, 2:08:17 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (auto n : nums) 
        {
            n = n < 0 ? -n : n;
            if (nums[n - 1] > 0) 
            {
                nums[n - 1] = -nums[n - 1];
            }
        }

        vector<int> res;
        for (int i = 0; i< nums.size(); i++) 
        {
            if (nums[i] >= 0)
            {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};