int height(TreeNode<int>* root){
    //Function For Calculating Height Of The Tree :

    //Base Case :
    if(root==NULL)
    return 0 ; 

    int ans = 0 ; //Variable for Storing the final answer i.e. height of the tree 
    for(int i=0 ; i<root->children.size() ; i++){
        int childHeight = height(root->children[i]); 
        if(childHeight > ans)
        ans = childHeight ; 
    }
    

    return ans+1 ; 
}