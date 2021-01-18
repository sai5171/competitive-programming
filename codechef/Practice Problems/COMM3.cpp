#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli t;
  cin >> t;
  while(t--)
  {
    long double r;
    cin >> r;
    r*=r;
    lli x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long double d1,d2,d3;
    d1=pow((x2-x1),2)+pow((y2-y1),2);
    d2=pow((x2-x3),2)+pow((y2-y3),2);
    d3=pow((x3-x1),2)+pow((y3-y1),2);
    lli count=0;
    if(d1<=r)
      count++;
    if(d2<=r)
      count++;
    if(d3<=r)
      count++;
    if(count>=2)
      cout << "yes\n";
    else 
      cout << "no\n";
  }
  return 0;
}

