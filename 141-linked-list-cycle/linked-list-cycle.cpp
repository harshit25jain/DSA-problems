/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set <ListNode* >visited; //Hashset to store visited nodes
        while(head){
            if(visited.find(head) != visited.end()){
                return true; //cycle detected

            }
            visited.insert(head); //mark the node as visited
            head = head-> next;
        }
        return false;   
    }
};