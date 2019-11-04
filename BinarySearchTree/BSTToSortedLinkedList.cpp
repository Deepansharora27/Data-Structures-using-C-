// Following is the Binary Tree node structure
/**************

 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };

 class BinaryTreeNode {
 public :
 T data;
 BinaryTreeNode<T> *left;
 BinaryTreeNode<T> *right;

 BinaryTreeNode(T data) {
 this -> data = data;
 left = NULL;
 right = NULL;
 }
 };
 ***************/

Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    //Base Case for the Problem :
    if(root==NULL){
        return NULL ;
    }

    Node<int>* Lefthead ;
    Lefthead=constructBST(root->left);

    Node<int>* RightHead ;
    RightHead=constructBST(root->right);

    Node<int>* temp= new Node<int>(root->data);
    temp->next=RightHead ;

    //Traversing the LeftHead Node Linked List :
    Node<int>*head= Lefthead;
    while(Lefthead!=NULL && Lefthead->next!=NULL){
        Lefthead=Lefthead->next ;
    }

    if(Lefthead==NULL){
        return temp ;
    }else{
        Lefthead->next=temp ;
    }

    return head;

}