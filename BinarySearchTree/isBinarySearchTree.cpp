//
// Created by Deepanshu Arora on 03/11/19.
//


//As an efficient and Valuable Software Engineer , your duty is not only to right the code
//but , writing the code with minimum Time Complexity as Possible .

int Minimum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MAX ;
    }
    return min(root->data , min(Minimum(root->left),Minimum(root->right)));
}

int Maximum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MIN ;
    }
    return max(root->data , max(Maximum(root->left),Maximum(root->right)));
}


bool isBST(BinaryTreeNode<int>* root){
    if(root==NULL){
        return true ;
    }

    int leftMax = Maximum(root->left); //For Getting Maximum Value of the Left SubTree .
    int RightMin = Minimum(root->right); //For Getting Minimum Value of the Right SubTree .

    //When Can we Say that our Tree is a Binary Search Tree ?
    //There prevails 4 conditions for checking this out :
    /*
     * 1).Root's Data should be greater than the Maximum of the Left SubTree
     * 2).Root's Data Should be less than or equal to the Minimum of the Right SubTree .
     * 3).The Left SubTree in  itself should be a Binary Search Tree .
     * 4).The Right SubTree in itself should be a Binary Search Tree .
     */
    bool output = (root->data > leftMax) && (root->data <= RightMin) && isBST(root->left) && isBST(root->right);
    return output ;

}

//Time Complexity of This Approach :
//O(n*h) , where h is the Height of the Tree .
//TODO : Push all the Done Work to GitHub Repository .

