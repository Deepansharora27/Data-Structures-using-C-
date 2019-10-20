//
// Created by Deepanshu Arora on 20/10/19.
//
#include<iostream>
#include<queue>
using namespace std ;
template<typename T>
class BinaryTreeNode{
public:
    T data ;
    BinaryTreeNode* left ;
    BinaryTreeNode* right ;

    BinaryTreeNode(T data){
      this->data=data ;
      left=NULL ;
      right=NULL ;
    }

    ~BinaryTreeNode(){
        delete left ;
        delete right ;
    }
};

void PrintTree(BinaryTreeNode<int> * root){
    if(root==NULL){
        return ;
    }


    cout << root->data << ":" ;
    if(root->left!=NULL){
        cout << "Left:" << root->left->data  << ",";
    }
    if(root->right!=NULL){
        cout << "Right:" << root->right->data  ;
    }
    cout << endl ;
    PrintTree(root->left);
    PrintTree(root->right);
}

BinaryTreeNode<int>* TakeInput(){
    int RootData ;
    cout << "Enter the Data " << endl ;
    cin >> RootData ;
    if(RootData==-1){
        return NULL ;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(RootData);  // Creating a New Node in the Binary Tree
    BinaryTreeNode<int>* LeftChild = TakeInput();
    BinaryTreeNode<int>* RightChild = TakeInput();
    root->left=LeftChild;
    root->right=RightChild ;
}

BinaryTreeNode<int>* TakeInputLevelWise(){
    int RootData ;
   cout << "Enter the Root Data :" << endl ;
   cin >> RootData ;
   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(RootData);
   if(RootData==-1){
       return NULL ; //In Case if there is No Root Node or in Other Words , the Whole Tree is Empty
   }
   queue<BinaryTreeNode<int>*> PendingNodes ;
   PendingNodes.push(root);
   while(PendingNodes.size()!=0){
       BinaryTreeNode<int>* front = PendingNodes.front();
       PendingNodes.pop();
       cout << "Enter left child of " << front->data << endl ;
       int leftChildData ;
       cin >> leftChildData ;
       if(leftChildData!=-1){
           BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
           front->left=child ;
           PendingNodes.push(child);

       }

       cout << "Enter the Right Child Data of " << front->data << endl ;
       int RightChildData ;
       cin >> RightChildData ;
       if(RightChildData!=-1){
           BinaryTreeNode<int>* Rchild = new BinaryTreeNode<int>(RightChildData);
           front->right=Rchild ;
           PendingNodes.push(Rchild);
       }
   }
   return root ;

}

int main(){
    BinaryTreeNode<int>* root = TakeInputLevelWise();
    PrintTree(root);
}

