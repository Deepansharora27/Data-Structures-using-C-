//
// Created by Deepanshu Arora on 15/10/19.
//

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL)
        return NULL ;

    TreeNode<int>* Max_node ;

    for(int i=0 ; i<root->children.size() ;  i++){
        Max_node = maxDataNode(root->children[i]);
    }
    if(Max_node > root)
        return Max_node ;
    else
        return root ;
}
