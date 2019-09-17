#include<iostream>
using namespace std ; 
#include "Node.cpp"


//Function for Finding Length of a Linked List 

/*Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};*/

int length(Node* head){
	int count =0 ; 
    Node* temp = head ; 
   
    while(temp!=NULL){
        count++ ;  
        temp=temp->next ; 
    }
    return count ; 
}


