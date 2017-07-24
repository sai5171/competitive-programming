#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli t;
  cin >> t;
  while(t--)
  {
    lli n,m,k;
    cin >> n >> m >> k;
    lli x=abs(n-m);
    if(x<=k)
      cout << "0\n";
    else
      cout << x-k << "\n";
  }
  return 0;
}

