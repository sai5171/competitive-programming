#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> productExceptSelf(vector<int> &nums) {
      vector<int> l(nums.size(), 1), r(nums.size(), 1);

      for (int i = 1; i < nums.size(); i++) {
        l[i] = l[i - 1] * nums[i - 1];
      }
      for (int i = nums.size() - 1 - 1; i >= 0; i--) {
        r[i] = r[i + 1] * nums[i + 1];
      }
      for (auto i = 0; i < nums.size(); i++) {
        nums[i] = l[i] * r[i];
      }
      return nums;
    }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Solution obj;
  vector<int> ans = {1, 0};
  ans = obj.productExceptSelf(ans);

  for (auto i = ans.begin(); i != ans.end(); i++) {
    cout << *i << " ";
  }

  return 0;
}
