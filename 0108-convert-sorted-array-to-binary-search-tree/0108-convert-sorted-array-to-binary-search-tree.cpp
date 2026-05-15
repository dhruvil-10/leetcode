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
    TreeNode* sortedArrayToBST(vector<int>& nums) {

         if(nums.empty()) return NULL;

        int mid_point  = nums.size()/2;

        TreeNode* root = new TreeNode(nums[mid_point]);
        vector <int> sub(nums.begin() , nums.begin()+mid_point);
        vector <int> sub1(nums.begin()+mid_point+1 , nums.end());


        root->left = sortedArrayToBST(sub);
        
        root->right = sortedArrayToBST(sub1);

        return root;
        
    }

};
