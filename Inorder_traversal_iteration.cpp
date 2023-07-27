vector<int> inorderTraversal(TreeNode* root)
    {

        stack<TreeNode*> st;
        vector<int> v;

        if(root==NULL)
        return v;
        

        while(root || !st.empty())
        {
            while(root)
            {
                st.push(root);
                root=root->left;
            }
            TreeNode* top=st.top();
            st.pop();
            v.push_back(top->val);
            root=top->right;

        }
        return v;
    }


