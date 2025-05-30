class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    //the idea is to use hashmap TC: O(n + m) SC:O(N)
    unordered_map<int, int> freq;
    for(int num : nums1) {
        freq[num]++;
    }

    vector<int> result;
    for(int num : nums2) {
        if(freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }
    return result;
}
};
/*(Sort + Two Pointers) TC:O(n log n + m log m) SC: O(1) (excluding result)
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    vector<int> result;

    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] == nums2[j]) {
            result.push_back(nums1[i]);
            i++; j++;
        }
        else if(nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return result;
}*/
