#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    bool exist(vector<vector<char>> &board, string word) {
      bool exist = false;

      for (size_t i = 0; i < board.size(); i++) {
        for (size_t j = 0; j < board[i].size(); j++) {
          if (board[i][j] == word[0]) {
            exist = exist || this->check(board, i, j, 0, word);
          }
        }
      }

      return exist;
    }
    bool check(vector<vector<char>> v, int i, int j, int index, string word) {
      //cout << i << " " << j << " " << index << " " << word[index] << endl;

      if (index == word.length() -1) return true;
     
      bool check = false;
      v[i][j] = '.';
      
      if (i - 1 >= 0 && v[i - 1][j] != '.' && v[i - 1][j] == word[index + 1]) {
        check = check || this->check(v, i - 1, j, index + 1, word);
      }
      if (j - 1 >= 0 && v[i][j - 1] != '.' && v[i][j - 1] == word[index + 1]) {
        check = check || this->check(v, i, j - 1, index + 1, word);
      }
      if (j + 1 < v[0].size() && v[i][j + 1] != '.' && v[i][j +1] == word[index + 1]) {
        check = check || this->check(v, i, j + 1, index + 1, word);
      }
      if (i + 1 < v.size() && v[i + 1][j] != '.' && v[i + 1][j] == word[index + 1]) {
        check = check || this->check(v, i + 1, j, index + 1, word);
      }
      
      return check;
    }
};

int main() {
  vector<vector<char>> board = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
  };

  Solution obj;
  cout << (obj.exist(board, "ASFCS") ? "true" : "false") << endl;
}
