class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows, vector<int> (1,1));

        if(numRows == 0) return triangle;

        vector<int> prevRow;
        for(int currRow=1; currRow<numRows; currRow++){
            prevRow = triangle[currRow-1];
            for(int i=1; i<currRow; i++){
                triangle[currRow].push_back(prevRow[i]+prevRow[i-1]);
            }
            triangle[currRow].push_back(1);
        } 
        return triangle;
    }
};