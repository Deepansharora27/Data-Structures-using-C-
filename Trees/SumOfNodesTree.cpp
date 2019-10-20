int SumNodes(TreeNodeClass<int>* root){
    int sum=0 ;
    for(int i=0 ; i<root->children.size() ; i++){
        sum += SumNodes(root->children[i]);

    }
    return sum+root->data ;
}//
// Created by Deepanshu Arora on 15/10/19.
//

