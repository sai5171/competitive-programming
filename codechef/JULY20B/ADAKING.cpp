#include <bits/stdc++.h>

using namespace std;

// empty(0), can_move(1), blocks(2), king(3)

void fillMove(vector< vector<int> > &v, long long int i, long long int j, long long int &k) {
  if (i - 1 >= 0 && v[i - 1][j] == 0 && k > 0) {
    v[i - 1][j] = 1;
    k--;
    fillMove(v, i - 1, j, k);
  }
  if (i + 1 <= 7 && v[i + 1][j] == 0 && k > 0) {
    v[i + 1][j] = 1;
    k--;
    fillMove(v, i + 1, j, k);
  }
  if (j - 1 >= 0 && v[i][j - 1] == 0 && k > 0) {
    v[i][j - 1] = 1;
    k--;
    fillMove(v, i, j - 1, k);
  }
  if (j + 1 >= 0 && v[i][j + 1] == 0 && k > 0) {
    v[i][j + 1] = 1;
    k--;
    fillMove(v, i, j + 1, k);
  }

  return;
}

void fillBlocks(vector< vector<int> > &v) {
  for (long long int i = 0; i < v.size(); i++) {
    for(long long int j = 0; j < v[i].size(); j++) {
      if (v[i][j] == 0) {
        if (i - 1 >= 0 && (v[i - 1][j] == 3 || v[i - 1][j] == 1)) {
          v[i][j]= 2;
        } else if (i + 1 <= 7 && (v[i + 1][j] == 3 || v[i + 1][j] == 1)) {
          v[i][j]= 2;
        } else if (j - 1 >= 0 && (v[i][j - 1] == 3 || v[i][j - 1] == 1)) {
          v[i][j]= 2;
        } else if (j + 1 <= 7 && (v[i][j + 1] == 3 || v[i][j + 1] == 1)) {
          v[i][j]= 2;
        } else if (i - 1 >= 0 && j - 1 >= 0 && (v[i - 1][j - 1] == 3 || v[i - 1][j - 1] == 1)) {
          v[i][j]= 2;
        } else if (i - 1 >= 0 && j + 1 <= 7 && (v[i - 1][j + 1] == 3 || v[i - 1][j + 1] == 1)) {
          v[i][j]= 2;
        } else if (i + 1 <= 7 && j - 1 >= 0 && (v[i + 1][j - 1] == 3 || v[i + 1][j - 1] == 1)) {
          v[i][j]= 2;
        } else if (i + 1 <= 7 && j + 1 <= 7 && (v[i + 1][j + 1] == 3 || v[i + 1][j + 1] == 1)) {
          v[i][j]= 2;
        }
      }
    }
  }
}

int main() {
  long long int t;
  cin >> t;
  while(t--) {
    long long int k;
    cin >> k;
    vector< vector<int> > v(8, vector<int> (8, 0));
    v[0][0] = 3;
    k--;
    fillMove(v, 0, 0, k);
    fillBlocks(v);

    for (long long int i = 0; i < v.size(); i++) {
      for(long long int j = 0; j < v[i].size(); j++) {
        // cout << v[i][j];
        if (v[i][j] == 3) {
          cout << "O";
        } else if (v[i][j] == 2) {
          cout << "X";
        } else {
          cout << ".";
        }
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}