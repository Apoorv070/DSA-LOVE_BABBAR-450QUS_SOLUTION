class Solution
{
    public:
    bool detectLoop(Node* head)
    {     Node * first = head;   
     Node * second = head;   
    while(second!=NULL&&second->next!=NULL){
        first = first->next;
        second = second->next->next;
        if(first==second)
            return true;
    }
    return false;
        // your code here
    }
};
