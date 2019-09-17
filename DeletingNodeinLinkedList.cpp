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

int length(Node*head){
    int count=0 ; 
    Node* temp=head ; 
    while(temp!=NULL){
        temp=temp->next ; 
        count++ ; 
    }
    return count ; 
}

Node* deleteNode(Node *head, int i) {
    
    
    int result = length(head); 
    
    Node* p = head ; 
    Node* q = head ; 
    
    //Attempting this Question through a Two Pointer Approach . 
    if(i<result){ 
    if(i==0){
        head=head->next ; 
        return head; 
    }
    else{
    int count=0 ; 
    while(count<i-1){
        p=p->next ; 
        count++ ; 
    }
    
    count=0 ; 
    while(count<i){
        q=q->next ; 
        count++ ; 
    }
    p->next=q->next ; 
    delete q ; 
    return head ; 
    }
  }
    else
    {
        return head  ; 
    }
    
    
    
    //Now There will be three Cases in Deletion of the Node as Well 
    //1. Deletion at the Beginning of the Linked List 
    //2. Deletion at the Middle of the Linked List 
    //3. Deletion at the End of the Linked List . 
    
    
    
   
    
    
    
    
}


