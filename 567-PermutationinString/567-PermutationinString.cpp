// Last updated: 5/13/2025, 10:12:13 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // freq maps with array
        vector<int> c1(26, 0);
        vector<int> c2(26, 0);

        for (auto c : s1) 
        {
            c1[c - 'a'] += 1;
        }

        for (int i = 0; i < s2.size(); i++) 
        {
            c2[s2[i] - 'a']++;
            if (i >= s1.size())
            {
                c2[s2[i - s1.size()] - 'a']--;
            }

            if (c1 == c2) 
            {
                return true;
            }
        }

        return false;
    }
};