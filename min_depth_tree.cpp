class Solution {
public:
    int minDepth(TreeNode* root)
    {

    if(root==NULL)
      return 0;
    queue<TreeNode*> q;
    q.push(root);
    int depth=0;
    while(!q.empty())
    {
      depth++;
      int size=q.size();
      
      for(int i=0;i<size;i++)
      {
        TreeNode* tree=q.front();
        q.pop();
        if(tree->left)
          q.push(tree->left);
        if(tree->right)
          q.push(tree->right);
        if(tree->left==NULL && tree->right==NULL)
          return depth;

      }
      
    }
    return depth;
  }


};
