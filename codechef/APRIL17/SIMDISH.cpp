#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin >> t;
  cin.get();
  while(t--)
  {
    map<string,long long int> m;
    string s;
    long long int x;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    cin >> s;
    x = m[s];
    m[s]=x+1;
    int check=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
      if(i->second==2)
          check++;
    }
    if(check>=2)
      cout << "similar\n";
    else
      cout << "dissimilar\n";
  }
  return 0;
}
