#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli n;
  cin >> n;
  cin.get();
  while(n--)
  {
    string s;
    getline(cin,s);
    lli a=0,b=0,count=0;
    char now='$';
    for(auto i=s.begin();i!=s.end();i++)
    {
      if(*i=='A')
      {
        a++;
        if(now=='A') {
          a+=count;
        }
        count=0;
        now='A';
      }
      else if(*i=='B')
      {
        b++;
        if(now=='B') {
          b+=count;
        }
        count=0;
        now='B';
      }
      else
        count++;
    }
    cout << a << " " << b << endl;
  }
  return 0;
}
