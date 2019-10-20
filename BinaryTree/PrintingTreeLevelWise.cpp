//
// Created by Deepanshu Arora on 20/10/19.
//
#include<queue>
// Following is the Binary Tree node structure
/**************
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

void printLevelWise(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    queue<BinaryTreeNode<int>*> PendingNodes ;
    PendingNodes.push(root);
    while(PendingNodes.size()!=0){
        BinaryTreeNode<int>* front = PendingNodes.front();
        PendingNodes.pop();
        cout << front->data << ":"; // 1st Debugging Mistake
        if(front->left!=NULL){
            PendingNodes.push(front->left);
            cout << "L:" << front->left->data << "," ;
        }else{
            cout << "L:" << "-1" << "," ;
        }
        if(front->right!=NULL){
            PendingNodes.push(front->right);
            cout << "R:" << front->right->data ;
        }else{
            cout << "R:" << "-1" ;
        }
        cout << endl ;

    }


}

