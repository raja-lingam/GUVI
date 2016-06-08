void reverse(struct node *head,struct node *prev,strcut node *curr){
    if(curr->next!=NULL){
        head=curr;
        curr->next=prev;
        return;
    }
    struct node *next=curr->next;
    curr->next=prev;
    reverse(head,prev,curr);
}
