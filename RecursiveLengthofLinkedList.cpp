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

int length(Node *head) {
    
    
    if(head==NULL)  // Base Case 
        return 0 ; 
    
     Node* temp = head->next ;  //Induction Hypothesis 
     int result = length(temp); 
    
     return result+1 ; 
    
     
}


