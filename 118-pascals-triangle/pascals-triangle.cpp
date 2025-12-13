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


/*C# Code 
using System.Collections.Generic;

public class Solution
{
    public IList<IList<int>> Generate(int numRows)
    {
        IList<IList<int>> triangle = new List<IList<int>>();

        for (int i = 0; i < numRows; i++)
        {
            List<int> row = new List<int>();

            // Initialize row with 1s
            for (int j = 0; j <= i; j++)
            {
                row.Add(1);
            }

            // Compute middle values
            for (int j = 1; j < i; j++)
            {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.Add(row);
        }

        return triangle;
    }
}

*/