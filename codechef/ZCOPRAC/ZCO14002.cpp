#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  vector<long long int> v;
  while(n--) {
    long long int x;
    cin >> x;
    v.push_back(x);
  } 
  long long int size = v.size();
  vector<long long int> ans(size,0);
  ans[0] = v[0];
  ans[1] = v[1];
  ans[2] = v[2];
  for(long long int i=3;i<size;i++) {
    ans[i]= v[i]+min(ans[i-1],min(ans[i-2],ans[i-3]));
  }
  cout << min(ans[size-1],min(ans[size-2],ans[size-3])) << endl;
  return 0;
}
