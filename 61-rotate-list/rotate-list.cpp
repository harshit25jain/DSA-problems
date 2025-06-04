
class Solution {
public:

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        ListNode* prev2 = nullptr;

        int size = 1;
        while (fast->next) {
            size++;
            fast = fast->next;
        }
        k = k%size;
        if(k ==0) return head;
        fast = head;
        for(int i=0;i<k;i++){
            fast = fast->next;
        }
        while(fast!=nullptr){
            prev2 = fast;
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        prev->next = nullptr;
        prev2->next = head;
        
        return slow;
    }
};