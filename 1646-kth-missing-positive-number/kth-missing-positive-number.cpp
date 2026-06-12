class Solution {
public:
//APPROACH1: Binary search TC: O(LOGN)
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size()-1, mid,
        ans = arr.size();
        while(start <= end){
            int mid = start + (end-start)/2;

            if(arr[mid]-mid-1 >= k){
                ans = mid;
                end = mid-1;
            }
            else
            start = mid+1;
        }
    return ans + k;
    }
};
/*
"The key observation is that the number of missing positive integers 
before index i can be calculated using arr[i] - i - 1. Since this missing 
count increases monotonically, I can apply Binary Search to find the 
first index where the missing count becomes at least k. 
If the missing count at mid is large enough, I store that index 
and search left for an earlier occurrence; otherwise, I move right. 
After finding the boundary index, the kth missing positive number can be computed directly as ans + k.
*/

/*
APPROACH2: Linear Scan TC: O(N)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        for(int i=0;i<arr.size();i++){

            int missing = arr[i] - (i+1);

            if(missing >= k)
                return i + k;

        }

        return arr.size() + k;
    }
};

*/
