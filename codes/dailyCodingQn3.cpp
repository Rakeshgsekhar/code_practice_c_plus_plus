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

string serialize(Node *node){
    if (node == NULL){
        return "N";
    }

    string leftNode = serialize(node->left);
    string rightNode = serialize(node->right);

    return to_string(node->data)+","+leftNode+","+rightNode;
}

Node* deserialize(vector<int>list,int listIndex){
    if(list[listIndex] == -1){
        listIndex++;
        return NULL;
    }

    Node* newnode  = newNode(list[listIndex++]);
    newnode->left = deserialize(list,listIndex);
    newnode->right = deserialize(list,listIndex);

    return newnode;
}


Node* deserializeHelper(string nodes){
    vector<int>nodeVals;
    for(char c:nodes){
        if(c != ','){
            if(c != 'N'){
                int k = c-'0';
                nodeVals.push_back(k);
            }else{
                nodeVals.push_back(-1);
            }
            
        }
    }
     return deserialize(nodeVals,0);
}

int main(){ 
    vector<int>list;
    Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->right = newNode(4); 
    root->left->right->right = newNode(5); 
    root->left->right->right->right = newNode(6); 
    cout<<"Following are nodes in top view of Binary Tree\n";  
    levelOrder(root);
     cout<<endl;
    string nodes = serialize(root);
    cout<<nodes;
    cout<<endl;
    Node* newRoot =  deserializeHelper(nodes);
    levelOrder(root);
    return 0; 
} 