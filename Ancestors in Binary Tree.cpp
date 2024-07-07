class Solution {
  public:
    // Function should return all the ancestor of the target node
    
    bool ancestor(struct Node *root,int target,vector<int> &ans)
    {
        if(root==NULL)
        {
            return false;
        }
        
        if(root-> data== target){
            return true;
        }
        
        
        if(ancestor(root->left, target, ans) || ancestor(root->right, target,ans)){
            ans.push_back(root->data);
            return true;
        }
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        
        vector<int> ans;
        ancestor(root,target,ans);
        return ans;
    }
};
