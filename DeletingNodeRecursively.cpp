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

Node* deleteNodeRec(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    //Base Case for the Problem : 
    if(head==NULL)
        return head ; 
    
    //Small Calculation Part : 
    if(i==0){
        head=head->next ; 
        return head ; 
    }
    
    
    
    //Recursive Calculation Part : 
    Node* temp = head->next ;
   Node* Address =  deleteNodeRec(temp,i-1); 
    head->next=Address ; 
    return head ; 
    
    
}


