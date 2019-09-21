/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node* FinalHead = NULL ; //Depicting the Head of Final Sorted Linked List 
    Node* FinalTail = NULL ; //Depicting the Tail of the Final Sorted Linked List . 
    
    while(head1!=NULL && head2!=NULL)
    {
    if(head1->data<head2->data){
        if(FinalHead==NULL && FinalTail==NULL)
        {
        FinalHead = head1 ; 
        FinalTail = head1 ;
        head1=head1->next ; 
        }else{
           FinalTail->next=head1 ; 
           FinalTail=head1 ; 
           head1=head1->next ; 
        }  
    }else{
        if(FinalHead==NULL && FinalTail==NULL){
            FinalHead=head2 ;  
            FinalTail=head2 ;
            head2=head2->next ;
        }else{
        FinalTail->next=head2 ; 
        FinalTail = head2 ; 
        head2=head2->next ; 
        }
    }
        
    }
    
    if(head2==NULL){
        FinalTail->next=head1 ; 
    }else{
        FinalTail->next=head2 ; 
    }
    return FinalHead ; 
}


