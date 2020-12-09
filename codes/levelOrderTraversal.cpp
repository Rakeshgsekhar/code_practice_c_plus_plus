#include<bits/stdc++.h> 
using namespace std; 
  
// Structure of binary tree 
struct Node{ 
    Node * left; 
    Node* right; 
    int data; 
}; 

Node* newNode(int key){ 
    Node* node=new Node(); 
    node->left = node->right = NULL; 
    node->data=key; 
    return node; 
}

void printLevelOrder(Node *node,int level){
    if(node == NULL)
        return;

    if(level == 1)
        cout<<node->data<< " ";
    else if(level > 1){
        printLevelOrder(node->left,level-1);
        printLevelOrder(node->right,level-1);
    }
}

int height(Node *node){
    if(node == NULL){
        return 0;
    }else{
        int lheight = height(node->left);
        int rheight = height(node->right);
        if(lheight > rheight)
            return (lheight+1);
        else return (rheight+1);
    }
}


void levelOrder(Node *node){
    int h = height(node);
    int i;
    for ( i =0;i<=h;i++){
        printLevelOrder(node,i);
    }
}

int main(){ 
    Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->right = newNode(4); 
    root->left->right->right = newNode(5); 
    root->left->right->right->right = newNode(6); 
    cout<<"Following are nodes in top view of Binary Tree\n";  
    levelOrder(root); 
    return 0; 
} 