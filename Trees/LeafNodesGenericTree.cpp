//
// Created by Deepanshu Arora on 17/10/19.
//

int numLeafNodes(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    //Base Case for the problem :

    if(root==NULL)
        return 0 ;

    if(root->children.size()==0)
        return 1 ;

    int NumofNodes = 0 ;

    for(int i=0 ; i<root->children.size() ; i++){
        NumofNodes += numLeafNodes(root->children[i]);
    }

    return NumofNodes ;



}

