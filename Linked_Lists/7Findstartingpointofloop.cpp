class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        bool ans = true;
        while(fast!=NULL&&fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                ans = false;
                break;
            }
        }
        
     if(ans==false){
        ListNode * temp = head;
        while(temp!=slow){
            temp = temp->next;
            slow = slow->next;
        }
        return temp;
    }else{
        return NULL;
    }
    }
};
