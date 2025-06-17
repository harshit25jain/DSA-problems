class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=n-1; i>=0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0; //when digit[i]>9, then we do this
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
