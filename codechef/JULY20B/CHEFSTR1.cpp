#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t;
  cin >> t;
  while(t--) {
    long long int n;
    cin >> n;

    long long int count = 0;

    long long int prev;

    n--;
    cin >> prev;
    while(n--) {
      long long int s;
      cin >> s;
      count += abs(s - prev) - 1;
      prev = s;

    }
    cout << count << endl;
  }
  return 0;
}
