bool isCircular(Node *head)
{
   // Your code here
   Node * temp = head;
   bool ans  = false;
   while(temp!=NULL){
       if(temp->next==head){
           ans = true;
           break;
       }
       
       if(temp->next==NULL){
           break;
       }
       temp=temp->next;
   }
   
   return ans;
}
