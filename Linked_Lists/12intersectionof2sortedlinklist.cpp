Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1 = head1;
    Node* temp2 = head2;
    map<int,int> m;
    Node* head = new Node(0);
    Node* temp = head;
    while(temp1!=NULL){
        m[temp1->data]++;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        m[temp2->data]++;
        temp2 = temp2->next;
    }
    for(auto x:m){
        if(x.second >1 ){
            temp->next = new Node(x.first);
            temp = temp->next;
            temp->next = NULL;
        }
    }
    
    return head->next;
    
}
