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


BinaryTreeNode<int>* helper(int arr[] , int start , int end){
    //Base Case for the Problem :
    if(start>end){
        return NULL ;
    }


    int mid = (start+end)/2 ;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(arr[mid]);

    root->left = helper(arr,start,mid-1);
    root->right=helper(arr,mid+1,end);

    return root ;


}



BinaryTreeNode<int>* constructTree(int *input, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    //We have to return the Root of the Constructed Binary Search Tree .


    return helper(input,0,n-1);
}
