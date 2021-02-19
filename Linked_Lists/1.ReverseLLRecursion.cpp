class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //Base Case
        
        if(head == NULL||head->next == NULL)
            return head;
        
        ListNode * temp1 = reverseList(head->next);
        ListNode * temp = temp1;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = head;
        head->next = NULL;
        head = temp1;
        return head;
     
    }
};
