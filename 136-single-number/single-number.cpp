class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //the idea is to use xor it will take O(n)TC
       // XOR of two identical numbers is 0 and XOR with 0 returns the same number
    int result = 0;
    for(int num : nums) {
        result ^= num;
    }
    return result;
}
};
/*
I chose the XOR approach because the problem has a special property: 
every element appears exactly twice except one element that appears only once.
The key observation is that XOR has two important properties:
1. Any number XOR itself becomes 0.
2. Any number XOR 0 remains the same number.
Using these properties, if I XOR all elements of the array together, 
every duplicate pair will cancel itself out and become 0. 
The only element that does not have a duplicate will remain in the final result.
So I initialize a variable result as 0 and traverse the array once. 
For each element, I perform XOR with result. As the traversal progresses, 
duplicate numbers keep canceling each other. By the end of the traversal, 
only the unique element remains in result, which I return as the answer.
*/


/*TC: O(N) SC:O(N)
The better approach woule be to use hashmap
int singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(int num : nums) {
        freq[num]++;
    }
    for(auto [key, value] : freq) {
        if(value == 1) return key;
    }
    return -1;
}
"I chose the HashMap approach because the problem asks me to identify 
the element that appears only once. To do that efficiently, 
I need a way to keep track of how many times each element occurs.
The key observation is that if I know the frequency of every number, 
then the element with frequency 1 is the answer.
So I use a HashMap where the key represents the number and the value represents its frequency.
In the first traversal, I iterate through the array and increment 
the frequency of each number in the HashMap. After this pass, 
the map contains the occurrence count of every element.
In the second traversal over the HashMap, I check the frequency of each element. 
The moment I find an element whose frequency is exactly 1, 
I return it because that is the number that appears only once.
*/
