class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    
    vector<int> solve(Node *root){
        
        // {size, tf, mini, max} left max<node<right min
        
        if(root==NULL){
            return {0,1,INT_MAX,INT_MIN};
        }
        {
        if(root->left==NULL && root->right==NULL){
            // leaf
            return {1,1,root->data,root->data};
        }
        
        vector<int>left=solve(root->left);
        vector<int>right=solve(root->right);
        
        int leftsize=left[0], LTF=left[1], leftmini=left[2], leftmaxi=left[3];
        int rightsize=right[0], RTF=right[1], rightmini=right[2], rightmaxi=right[3];
        
        if(LTF==1 && RTF==1 && root->data>leftmaxi && root->data<rightmini){
            return {leftsize+rightsize+1,1,min(root->data,leftmini),max(root->data,rightmaxi)
        };
        
    }
    
     
     else{
         return {max(leftsize,rightsize),0,0,0};
     }
     
    }
    
    }
    int largestBst(Node *root)
    {
    	//Your code here
    	return solve(root)[0];
    }
};
