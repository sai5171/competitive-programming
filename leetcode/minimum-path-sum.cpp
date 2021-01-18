#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int minPathSum(vector<vector<int>> &grid) {
      for (auto i = 0; i < grid.size(); i++) {
        for (auto j = 0; j < grid[0].size(); j++) {
          if (i == 0 && j == 0)
            continue;

          if (i == 0) {
            grid[i][j] = grid[i][j - 1] + grid[i][j];
            continue;
          }

          if (j == 0) {
            grid[i][j] = grid[i - 1][j] + grid[i][j];
            continue;
          }

          grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
        }
      }
      return grid[grid.size() - 1][grid[0].size() - 1];
    }
};

int main() {
  vector<vector<int>> grid = {
    {1, 3, 1},
    {1, 5, 1},
    {4, 2, 1}
  };

  Solution obj;
  cout << obj.minPathSum(grid) << endl;
}
