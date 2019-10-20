//
// Created by Deepanshu Arora on 20/10/19.
//
bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    //When Both the Trees are Empty :
    if(root1==NULL && root2==NULL)
        return true ;

    //When either of the One Trees is Empty :
    if(root1==NULL || root2==NULL)
        return false ;

    if(root1->data==root2->data){
        return true ;
    }


    int i=0 ;
    int j=0 ;

    while(i<root1->children.size()){
        while(j<root2->children.size()){
            return isIdentical(root1->children[i++],root2->children[j++]);
        }
    }


