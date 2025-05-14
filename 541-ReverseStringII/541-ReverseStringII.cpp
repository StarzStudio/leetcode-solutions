// Last updated: 5/13/2025, 8:28:57 PM
class Solution {
public:
    string reverseStr(string s, int k) {
        bool shouldReverse = false;
        int i = 0;
        for (; i < s.size(); i += k) 
        {
            if (shouldReverse) reverse(s, i - k, i - 1);
            shouldReverse = !shouldReverse;
        }

        if (shouldReverse) 
        {
            reverse(s, i - k, s.size() - 1);
        }

        return s;
    }

    void reverse(string& s, int start, int end) 
    {
        while (start < end) 
        {
            std::swap(s[start++], s[end--]);
        }
    }
};