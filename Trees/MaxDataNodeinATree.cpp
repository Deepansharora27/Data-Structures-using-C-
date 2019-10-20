//
// Created by Deepanshu Arora on 15/10/19.
//


TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL)
        return NULL ;
    int max=0 ;

    TreeNode<int>* Max_node = new TreeNode<int>(0);

    for(int i=0 ; i<root->children.size() ;  i++){
        if(maxDataNode(root->children[i])->data>max){
            max=maxDataNode(root->children[i])->data;
            Max_node = maxDataNode(root->children[i]);
        }
    }
    if(root->data>Max_node->data){
        Max_node=root ;
        return Max_node ;
    }
    return Max_node ;

}
