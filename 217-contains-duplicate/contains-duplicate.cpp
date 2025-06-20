class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int>seen; //hashset to store unique numbers

        for(int num : nums){ //iterating through the array nums
            if(seen.find(num) != seen.end()){
                //check if already present
                return true;
            }
            seen.insert(num); //insert into set
        }

    return false;    
    }
};
