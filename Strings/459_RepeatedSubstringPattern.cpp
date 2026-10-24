// 459. Repeated Substring Pattern | Easy
// Approach: Search s inside (s + s) after removing its first and last character
// Time: O(n) average | Space: O(n)

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        string middle = t.substr(1, t.size() - 2);
        return middle.find(s) != string::npos;
    }
};