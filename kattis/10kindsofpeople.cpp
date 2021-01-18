#include <bits/stdc++.h>

using namespace std;

void fill(vector<vector<int>> &v, long long int r, long long int c, long long int i, long long int j, long long int random, long long int val) {
  if (v[i][j] != random && v[i][j] == val) {
    v[i][j] = random;
    if (i - 1 >= 0 && v[i - 1][j] == val) {
      fill(v, r, c, i - 1, j, random, val);
    }
    if (i + 1 < r && v[i + 1][j] == val) {
      fill(v, r, c, i + 1, j, random, val);
    }
    if (j - 1 >= 0 && v[i][j - 1] == val) {
      fill(v, r, c, i, j - 1, random, val);
    }
    if (j + 1 < c && v[i][j + 1] == val) {
      fill(v, r, c, i, j + 1, random, val);
    }
  }
}

int main() {
  long long int r,c;
  cin >> r >> c;
  cin.get();

  vector<vector<int>> v;
  vector<vector<int>> backup;
  v.resize(r, vector<int> (c, -1));
  backup.resize(r, vector<int> (c, -1));

  for(long long int i = 0; i < r; i++) {
    for(long long int j = 0; j < c; j++) {
      char x;
      x = cin.get();
      v[i][j] = x == '1' ? 1 : 0;
      backup[i][j] = v[i][j];
    }
    cin.get();
  }

  long long int random = 2;
  for(long long int i = 0; i < r; i++) {
    for(long long int j = 0; j < c; j++) {
      if (v[i][j] == 0 || v[i][j] == 1) {
        fill(v, r, c, i, j, random, v[i][j]);
        random++;
      }
    }
  }

  long long int n;
  cin >> n;
  while(n--) {
    long long int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    r1--;
    c1--;
    r2--;
    c2--;
    if (v[r1][c1] == v[r2][c2]) {
      if (backup[r1][c1] == 1) {
        cout << "decimal" << endl;
      } else {
        cout << "binary" << endl;
      }
    } else {
      cout << "neither" << endl;
    }
  }
  return 0;
}
