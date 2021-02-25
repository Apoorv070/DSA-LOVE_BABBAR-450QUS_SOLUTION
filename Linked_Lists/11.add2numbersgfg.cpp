class Solution
{
    public:
    struct Node* addTwoNumbers(struct Node*  l1, struct Node*  l2) {
        int carry = 0;
        struct Node*  head = new struct Node(0);
        struct Node*  temp1 = l1;
        struct Node*  temp2 = l2;
        struct Node*  temp3 = head;
        while(temp1!=NULL||temp2!=NULL){
            int ans = 0;
            if(temp1!=NULL){
                ans+=temp1-> data;
                temp1 = temp1->next;
            }
            
            if(temp2!=NULL){
                ans+=temp2-> data;
                temp2 = temp2->next;

            }
            
            ans+=carry;
            temp3->next = new struct Node(ans%10);
            temp3 = temp3->next;
            carry = ans/10;
            
            
            
            
        }
        
        if(carry!=0){
            temp3->next = new struct Node(carry);
        }
        
        head = head->next;
        return head;
    }
    
    struct Node* reverseList(struct Node* head) {
        if(head==NULL)
            return head;
        struct Node* prev = NULL;
        struct Node* curr = head;
        while(head->next!=NULL){
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        head->next = prev;
        return head;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node* head1 = reverseList(first);
        struct Node* head2 = reverseList(second);
        struct Node* sum = addTwoNumbers(head1,head2);
        struct Node* revu = reverseList(sum);
        return revu;
    }
};
