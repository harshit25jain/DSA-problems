
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int m = num1.size(), n = num2.size();
        vector<int> result(m + n, 0);
        
        // Multiply each digit and add to result
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int pos1 = i + j;       // Position for carry
                int pos2 = i + j + 1;   // Position for digit
                
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[pos2];
                
                result[pos1] += sum / 10;
                result[pos2] = sum % 10;
            }
        }
        
        // Convert result to string (skip leading zeros)
        string str = "";
        int i = 0;
        while (i < result.size() && result[i] == 0) i++;
        
        while (i < result.size()) {
            str += '0' + result[i];
            i++;
        }
        
        return str;
    }
};