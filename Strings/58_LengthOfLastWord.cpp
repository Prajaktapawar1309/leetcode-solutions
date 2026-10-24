// 58. Length of Last Word | Easy
// Approach: Start from the end, skip trailing spaces, then count letters
// Time: O(n) | Space: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int length = 0;
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
};