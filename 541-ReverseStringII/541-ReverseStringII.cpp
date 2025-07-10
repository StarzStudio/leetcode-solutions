// Last updated: 7/9/2025, 10:39:52 PM
class Solution {
public:
    string reverseStr(string s, int k) {
        int start = 0;
        int end = 0;
        
        bool shouldRev = true;
        // abcdefg
        //       
        while (end < s.size()) 
        {
            if (end - start == k) 
            {
                if (shouldRev) std::reverse(s.begin() + start, s.begin() + end);
                shouldRev = !shouldRev;
                start = end;
            }

            end++;
        }

        if (shouldRev) std::reverse(s.begin() + start, s.begin() + end);
        return s;

    }
};