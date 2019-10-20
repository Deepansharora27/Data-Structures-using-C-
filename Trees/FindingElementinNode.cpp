//
// Created by Deepanshu Arora on 17/10/19.
//

bool containsX(TreeNode<int>* root, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    bool isTrue=false;

    if(root->data==x){
        isTrue = true ;
        return isTrue ;
    }

    //Iterating Over the Children Vector :
    for(int i=0 ; i<root->children.size() ; i++){
        isTrue += containsX(root->children[i],x);
    }

    return isTrue ;
}

