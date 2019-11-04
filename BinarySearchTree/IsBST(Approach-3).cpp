//
// Created by Deepanshu Arora on 03/11/19.
//

bool isBST(BinaryTreeNode<int>* root,int min=INT_MIN,int max=INT_MAX){ //Function Signature
    //Base case for the Problem :
    if(root==NULL){
        return true ;
    }
    if(root->data<min || root->data>max){
        return false ;
    }


    //Top To Bottom Ladder Approach :
    bool isLeftOk = isBST(root->left,min,root->data-1);
    bool isRightOk = isBST(root->right,min,root->data,max);

    return isLeftOk && isRightOk ;

}

