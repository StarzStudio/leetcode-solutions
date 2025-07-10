// Last updated: 7/10/2025, 12:20:00 AM
class Solution {
public:
    // int removeElement(vector<int>& nums, int val) {
    //     int end = nums.size();
    //     int start = 0;
    //     while (start < end) 
    //     {
    //         if (nums[start] == val) 
    //         {
    //             std::swap(nums[start], nums[end - 1]);
    //             end--;
    //         }
    //         else start++;
    //     } 

    //     return start;
    // }

    // 2nd solution:
    int removeElement(vector<int>& nums, int val) {
        int p = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != val) 
            {
                nums[p++] = nums[i]; 
            }
        }

        return p;
    }
};