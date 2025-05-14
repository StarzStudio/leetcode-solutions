// Last updated: 5/13/2025, 8:15:02 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i= 0; i < haystack.size(); i++) 
        {
            if (haystack[i] == needle[0]) 
            {
                bool isMatch = true;
                for (int j = 0; j < needle.size(); j++) 
                {
                    if (needle[j] != haystack[j + i]) 
                    {
                        isMatch = false;
                        break;
                    }
                }
                if (isMatch) return i;
            }
        }

        return -1;
    }
};