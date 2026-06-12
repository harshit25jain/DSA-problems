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
/*
"The problem only requires detecting whether a duplicate exists, 
so I chose a HashSet for constant-time lookup. While traversing the array,
I check whether the current element has already been seen.
If yes, I immediately return true because a duplicate exists. Otherwise, I insert the element into the set and continue.*/
