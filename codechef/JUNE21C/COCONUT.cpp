#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;
  while(t--) {
    long long int xa, xb, Xa, Xb;
    cin >> xa >> xb >> Xa >> Xb;
    cout << (Xa / xa) + (Xb / xb) << endl;
  }
  return 0;
}
