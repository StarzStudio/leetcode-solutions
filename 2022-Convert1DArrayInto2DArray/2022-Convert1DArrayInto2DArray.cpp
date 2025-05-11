// Last updated: 5/11/2025, 1:22:11 AM
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != original.size()) return {};
        vector<vector<int>> res;

        vector<int> inner;

        for (int i = 0; i < original.size(); i++) 
        {
            inner.push_back(original[i]);
            
            if (inner.size() == n) 
            {
                res.push_back(inner);
                inner.clear();
            }
        }

        return res;
    }
};