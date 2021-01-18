#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int h, p;
    cin >> h >> p;
    while(true) {
      if (h <= 0) {
        cout << "1" << endl; 
        break;
      }
      if (p <= 0) {
        cout << "0" << endl;
        break;
      }
      h -= p;
      p /= 2;
    }
  }
  return 0;
}
