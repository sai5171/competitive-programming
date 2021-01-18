#include <bits/stdc++.h>

using namespace std;

class Solution {
  private:
    void fill(vector<vector<int>> &grid, int x, int y, int num) {
      grid[x][y] = num;
      if (x - 1 >= 0 && grid[x - 1][y] == 1)
        this->fill(grid, x - 1, y, num);
      if (x + 1 < grid.size() && grid[x + 1][y] == 1)
        this->fill(grid, x + 1, y, num);
      if (y - 1 >= 0 && grid[x][y - 1] == 1)
        this->fill(grid, x, y - 1, num);
      if (y + 1 < grid[0].size() && grid[x][y + 1] == 1)
        this->fill(grid, x, y + 1, num);
    }
    int countNum(vector<vector<int>> &grid, int num) {
      int count = 0;
      for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
          if (grid[i][j] == num) count++;
        }
      }
      return count;
    }
  public:
    int maxAreaOfIsland(vector<vector<int>> &grid) {
      int num = 2;
      int max_count = 0;

      for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
          if (grid[i][j] == 1) {
            this->fill(grid, i, j, num);
            int count = this->countNum(grid, num);
            if (max_count < count) {
              max_count = count;
            }
            num++;
          }
        }
      }
      return max_count;
    }
};

int main() {
  vector<vector<int>> grid = {
    {0,0,1,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,1,1,0,1,0,0,0,0,0,0,0,0},
    {0,1,0,0,1,1,0,0,1,0,1,0,0},
    {0,1,0,0,1,1,0,0,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,0,0,0,0,0,0,1,1,0,0,0,0}
  };

  Solution obj;
  cout << obj.maxAreaOfIsland(grid) << endl;
}
