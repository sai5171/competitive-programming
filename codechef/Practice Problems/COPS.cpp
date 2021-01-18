#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int main()
{
  lli t;
  int a=10,b=20;
  cin >> t;
  while(t--)
  {
    lli m,x,y;
    cin >> m >> x >> y;
    vector<lli> v;
    while(m--)
    {
      lli x;
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    lli count=0,house=0;
    for(auto i=v.begin();i!=v.end();i++)
    {
      lli d=*i-(x*y);
      if(d-house-1>0)
        count+=d-house-1;
      house=*i+(x*y);
    }
    if(101-house-1>0)
      cout << count+101-house-1 << endl;
    else
      cout << count << endl;
  }
  return 0;
}
