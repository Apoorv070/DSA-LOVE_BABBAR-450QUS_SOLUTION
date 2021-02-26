class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode * temp1 =  headA;
      ListNode * temp2  = headB;
     ListNode * ans = NULL;
      while(temp1!=NULL&&temp2!=NULL){
          if(temp1==temp2){
              ans =  temp1;
              break;
          }
          
          temp1 = temp1->next;
          temp2 = temp2->next;
          
          if(temp1==NULL&&temp2!=NULL)
              temp1=headB;
          if(temp2==NULL&&temp1!=NULL)
              temp2=headA;
      }
      return ans;
    }
};
