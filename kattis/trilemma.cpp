#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin >> n;
  for(long long int i=1;i<=n;i++)
  {
    cout << "Case #" << i << ": ";
    long long int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double area=abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    if(area)
    {
      long long int a=(pow(abs(x2-x1),2.0)+pow(abs(y2-y1),2.0));
      long long int b=(pow(abs(x3-x1),2.0)+pow(abs(y3-y1),2.0));
      long long int c=(pow(abs(x2-x3),2.0)+pow(abs(y2-y3),2.0));
      if(a==b || b==c || c==a)
         cout << "isosceles ";
      else
         cout << "scalene ";
      if(a==b+c || b==c+a || c==a+b)
         cout << "right triangle\n";
      else if(a<b+c && b<c+a && c<a+b)
         cout << "acute triangle\n";
      else
         cout << "obtuse triangle\n";
    }
    else
       cout << "not a triangle\n";
  }
  return 0;
}
