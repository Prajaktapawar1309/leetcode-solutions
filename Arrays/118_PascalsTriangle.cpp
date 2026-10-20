// 118. Pascal's Triangle | Easy
// Approach: Each row starts and ends with 1, middle = sum of two numbers above
// Time: O(n^2) | Space: O(n^2) for the output
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=0;i<numRows;i++)
        {
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=triangle[i-1][j-1]+triangle[i-1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
        
    }
};