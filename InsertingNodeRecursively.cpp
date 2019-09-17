//head is head of linked list,i is the index, data is data of your node
// Following is the node structure
/**************
 class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
 };
***************/



Node* insertNodeRec(Node *head, int i, int data) {
    
    
    
    
    if(head==NULL)
        return head;  //Base Case for the Problem . 
    
    Node* temp = head->next ;  
    
    
    
    if(i==0){
        Node* newNode = new Node(data); 
        newNode->next=head ; 
        head=newNode ; 
        return head ; 
    }
    
    //Making a Recursive Call : 
   Node* Address =  insertNodeRec(temp,i-1,data); 
    head->next=Address ; 
    return head ; 
    
}



