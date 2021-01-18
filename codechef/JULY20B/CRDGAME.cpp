#include <bits/stdc++.h>

using namespace std;

long long int calc(long long int a) {
  long long int x = 0;
  while(a > 0) {
    x += a % 10;
    a /= 10;
  }
  return x;
}

int main() {
  long long int t;
  cin >> t;
  while(t--) {
    long long int n;
    cin >> n;
    long long int chef = 0, morty = 0;
    while(n--) {
      long long int a, b;
      cin >> a >> b;
      a = calc(a);
      b = calc(b);
      if (a > b) {
        chef++;
      } else if (a < b) {
        morty++;
      } else {
        chef++;
        morty++;
      }
    }

    if (chef > morty) {
      cout << "0 " << chef << endl;
    } else if (chef < morty) {
      cout << "1 " << morty << endl;
    } else {
      cout << "2 " << morty << endl;
    }
  }
  return 0;
}