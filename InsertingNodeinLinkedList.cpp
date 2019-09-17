#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail=NULL ; 
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode; 
		}
		else {
		  tail->next=newNode ; 
		  tail=newNode ; 
		}

		cin >> data;
	}
	return head;
}

Node* InsertNode(Node *head , int i , int data){
    Node *NewNode = new Node(data); 
    int count=0 ; 
    Node* temp = head ; 
    if(i==0){
    	NewNode->next=head ; 
    	head=NewNode ; 
    	return head ; 
    }
    while(count<i-1){
    	temp=temp->next ; 
    	count++ ; 
    }
    NewNode->next=temp->next ; 
    temp->next=NewNode ; 
    return head ;
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}

int main() {

	Node *head = takeInput();
	head=InsertNode(head,0,99); 
	print(head);

	
	/*
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	Node n3(3);
	Node n4(4);
	Node n5(5);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	print(head);

ee	print(head);
	*/
	/*
	// Dynamically
	Node *n3 = new Node(10);
	Node *head = n3;
	
	Node *n4 = new Node(20);
	n3 -> next = n4;

	*/

}

