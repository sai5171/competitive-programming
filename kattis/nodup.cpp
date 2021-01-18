#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  map<string,lli> m;
  string s;
  while(cin >> s)
  {
    lli temp =m[s];
    m[s]=++temp;
  }
  bool check=false;
  for(auto i=m.begin();i!=m.end();i++)
  {
    if(i->second>1)
    {
      check=true;
      break;
    }
  }
  if(check)
    cout << "no\n";
  else
    cout << "yes\n";
  return 0;
}