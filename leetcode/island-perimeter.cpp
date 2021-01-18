#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int islandPerimeter(vector<vector<int>> &grid) {
      int count = 0;

      for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
          if (grid[i][j] == 1) {
            if (i - 1 < 0 || (i - 1 >= 0 && grid[i - 1][j] == 0))
              count++;
            if (i + 1 >= grid.size() || (i + 1 < grid.size() && grid[i + 1][j] == 0))
              count++;
            if (j - 1 < 0 || (j - 1 >=0 && grid[i][j - 1] == 0))
              count++;
            if (j + 1 >= grid[0].size() || (j + 1 < grid[0].size() && grid[i][j +1] == 0))
              count++;
          }
        }
      }
      return count;
    }
};

int main() {
  vector<vector<int>> grid = {
    {1, 1, 0, 0},
    {1, 1, 1, 0},
    {0, 1, 0, 0},
    {1, 1, 0, 0}
  };

  Solution obj;
  cout << obj.islandPerimeter(grid) << endl;
}
