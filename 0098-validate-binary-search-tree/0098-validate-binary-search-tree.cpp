class Solution {
public:
    bool isValidBST(TreeNode* root) {

        TreeNode* curr = root;
        TreeNode* pre = nullptr;
        long long prevValue = LLONG_MIN;  // also fix edge case
        bool isValid = true;

        while (curr != nullptr) {
            if (curr->left == nullptr) {
                if (curr->val <= prevValue) {
                    isValid = false;
                }
                prevValue = curr->val;
                curr = curr->right;
            } else {
                pre = curr->left;
                while (pre->right != nullptr && pre->right != curr) {
                    pre = pre->right;
                }

                if (pre->right == nullptr) {
                    pre->right = curr;
                    curr = curr->left;
                } else {
                    pre->right = nullptr;  // MUST restore

                    if (curr->val <= prevValue) {
                        isValid = false;
                    }
                    prevValue = curr->val;
                    curr = curr->right;
                }
            }
        }

        return isValid;
    }
};