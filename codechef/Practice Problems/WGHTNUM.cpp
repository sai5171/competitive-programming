#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli powmod(lli a, lli b, lli c) {
  if(b==0) {
    return 1;
  }
  else if(b%2==0) {
    lli d = powmod(a,b/2,c);
    return (d*d)%c;
  } else {
    return ((a%c)*powmod(a,b-1,c))%c;
  }
}

int main() {
  lli t;
  cin >> t;
  while(t--) {
    lli n,w;
    lli temp;
    cin >> n >> w;
    if(w>=0) {
      if(w>=9) {
        cout << "0" << endl;
        continue;
      }
      temp =  powmod(10, n-2, 1000000000+7);
      temp = (temp * (9 - w)) % (1000000000+7);
    } else {
      w = -w;
      if(w>9) {
        cout << "0" << endl;
        continue;
      }
      temp = powmod(10, n-2, 1000000000+7);
      temp = (temp * (10 - w)) % (1000000000+7);
    }
    cout << temp  << endl;
  }
  return 0;
}

