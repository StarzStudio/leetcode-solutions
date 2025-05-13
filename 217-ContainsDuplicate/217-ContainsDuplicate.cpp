// Last updated: 5/13/2025, 12:09:33 AM
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