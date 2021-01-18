#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,long long int> m;
  string s;
  while(getline(cin,s) && s[0]!='*')
  {
    long long int temp=m[s];
    m[s]=++temp;
  }
  long long int max=LLONG_MIN;
  string result;
  for(auto i=m.begin();i!=m.end();i++)
  {
    if(i->second>max)
    {
      max=i->second;
      result=i->first;
    }
  }
  bool check=false;
  for(auto i=m.begin();i!=m.end();i++)
  {
    if(i->first!=result && i->second==max)
    {
      check=true;
      break;
    }
  }
  if(check)
    cout << "Runoff!\n";
  else
    cout << result << "\n";
  return 0;
}
