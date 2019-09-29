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

node* arrange_LinkedList(node* head)
{
    //write your code here
    node* OddHead=NULL ; 
    node* OddTail=NULL ; 
    node* EvenHead=NULL ;  
    node* EvenTail=NULL;
    
    //node* temp = head ; 
    while(head!=NULL){
        if(head->data%2==0){
            if(EvenHead==NULL){
                EvenHead=head ; 
                EvenTail=head ; 
                head=head->next ; 
            }else{
                EvenTail->next=head ; 
                EvenTail=head ; 
                head=head->next ; 
            }
        }else{
            if(OddHead==NULL){
                OddHead=head ; 
                OddTail=head ; 
                head=head->next ;
            }else{
                OddTail->next=head ; 
                OddTail=head ; 
                head=head->next ; 
            }
        }
    }
    if(OddHead==NULL){
        return EvenHead  ; 
    }else if(EvenHead==NULL){
        return OddHead  ; 
    }else{
    OddTail->next=NULL ; 
    EvenTail->next=NULL ; 
    OddTail->next=EvenHead ; 
    return OddHead ; 
    }
}
