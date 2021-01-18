#include <bits/stdc++.h>

using namespace std;

class TreeNode {
  public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
      this->val = x;
      this->left = NULL;
      this->right = NULL;
    }
};

class Solution {
  public:
    vector<int> rightSideView(TreeNode* root) {
      int level = -1;
      vector<int> ans;

      queue<pair<int, TreeNode *>> q;
      if (root != NULL)
        q.push(make_pair(0, root));

      while(!q.empty()) {
        pair<int, TreeNode*> now = q.front();
        q.pop();

        if (now.first > level) {
          ans.push_back((now.second)->val);
        }
        level = now.first;

        if (now.second->right != NULL)
          q.push(make_pair(now.first + 1, (now.second)->right));

        if (now.second->left != NULL)
          q.push(make_pair(now.first + 1, (now.second)->left));
      }

      return ans;
    }
};

int main() {
  TreeNode *root = new TreeNode(1);

  root->left = new TreeNode(2);
  root->right = new TreeNode(3);

  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(7);

  root->left->left->left = new TreeNode(8);
  root->left->left->right = new TreeNode(9);
  root->left->right->left = new TreeNode(10);
  root->left->right->right = new TreeNode(11);
  root->right->left->left = new TreeNode(12);
  root->right->left->right = new TreeNode(13);
  root->right->right->left = new TreeNode(14);
  root->right->right->right = new TreeNode(15);

  Solution obj;
  vector <int> ans = obj.rightSideView(root);

  for (auto i = ans.begin(); i != ans.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  return 0;
}
