//
// Created by Deepanshu Arora on 17/10/19.
//



// Following is the given Tree node structure
/**************

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
***************/
class Pair{
public:
    TreeNode<int>* Node ;
    int NodeSum ;

    Pair(){
        Node = NULL ;
        NodeSum=0 ;
    }
};


Pair maxSum(TreeNode<int>* root){

    Pair x ;
    Pair ans ; // Here , we are assuming that the Pair Class is Having Two Objects .

    //Iterating Over the Children vector :
    if(root == NULL)
    {
        ans.Node = NULL ;
        ans.NodeSum = 0 ;
        return ans ;
    }
    ans.Node = root ;
    ans.NodeSum = root->data ;
    for(int i=0;i<root->children.size();i++){
        ans.NodeSum += root->children[i]->data ; //Sum of the Root Node and its immediate Children .
    }
    for(int i=0 ; i<root->children.size() ; i++){

        x = maxSum(root->children[i]); // Its Returning Multiple Objects
        if(x.NodeSum>ans.NodeSum){
            ans.NodeSum=x.NodeSum ;
            ans.Node=x.Node ;
        }
    }
    return ans ;

}


TreeNode<int>* maxSumNode(TreeNode<int> *root){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root == NULL)
        return NULL ;
    Pair ans = maxSum(root);
    return ans.Node ;
}




