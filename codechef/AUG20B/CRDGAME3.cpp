#include <bits/stdc++.h>

using namespace std;


long long int getCount(long long int x) {
  if (x <= 9) return 1;

  return ceil((float) (x / 9.0));
}

int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int pc, pr;
    cin >> pc >> pr;

    long long int cc = getCount(pc), cr = getCount(pr);
    //cout << cc << " " << cr << endl;

    
    if (cc < cr) {
      cout << "0 " << cc << endl;
    } else {
      cout << "1 " << cr << endl;
    }
    
  }
  return 0;
}
