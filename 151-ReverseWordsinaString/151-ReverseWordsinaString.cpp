// Last updated: 7/9/2025, 1:17:03 AM
class Solution {
public:
    string reverseWords(string s) {
    
        // 1. trim start and end spaces
        int i = 0;
        while (s[i] == ' ' && i < s.size()) { i++;}
        s = s.substr(i);

        i = s.size() - 1;
        while (s[i] == ' ' && i >= 0) { i--; }
        s = s.substr(0, i + 1);

        if (s.empty()) return s;

        // 2. 
        int j = 0;
        int k = 0;
        while (k < s.size()) 
        {
            if (s[k] == ' ') 
            {
                s[j++] = s[k++];
                while (s[k] == ' ') k++;
            }
            else 
            {
                s[j++] = s[k++];
            }
        }

        s.resize(j);

        std::reverse(s.begin(), s.end());
        // => eulb si yks 
        // iter every word and reverse the chars in them
        
        int start = 0;
        int end = 0;
        
        while (start < s.size()) 
        {
            if (end < s.size() && s[end] != ' ') 
            {
                end++;
                continue; 
            }
            
            // reverse begin start and end

            reverse(s.begin() + start, s.begin() + end);
            end++;
            start = end;
        }

        
        return s;

    }
};