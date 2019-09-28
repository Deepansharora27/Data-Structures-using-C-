// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

int length(node* head){
    int count=0 ; 
    node* temp=head ; 
    while(temp!=NULL){
       count++ ; 
        temp=temp->next ; 
      }
    return count ; 
}   
    
node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
    int result = length(head); 
    
    //Base Case for the Problem : 
    if(result==0 || result==1){
        return head ; // Directly returning from the Linked List if length is either 0 or 1 . 
    }
    
    //Making Recurive Calls for the Problem : 
    node* SmallAns = reverse_linked_list_rec(head->next); 
    // In the Pointer Variable , SmallAns we will get 
    //updated Head of the Reversed Linked List . 
    
    //Figuring out the Tail Node for the Entire LinkedList : 
   
    node* temp=SmallAns ; 
    while(temp->next!=NULL){
        temp=temp->next ; 
    }
    temp->next=head ; // Attached the Head Node to the Tail Node of the Linked List . 
    head->next=NULL ; 
    
    return SmallAns ; 
    
}

