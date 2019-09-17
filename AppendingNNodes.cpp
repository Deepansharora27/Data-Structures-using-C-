//head is the head of the linked list and n is  how many element you want to append from the last to the front
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
    int count=0; 
    node* temp = head ; 
    while(temp!=NULL){
        temp=temp->next ; 
        count++ ; 
    }
    return count ; 
}

node* append_LinkedList(node* head,int n)
{
    //write your code here
    int result = length(head); 
    int count = result-n ; 
    int i=1 ; 
    node* current = head ; 
    while(i<count){
        current=current->next ; 
        i++ ; 
    }
    node* head2 = current->next ; 
    current->next=NULL ; 
    
    node* tail = head2 ; 
    while(tail->next!=NULL){
        tail=tail->next ; 
    }
    tail->next=head ; 
    return head2 ; 
}
