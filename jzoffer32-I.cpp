// https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/

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
    vector<int> levelOrder(TreeNode* root) {
        vector<int> v1;
        queue<TreeNode*> q;
        if (root != NULL) {
            q.push(root);
        }
        while (!q.empty()) {
            v1.push_back(q.front()->val);
            if (q.front()->left != NULL) {
                q.push(q.front()->left);
            }
            if (q.front()->right != NULL) {
                q.push(q.front()->right);
            }
            q.pop();
        }
        return v1;
    }
};

int main() {
    TreeNode* l2_2_left = new TreeNode(15);
    TreeNode* l2_2_right = new TreeNode(7);
    TreeNode* l1_left = new TreeNode(9);
    TreeNode* l1_right = new TreeNode(20, l2_2_left, l2_2_right);
    TreeNode* root = new TreeNode(3, l1_left, l1_right);
    Solution s;
    vector<int> result = s.levelOrder(root);
    displayVector(result);
    return 0;
}
