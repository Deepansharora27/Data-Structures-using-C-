//
// Created by Deepanshu Arora on 03/11/19.
//
class isBSTReturn{
public:
    bool isBST ;
    int minimum ;
    int maximum ;

};

isBSTReturn isBST2(BinaryTreeNode<int>* root){
    //Base Case for the Problem :
    if(root==NULL){
        isBSTReturn output ;
        output.isBST=true ;
        output.minimum=INT_MAX ;
        output.maximum=INT_MIN ;
        return output ;
    }

    isBSTReturn leftOutput = isBST2(root->left);
    isBSTReturn rightOutput = isBST2(root->right);
    int minimum = min(root->data,min(leftOutput.minimum,rightOutput.minimum)); //For Calculating the OverAll Minimum .
    int maximum = max(root->data,max(leftOutput.maximum,rightOutput.maximum)); //For Calculating the Overall Maxium .
    bool iSBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) && (leftOutput.isBST) && (rightOutput.isBST);
    isBSTReturn output ;
    output.minimum=minimum;
    output.maximum=maximum;
    output.isBST=iSBSTFinal;
    return output ;
}
