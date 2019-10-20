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

TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */TreeNode<int>* ans ;

    if(root->data>n){
        ans=root ;
    }else{
        ans=NULL ;
    }


    TreeNode<int>* temp ;
    for(int i=0 ; i<root->children.size() ; i++){
        temp = nextLargerElement(root->children[i],n);
        if(ans==NULL){
            ans=temp ;
        }
        if(ans!=NULL && temp!=NULL){
            if(temp->data<ans->data){
                ans=temp ;
            }
        }
    }

    return ans ;


}

