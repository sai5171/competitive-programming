#include <bits/stdc++.h>

using namespace std;

long long int twopowern(long long int n) {
  long long int r = 1;
  while(n!=0) {
    r *= 2;
    n--;
  }
  return r;
}

int main() {
  long long int n;
  cin >> n;
  long long int ans = twopowern(n);
  cout << ans - n - 1 << endl;
  return 0;
}
