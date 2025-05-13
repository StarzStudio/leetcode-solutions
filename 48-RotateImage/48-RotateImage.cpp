// Last updated: 5/13/2025, 2:29:08 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        } 

        // reverse each row
        for (int i = 0; i < n; i++) 
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};