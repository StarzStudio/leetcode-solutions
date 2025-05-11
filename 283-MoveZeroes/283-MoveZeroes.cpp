// Last updated: 5/11/2025, 12:20:21 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != 0) 
            {
                nums[p++] = nums[i];
            }
        }

        while (p < nums.size()) 
        {
            nums[p++]= 0;
        }

        return;
    }
};