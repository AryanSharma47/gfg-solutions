//Best Solution || Space Complexity : O(1) || Time Complexity : O(n+m)
    Node *temp=new Node(0);
    Node *ans=temp;
    
    while(head1 && head2)
    {
        if(head1->data < head2->data)
        {
            ans->next=head1;
            head1=head1->next;
            ans=ans->next;
        }
        else
        {
            ans->next=head2;
            head2=head2->next;
            ans=ans->next;
        }
    }
     while(head1)
     {
        ans->next=head1;
        ans=ans->next;
        head1=head1->next;
     }
     
    while(head2)
     {
        ans->next=head2;
        ans=ans->next;
        head2=head2->next;
     }
     
    return temp->next;