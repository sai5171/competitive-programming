#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int orangesRotting(vector<vector<int>> &grid) {
      queue<tuple<int, int, int>> q;
      for (auto i = 0; i < grid.size(); i++) {
        for (auto j = 0; j < grid[i].size(); j++) {
          if (grid[i][j] == 2) {
            tuple<int, int, int> newt;
            get<0>(newt) = 0;
            get<1>(newt) = i;
            get<2>(newt) = j;
            q.push(newt);
          }
        }
      }

      long long int mins = 0;
      while(!q.empty()) {

        tuple<int, int, int> curt = q.front();
        q.pop();


        int cur_min = get<0>(curt), i = get<1>(curt), j = get<2>(curt);

        mins = cur_min;

        if (i - 1 >= 0 && grid[i - 1][j] == 1) {
          grid[i - 1][j] = 2;

          tuple<int, int, int> newt;
          get<0>(newt) = cur_min + 1;
          get<1>(newt) = i - 1;
          get<2>(newt) = j;
          q.push(newt);
        }

        if (i + 1 < grid.size() && grid[i + 1][j] == 1) {
          grid[i + 1][j] = 2;

          tuple<int, int, int> newt;
          get<0>(newt) = cur_min + 1;
          get<1>(newt) = i + 1;
          get<2>(newt) = j;
          q.push(newt);
        }

        if (j - 1 >= 0 && grid[i][j - 1] == 1) {
          grid[i][j - 1] = 2;

          tuple<int, int, int> newt;
          get<0>(newt) = cur_min + 1;
          get<1>(newt) = i;
          get<2>(newt) = j - 1;
          q.push(newt);
        }

        if (j + 1 < grid[0].size() && grid[i][j + 1] == 1) {
          grid[i][j + 1] = 2;

          tuple<int, int, int> newt;
          get<0>(newt) = cur_min + 1;
          get<1>(newt) = i;
          get<2>(newt) = j + 1;
          q.push(newt);
        }
      }

      bool check = true;
      for (auto i = 0; i < grid.size(); i++) {
        for (auto j = 0; j < grid[i].size(); j++) {
          if (grid[i][j] == 1) {
            return -1;
          }
        }
      }

      return mins;
    }
};

int main() {
  // vector<vector<int>> grid = {
  //   {2, 1, 1},
  //   {1, 1, 0},
  //   {0, 1, 1}
  // };
  vector<vector<int>> grid = {
    {2, 1, 1},
    {0, 1, 1},
    {1, 0, 1}
  };
  // vector<vector<int>> grid = {
  //   {0, 2}
  // };

  Solution obj;
  cout << obj.orangesRotting(grid) << endl;
}
