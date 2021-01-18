#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int longestCommonSubsequence(string text1, string text2) {
      vector<vector<int>> v(text1.length() + 1, vector<int>(text2.length() + 1, 0));

      for (int i = 1; i <= text1.length(); i++) {
        for(int j = 1; j <= text2.length(); j++) {
          if (text1[i - 1] == text2[j - 1]) {
            v[i][j] = v[i - 1][j - 1] + 1; 
          } else {
            v[i][j] = max(v[i - 1][j], v[i][j - 1]);
          }
        }
      }

      return v[text1.length()][text2.length()]; 
		}
};

int main() {
	Solution obj;
  string s1, s2;
  cin >> s1;
  cin >> s2;
	cout << obj.longestCommonSubsequence(s1, s2) << endl;
  return 0;
}
