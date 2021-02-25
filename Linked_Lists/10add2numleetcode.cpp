class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * head = new ListNode(0);
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode * temp3 = head;
        while(temp1!=NULL||temp2!=NULL){
            int ans = 0;
            if(temp1!=NULL){
                ans+=temp1->val;
                temp1 = temp1->next;
            }
            
            if(temp2!=NULL){
                ans+=temp2->val;
                temp2 = temp2->next;

            }
            
            ans+=carry;
            temp3->next = new ListNode(ans%10);
            temp3 = temp3->next;
            carry = ans/10;
            
            
            
            
        }
        
        if(carry!=0){
            temp3->next = new ListNode(carry);
        }
        
        head = head->next;
        return head;
    }
};
