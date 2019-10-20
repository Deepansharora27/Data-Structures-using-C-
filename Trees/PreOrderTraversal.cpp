//
// Created by Deepanshu Arora on 17/10/19.
//
void PreOrder(TreeNodeClass<int>* root){
    if(root==NULL){
        return ; //Edge Case
    }
    cout << root->data << " " ;
    //Iterating Over the Children vector of Each Particular Node :
    for(int i=0 ; i<root->children.size() ; i++){
        PreOrder(root->children[i]);
    }
}
