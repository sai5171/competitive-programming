#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> runningSum(vector<int> &nums) {
      for (auto i = 1; i < nums.size(); i++) {
        nums[i] = nums[i] + nums[i - 1];
      }
      return nums;
    }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Solution obj;
  vector<int> ans = {1, 1, 1, 1, 1};
  ans = obj.runningSum(ans);

  for (auto i = ans.begin(); i != ans.end(); i++) {
    cout << *i << " ";
  }

  return 0;
}
