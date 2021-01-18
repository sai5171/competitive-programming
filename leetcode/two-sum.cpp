#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
      map<int, int> m;
      vector<int> ans;

      for (size_t i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];

        
        if (m.find(diff) != m.end()) {
          ans.push_back(m[diff]);
          ans.push_back(i);
          break;
        }
        m[nums[i]] = i;
      }

      return ans;

    }
};

int main() {
  Solution obj;
  vector<int> ans = { 2, 7, 11, 15};
  
  ans = obj.twoSum(ans, 9);

  for (size_t i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}
