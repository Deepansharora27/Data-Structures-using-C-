//
// Created by Deepanshu Arora on 16/10/19.
//

void PrintatLevelK(TreeNodeClass<int>* root,int k){  //Function for Printing the Node at Level 'K' -->
    if(root==NULL)
        return ; //Handling the Edge Case .


    if(k==0) {
        cout << root->data << endl;
        return ;
    }

    //Then , Iterating Over the Children Vector :
    for(int i=0 ; i<root->children.size() ; i++){
        PrintatLevelK(root->children[i],k-1);
    }
}