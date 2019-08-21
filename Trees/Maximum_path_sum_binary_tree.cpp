class Solution {
public:
    int ans = INT_MIN;
    
    int solve(TreeNode* root)
    {
        if(!root)return 0;
        int left = max(solve(root->left),0);
        int right = max(solve(root->right),0);
        ans = max(ans , left+right+root->val);
        return max(left , right) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        
         solve(root);
        return ans;
        
        
        
    }
};
