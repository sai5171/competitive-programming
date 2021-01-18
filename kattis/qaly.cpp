#include<bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  float ans = 0;
  cin >> n;
  while(n--) {
    float x,y;
    cin >> x >> y;
    ans += x * y;
  }
  printf("%.3f", ans);
  return 0;
}
