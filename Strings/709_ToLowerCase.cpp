// 709. To Lower Case | Easy
// Approach: If a char is between 'A' and 'Z', add 32 (ASCII difference)
// Time: O(n) | Space: O(1)
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0;i<=s.size();i++)
        {
            if(s[i]>='A'&& s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        return s;
        
    }
};