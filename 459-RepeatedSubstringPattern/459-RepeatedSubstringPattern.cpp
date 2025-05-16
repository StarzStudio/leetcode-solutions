// Last updated: 5/16/2025, 12:21:32 PM
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        auto s1= std::move(s + s);
        
        auto s2= std::string(s1.begin() + 1, s1.end() - 1);
        
        return s2.contains(s);
    }
};