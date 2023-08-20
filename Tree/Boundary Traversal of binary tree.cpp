/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void traverseLeft(Node *root,vector<int> &ans){
        
        //base case (for root=NULL and for leaf node)
        if((root==NULL)||(root->left==NULL&&root->right==NULL))
            return;
            
        ans.push_back(root->data);
        
        if(root->left)
            traverseLeft(root->left,ans);
            
        else if(root->right)
            traverseLeft(root->right,ans);
    }
    
    void traverseLeaf(Node *root,vector<int> &ans){
        if(root==NULL)
            return;
            
        traverseLeaf(root->left,ans);
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->data);
        }
            
        traverseLeaf(root->right,ans);
    }
    
    void traverseRight(Node* root,vector<int> &ans){
        if((root==NULL)||(root->left==NULL&&root->right==NULL))
            return;
            
        if(root->right)
            traverseRight(root->right,ans);
            
        else if(root->left)
            traverseRight(root->left,ans);
            
        ans.push_back(root->data);
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root==NULL)
            return ans;
            
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->data);
            return ans;
        }
            
        ans.push_back(root->data);
        
        //left part print/store
        traverseLeft(root->left,ans);
        
        //traverse leaf nodes
        //left subtree
        traverseLeaf(root,ans);
        
        
        //right part print/store
        traverseRight(root->right,ans);
        
        return ans;
    }
};
