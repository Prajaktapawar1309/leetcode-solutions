// 66. Plus One | Easy
// Approach: Go from the last digit, add 1 if digit < 9, else set 0 and carry
// Time: O(n) | Space: O(1)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for (int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};