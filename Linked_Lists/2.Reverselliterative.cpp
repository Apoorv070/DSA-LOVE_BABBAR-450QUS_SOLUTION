class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode * prev = NULL;
        ListNode * curr = head;
        while(head->next!=NULL){
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        head->next = prev;
        return head;
    }
};
