#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli t;
  cin >> t;
  while(t--)
  {
    lli n;
    cin >> n;
    vector<lli> v(101,0);
    while(n--)
    {
      lli x;
      cin >> x;
      v[x]=1;
    }
    lli count=0;
    for(auto i=v.begin();i!=v.end();i++)
    {
      if(*i==1)
        count++;
    }
    cout << count << "\n";
  }
  return 0;
}
