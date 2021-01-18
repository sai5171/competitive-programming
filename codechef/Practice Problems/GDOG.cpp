#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli t;
  cin >> t;
  while(t--)
  {
    lli n,k;
    cin >> n >> k;
    lli max=LLONG_MIN;
    for(lli i=1;i<=k;i++)
    {
      lli x=n%i;
      if(x>max)
        max=x;
    }
    cout << max << "\n";
  }
  return 0;
}

