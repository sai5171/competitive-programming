#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin >> t;
  while(t--)
  {
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b==d && a<c)
      cout << "right\n";
    else if(b==d && a>c)
      cout << "left\n";
    else if(a==c && b<d)
      cout << "up\n";
    else if(a==c && b>d)
      cout << "down\n";
    else
      cout << "sad\n";
  }
  return 0;
} 
