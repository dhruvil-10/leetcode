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

    vector<int> inorderTraversal(TreeNode* root) {

        stack <TreeNode*> st;
        TreeNode* cur = root;
        vector <int> answer;

        while(cur != NULL || !st.empty())
        {
            while(cur != NULL)
            {
                st.push(cur);
                cur= cur->left;
            }

            cur = st.top();
            st.pop();
            answer.push_back(cur->val);
            cur = cur->right;
        }

        return answer;

        
        
    }
};