#include <bits/stdc++.h>

using namespace std;

class Solution {
  private:
    void fill(vector<vector<char>> &grid, int x, int y) {
      grid[x][y] = '0';
      if (x - 1 >= 0 && grid[x - 1][y] == '1')
        this->fill(grid, x - 1, y);
      if (x + 1 < grid.size() && grid[x + 1][y] == '1')
        this->fill(grid, x + 1, y);
      if (y - 1 >= 0 && grid[x][y - 1] == '1')
        this->fill(grid, x, y - 1);
      if (y + 1 < grid[0].size() && grid[x][y + 1] == '1')
        this->fill(grid, x, y + 1);
    }
  public:
    int numIslands(vector<vector<char>> &grid) {
      int count = 0;

      for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
          if (grid[i][j] == '1') {
            count++;
            this->fill(grid, i, j);
          }
        }
      }
      return count;
    }
};

int main() {
  vector<vector<char>> grid = {
    {'1', '1', '0', '0', '0'},
    {'1', '1', '0', '0', '0'},
    {'0', '0', '1', '0', '0'},
    {'0', '0', '0', '1', '1'}
  };

  Solution obj;
  cout << obj.numIslands(grid) << endl;
}
