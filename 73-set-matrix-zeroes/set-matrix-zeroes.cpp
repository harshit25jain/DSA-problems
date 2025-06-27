class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        // using first row & first column as markers to keep track of 0s.
        bool firstRowZero = false, firstColZero = false;

        for(int i=0;i<m;i++){ //checking if first col is 0 or not
            if(matrix[i][0] == 0){
                firstColZero = true;
                break;
            }
        }

        for(int j=0; j<n;j++){ //checking if first row is 0 or not
            if(matrix[0][j] == 0){
                firstRowZero = true;
                break;
            }
        }

        //Use first row and column as markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                matrix[i][0] = 0; // Mark row
                matrix[0][j] = 0; // Mark column
            }
        }
    }
        // Zero out cells based on markers
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0 ){
                    matrix[i][j] = 0;
                }
            }
        }
          // Zero out the first row if needed
    if (firstRowZero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    // Zero out the first column if needed
    if (firstColZero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }

    }
};
