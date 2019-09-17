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

int length(Node *head){
    int count =0 ; 
    struct Node* temp = head ;
    while(temp!=NULL){
        count++ ; 
        temp=temp->next ;
    }
    return count ; 
}

void printIthNode(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    
    int result = length(head); 
    
    struct Node* temp = head ; // For Traversing Through the Entire Linked List . 
    int g=1 ; 
    
    if(i<result){
    while(g<=i){
        temp=temp->next ; 
        g++ ; 
    }
    cout << temp->data << endl ; 
    }else{
        return ; 
    }
    
    
    
}