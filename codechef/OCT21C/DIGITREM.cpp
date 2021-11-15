#include <bits/stdc++.h>

using namespace std;

bool hasD(long long int n, int d) {
  bool bl = false;
  while (n > 0) {
    if (n % 10 == d) {
      bl = true;
      break;
    }
    n /= 10;
  }

  return bl;
}

long long int nextN(long long int n, int d, int fd) {
  deque<int> v;
  while (n > 0) {
    v.push_front(n % 10);
    n /= 10;
  }

  long long int i = v.size() - 1;
  for (; v[i] != d; i--) {
    v[i] = fd;
  }
  v[i] += 1;


  // for (long long int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";
  // cout << endl;
  //
  //
  // while (v[i] == 10) {
  //   v[i] = 0;
  //   i--;
  //   if (i == -1) {
  //     v.push_front(1);
  //     break;
  //   } else {
  //     v[i - 1] += 1;
  //   }
  // }
  //
  // for (long long int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";
  // cout << endl;


  long long int t = 0;
  for (i = 0; i < v.size(); i++) {
    t *= 10;
    t += v[i];
  }

  return t;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long long int t;
  cin >> t;
  while (t--) {
    long long int n;
    int d;
    cin >> n >> d;

    int fd = (d == 0) ? 1 : 0;

    long long int rs = 0;

    while(hasD(n, d)) {
      long long int tmp = nextN(n, d, fd);
      rs += tmp - n;
      n = tmp;
    }
    cout << rs << endl;
  }
  return 0;
}
