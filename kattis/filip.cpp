#include <bits/stdc++.h>

using namespace std;

long long int re(long long int x) {
  long long int temp = 0;
  while (x > 0) {
    int reminder = x % 10;
    x /= 10;
    temp = temp * 10 + reminder;
  }
  return temp;
}

int main() {
  long long int a,b;
  cin >> a >> b;
  a = re(a);
  b = re(b);
  cout << (a > b ? a : b) << endl;
  return 0;
}