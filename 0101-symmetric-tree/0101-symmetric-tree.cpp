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

    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return root;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

                invertTree(root->left);
                invertTree(root->right);


                return root;
        
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        if((p==NULL && q!=NULL)||(p!=NULL && q==NULL)) return false;
        if(p==NULL && q==NULL) return true;
        if(p->val!=q->val) return false;
        

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
    }


    bool isSymmetric(TreeNode* root) {

            invertTree(root->right);


        return isSameTree(root->left,root->right);

        
        
    }
};