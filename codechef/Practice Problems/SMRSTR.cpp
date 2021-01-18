#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli t;
  cin >> t;
  while(t--) {
    lli n,m;
    cin >> n >> m;
    lli sum=1;
		bool flag=0;
    while(n--) {
      lli x;
      cin >> x;
      sum *= x;
			if(sum > 1000000000) 
				flag = 1;
    }
    while(m--) {
      lli x;
      cin >> x;
			if(flag)
				cout << "0 ";
			else
      	cout << x/sum << " ";
    }
    cout << endl;
  }
  return 0;
}
