#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  char x;
  lli c,h,e,f;
  c=h=e=f=0;
  while(cin >> x)
  {
    if(x=='\n')
      break;
    else if(x=='C')
      c++;
    else if(x=='H' && h<c)
      h++;
    else if(x=='E' && e<h)
      e++;
    else if(x=='F' && f<e)
      f++;
  }
  cout << f << "\n";
  return 0;
}
