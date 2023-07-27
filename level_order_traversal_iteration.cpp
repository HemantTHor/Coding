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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

       queue<TreeNode*> q;
       vector<vector<int>> v;
      

       if(root==NULL)
       return v;

        q.push(root);

       while(!q.empty())
       {

           vector<int> ans;
           int size=q.size();
           for(int i=0;i<size;i++)
           {
           TreeNode* frontNode=q.front();
           ans.push_back(frontNode->val);
           q.pop();
           if(frontNode->left!=NULL)
             q.push(frontNode->left);
           if(frontNode->right!=NULL)
                q.push(frontNode->right);
           }
           v.push_back(ans);

       }
       return v;

    }




};

