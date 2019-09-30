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

node* skipMdeleteN(node  *head, int M, int N) {
    // Write your code here
    node* current=head ; 
    node* t ; 
    
    
   
    
    
    while(current!=NULL){
       
       int count=1 ; 
        if(M==0){
            return NULL ; 
        }
        
        while(count<M&&current!=NULL){
            current=current->next ; 
            count++ ; 
        }
        if(current==NULL){
            return head ; 
        }
        t=current->next ; 
        count=1 ; 
        while(count<=N&&t!=NULL){
            node* temp = t ; 
            t=t->next ; 
            delete temp ;  
            count++ ; 
    }
        current->next=t ; 
        current=t ; 
}
    return head ; 
    
}
