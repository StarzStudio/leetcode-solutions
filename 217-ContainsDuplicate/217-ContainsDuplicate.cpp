// Last updated: 5/11/2025, 9:39:05 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (auto n : nums) 
        {
            if (seen.count(n) != 0) 
            {
                return true;
            } 

            seen.insert(n);
        }

        return false;
    }
};