//head is the head of the linked list
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

int length(node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    // We have to traverse From Node to Node until we get the last Node which is having the Value NULL . 
    int count =0; 
    node* temp = head ; 
   // Node* tail = NULL ; // O(n^2) Time Complexity . 
    while(temp!=NULL){
        count++ ;  
        temp=temp->next ; 
    }
    return count ; 
}

node* bubble_sort_LinkedList_itr(node* head)
{
    //Sorting the Linked List Iteratively using Bubble Sort : 
    
    for(int i=0 ; i<length(head) ; i++)
    {
     node* current=head ; 
    node* previous = NULL ;
    while(current->next!=NULL){
        if(current->data > current->next->data){
            //Current Node's data is greater than next's node data 
            //Below is the Swapping Logic for swapping the Entire two Nodes : 
            if(previous!=NULL)
            {
            previous->next=current->next ; 
            node* next = current->next ; 
            current->next=next->next ; 
            next->next=current ; 
            previous=next ;
            }else{
                node* next = current->next ; 
                current->next=next->next ; 
                next->next=current ; 
                previous=next ;
                head=previous ; 
            }
        }else{
            previous=current ; 
            current=current->next ; //Moving Current Pointer Ahead . 
        }
    }   
    }
    return head ; 
     
    
}
