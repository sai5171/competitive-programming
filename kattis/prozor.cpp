#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli r,s,k;
char a[100][100];
lli count_of_flies(lli x,lli y)
{
  lli sum=0;
  for(auto i=x+1;i<x+k-1;i++)
  {
    for(auto j=y+1;j<y+k-1;j++)
    {
      if(a[i][j]=='*')
        sum++;
    }
  }
  return sum;
}
int main()
{
  cin >> r >> s >> k;
  cin.get();
  for(auto i=0;i<r;i++)
  {
    for(auto j=0;j<s;j++)
    {
      char x;
      cin >> x;
      a[i][j]=x;
    }
    cin.get();
  }
  lli count=LLONG_MIN;
  lli x,y;
  for(auto i=0;i<=r-k;i++)
  {
    for(auto j=0;j<=s-k;j++)
    {
      lli sum =count_of_flies(i,j);
      if(count<sum)
      {
        count=sum;
        x=i;
        y=j;
      }
    }
  }
  cout << count << endl;
  for(auto i=x;i<x+k;i++)
  {
    for(auto j=y;j<y+k;j++)
    {
      if(i==x || i==x+k-1)
        a[i][j]='-';
      else if(j==y || j==y+k-1)
        a[i][j]='|';
    }
  }
  a[x][y]='+';
  a[x+k-1][y]='+';
  a[x][y+k-1]='+';
  a[x+k-1][y+k-1]='+';
  for(auto i=0;i<r;i++)
  {
    for(auto j=0;j<s;j++)
      cout << a[i][j];
    cout << endl;
  }
  return 0;
}
