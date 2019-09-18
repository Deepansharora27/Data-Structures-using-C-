//head is the head of you linked list
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
    node* temp = head ; 
    while(temp!=NULL){
        temp=temp->next ; 
        count++ ; 
    }
    return count ; 
}

    node* reverse(node* head) 
    { 
        if (head == NULL || head->next == NULL) 
            return head; 
  
        
        node* rest = reverse(head->next); 
        head->next->next = head; 
  
        /* tricky step -- see the diagram */
        head->next = NULL; 
  
        /* fix the head pointer */
        return rest; 
    } 


bool check_palindrome(node* head)
{
    //write your code here
    
    //Figuring out the Mid Point of the Linked List :
    int result = length(head); 
    int mid = result/2 ; 
    
    node* head1 = head ; 
    
    int i=0 ; 
    while(i<mid-1){
        head1=head1->next ; 
        i++ ; 
    }
    
    
    node* head2 = head ; 
    int g=0 ; 
    while(g<=mid-1){
        head2=head2->next ; 
        g++ ; 
    }
    head1->next=NULL ; 
     
    
    node* tail = reverse(head2); 
    head1=head ;
    while(head1!=NULL || tail!=NULL){
        if(head1->data!=tail->data){
           return false  ; 
        }
        head1=head1->next ; 
        tail=tail->next ; 
    }  
    return true ;
}
