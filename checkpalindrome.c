void check_palindrome(struct node *head){
    int top=0;
    char stack[50];
    struct node *temp=head;
    while(temp!=NULL){
        stack[top++]=temp->data;
        temp=temp->next;
    }
    temp=head;
    int flag=0;
    while(temp!=NULL){
        if(temp->data!=stack[top--]){
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==1){
        printf("Not a Palindrome");
    }
    else{
        printf("Palindrome");
    }
}
