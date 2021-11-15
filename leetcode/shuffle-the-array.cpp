#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> r;

      for (int i = 0, j = n; i < n; i++,j++) {
        r.push_back(nums[i]);
        r.push_back(nums[j]);
      }

      return r;
    }
};

int main() {
  vector<int> v = {2,3,5,4,1,7};

  Solution obj;
  cout << obj.shuffle(v, 3) << endl;
}
