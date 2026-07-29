class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> q;
        q.push(root);
        bool isOddLevel = false;

        while (!q.empty()) {
            int size = q.size();
            vector<TreeNode*> nodesAtLevel;

            for (int i = 0; i < size; ++i) {
                TreeNode* current = q.front();
                q.pop();

                nodesAtLevel.push_back(current);

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            if (isOddLevel) {
                int left = 0, right = nodesAtLevel.size() - 1;
                while (left < right) {
                    swap(nodesAtLevel[left]->val, nodesAtLevel[right]->val);
                    left++;
                    right--;
                }
            }

            isOddLevel = !isOddLevel; 
        }

        return root;
    }
};
