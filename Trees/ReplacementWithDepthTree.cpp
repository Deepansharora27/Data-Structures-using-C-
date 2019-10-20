//
// Created by Deepanshu Arora on 20/10/19.
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

void replacement(TreeNode<int>* root , int depth){
    root->data=depth ;

    for(int i=0 ; i<root->children.size() ; i++){
        replacement(root->children[i],depth+1);
    }

}

void replaceWithDepthValue(TreeNode<int> *root){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the input tree itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */

    int depth=0 ;

    replacement(root,depth);





}



