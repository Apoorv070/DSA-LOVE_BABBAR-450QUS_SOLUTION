Node * removeDuplicates( Node *head) 
{
 // your code goes here
 Node * slow = head;
 Node * fast = head->next;
 //unordered_map<Node*,int> um;
 int * arr = new int[10001]();
 arr[slow->data]=1;
 while(fast!=NULL){
     if(arr[fast->data]==1){
         slow->next = fast->next;
         fast = slow->next;
     }else{
         arr[fast->data]=1;
         slow = slow->next;
         fast = fast->next;
     }
 }
 return head;
}
