#include<bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  vector<long long int> a,b;
  long long int temp=n;
  while(temp--) {
    long long int x;
    cin >> x;
    a.push_back(x);
  }
  temp = n;
  while(temp--) {
    long long int x;
    cin >> x;
    b.push_back(x);
  }

  long long int t1=LLONG_MAX,t2=LLONG_MAX,t3=LLONG_MAX;

  auto i=b.begin();
  auto j=a.begin();
  for(; i!=b.end();i++,j++) {

    if (*i==1 && t1>*j) {
      t1 = *j;
    } else if (*i==2 && t2>*j) {
      t2 = *j;

    } else if(*i==3 && t3>*j) {
      t3 = *j;
    }
  }

//  cout << t1 << " " << t2 << " " << t3 << endl;
  if(t1==9223372036854775807 || t2==9223372036854775807) {
    cout << t3 << endl;
    return 0;
  }
  if((t1+t2)<t3){
    cout << t1+t2 << endl;
  } else {
    cout << t3 << endl;
  }
  return 0;
}
