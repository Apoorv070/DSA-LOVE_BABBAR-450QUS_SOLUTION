Node *removeDuplicates(Node *root)
{
 // your code goes here
 Node * first = root;
 Node * second = root;
 while(second!=NULL){
     if(first->data!=second->data){
         first = first->next;
         second = second->next;
     }else{
         first->next = second->next;
         second = first->next;
     }
 }
 
 return root;
}
