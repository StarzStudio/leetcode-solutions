// Last updated: 5/13/2025, 8:06:53 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        if (nums.size()== 0) return 0;
        int res = 1;
        int len = 1;
        for (auto n : set) 
        {
            if (set.count(n - 1) == 0) 
            {
                len = 1;
                int num = n + 1;
                while (set.count(num) != 0) 
                {
                    len++;
                    num++;
                }
                res = std::max(res, len);
            }
        }

        return res;
    }
};