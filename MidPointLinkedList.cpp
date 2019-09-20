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
    node* temp=head ; 
    int count=0 ; 
    while(temp!=NULL){
        count++ ; 
        temp=temp->next ; 
    }
    return count ; 
}

node* midpoint_linkedlist(node *head)
{
    // Write your code here
    
    node* slow = head ; 
    node* fast = head->next ; 
    
    int result = length(head); 
    
    if(result%2==0){
        while(fast->next!=NULL){
            slow=slow->next ; 
            fast=fast->next->next ; 
        }
        return slow ; 
    }else{
        while(fast!=NULL){
            slow=slow->next ; 
            fast=fast->next->next ; 
        }
    }
    
    

}
