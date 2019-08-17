 
    bool isValidBST(TreeNode* root) {
        
        TreeNode* pre = NULL;
        if(root ==NULL )return true;
         stack<TreeNode*>st;
          while(root!=NULL || !st.empty())
          {
              while(root!=NULL)
              {
                  st.push(root);
                  root= root->left;
              }
              
              root = st.top();st.pop();
              if(pre !=NULL && root->val <=pre->val)return false;
              pre = root;
              root = root->right;
          }
        return true;
        
    }
