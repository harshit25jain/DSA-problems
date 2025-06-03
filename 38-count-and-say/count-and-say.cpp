class Solution {
public:
    string helper(string s, int n)
    {
        // Step 1 : Base Case
        if(n == 0)
        {
            return s;
        }

        // Step 2 : Initialize the Previous Counts
        string result = "";
        int count = 1;
        char curr = s[0];

        // Step 3 : Iterate and Populate the result with count + digit
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == curr)
            {
                count++;
            }
            else
            {
                // Step 4 : Appending the count + digit 
                result += to_string(count);
                result += curr;

                // Step 5 : Resetting the counters for next digit
                count = 1;
                curr = s[i];
            }
        }

        // Step 6 : Appending Last Group
        result += to_string(count);
        result += curr;

        // Step 7 : Recursive Call
        return helper(result, n - 1);
    }

    string countAndSay(int n) {
        return helper("1", n - 1);
    }
};