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
    long long kthLargestLevelSum(TreeNode* root, int k) {
 unordered_map<int, long long> level_sums;
    int max_level = -1;

    // Traverse the tree and compute the level sums
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        TreeNode* node = q.front().first;
        int level = q.front().second;
        q.pop();

        if (node == NULL) {
            continue;
        }

        level_sums[level] += node->val;
        max_level = max(max_level, level);
        q.push({node->left, level+1});
        q.push({node->right, level+1});
    }

    // Find the kth largest level sum
    vector<long long> sums;
    for (int i = 0; i <= max_level; i++) {
        sums.push_back(level_sums[i]);
    }
    sort(sums.rbegin(), sums.rend());

    if (k > sums.size()) {
        return -1;
    } else {
        return sums[k-1];
    }
    }
};