class Solution {
  public:
  
  Node* BalancedBST(vector<int>& nums, int l, int r){
      if(l>r){
          return NULL;
      }
      int mid=l+(r-l)/2;
      Node* node=new Node(nums[mid]);
      node->left=BalancedBST(nums,l,mid-1);
      node->right=BalancedBST(nums,mid+1,r);
  }
  
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        
        Node* root=BalancedBST(nums,0,nums.size()-1);
        return root;
    }
};
