// https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof/

#include <vector>
#include <queue>
#include "utility.cpp"
using namespace std;

/**
 * Definition for a binary tree node.

 * [3,9,20,null,null,15,7]
 * [3,9,20,15,7]
 */

struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {};
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<vector<TreeNode*>> q;
        if (root != NULL) {
            vector<TreeNode*> v({ root });
            q.push(v);
        }
        while (!q.empty()) {
            vector<int> vValue;
            vector<TreeNode*> vNode;
            for (TreeNode* node : q.front()) {
                vValue.push_back(node->val);
                if (node->left != NULL) {
                    vNode.push_back(node->left);
                }
                if (node->right != NULL) {
                    vNode.push_back(node->right);
                }
            }
            result.push_back(vValue);
            if (vNode.size() > 0) {
                q.push(vNode);
            }
            q.pop();
        }
        return result;
    }
};

int main() {
    TreeNode* l2_2_left = new TreeNode(15);
    TreeNode* l2_2_right = new TreeNode(7);
    TreeNode* l1_left = new TreeNode(9);
    TreeNode* l1_right = new TreeNode(20, l2_2_left, l2_2_right);
    TreeNode* root = new TreeNode(3, l1_left, l1_right);
    Solution s;
    vector<vector<int>> result = s.levelOrder(root);
    displayVectorMatrix(result);
    return 0;
}
