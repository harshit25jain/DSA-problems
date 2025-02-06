class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle(numRows); 

    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1, 1); // Resize the row to (i+1) elements, initialized to 1

        for (int j = 1; j < i; j++) { // Compute middle values
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
        
    }
};