//
// Created by Deepanshu Arora on 17/10/19.
//

void postOrder(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output in specified format.
     */



    for(int i=0 ; i<root->children.size() ; i++){
        postOrder(root->children[i]);
    }
    cout << root->data << " " ;

}

