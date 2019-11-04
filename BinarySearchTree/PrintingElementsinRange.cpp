//
// Created by Deepanshu Arora on 03/11/19.
//
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

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

    //Base Case for the Problem :
    if(root==NULL){
        return ;
    }

    if(k1<root->data){
        elementsInRangeK1K2(root->left,k1,k2);
    }

    if ( k1 <= root->data && k2 >= root->data )
        cout<<root->data<<" ";

    if(k2>root->data){
        elementsInRangeK1K2(root->right,k1,k2);
    }





}


