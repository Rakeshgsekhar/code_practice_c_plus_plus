#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>
#include <map> 

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:

    void getVerticalOrder(TreeNode* node,int index,map<int,vector<int>>& result){
        if(node == NULL){
            return;
        }
        result[index].push_back(node->val);
        getVerticalOrder(node->left,index-1,result);
        getVerticalOrder(node->right,index+1,result);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>> result;
        // result m;
        int index =0;
        getVerticalOrder(root,index,result);

        vector<vector<int>> finalresult;

        for(map<int,vector<int>>::iterator it = result.begin(); it != result.end();it++){
            // sort(it->second.begin(), it->second.end());
            finalresult.push_back(it->second);
        }
        
        return finalresult;
    }
};