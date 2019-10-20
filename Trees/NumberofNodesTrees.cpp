//
// Created by Deepanshu Arora on 15/10/19.
//

int NumNodes(TreeNodeClass<int>* root){
    int ans=1 ;
    for(int i=0 ; i<root->children.size() ; i++){
        ans += NumNodes(root->children[i]);
    }
    return ans ;
}

