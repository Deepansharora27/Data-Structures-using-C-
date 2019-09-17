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

int indexOfNIter(Node *head, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
   
    Node* temp = head ; 
    int index=0 ; 
    
    while(temp!=NULL){
        if(temp->data==n){
            return index ; 
        }else{
            temp=temp->next ; 
            index++ ; 
        }   
    }
    return -1 ; 
    
}


