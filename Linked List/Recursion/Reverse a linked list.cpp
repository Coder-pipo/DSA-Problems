//Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL){
            return head;
        }
        
        Node* rest=reverseList(head->next);
        head->next->next=head;
        
        head->next=NULL;
        
        return rest;
    }
