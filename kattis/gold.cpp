#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli count_gold(char [][50],lli,lli,lli);
int main() {
  lli w,h;
  cin >> w >> h;
  char m[50][50];
  cin.get();
  for(auto i=0;i<h;i++)
  {
    for(auto j=0;j<w;j++)
    {
      char temp;
      cin >> temp;
      m[i][j]=temp;
    }
    cin.get();
  }
  lli x,y;
  for(auto i=0;i<h;i++)
  {
    for(auto j=0;j<w;j++)
    {
      if(m[i][j]=='P')
      {
        x=i;
        y=j;
      }
    }
  }
  cout << count_gold(m,x,y,0) << endl;
  /*
  for(auto i=0;i<h;i++)
  {
    for(auto j=0;j<w;j++)
    {
      cout << m[i][j];
    }
    cout << endl;
  }*/
  return 0;
}

lli count_gold(char m[][50],lli x,lli y,lli sum)
{
  if(m[x][y]=='#')
    return 0;
  if(m[x][y]=='G')
    sum++;
  m[x][y]='S';
  bool check = true;
  if(x-1>=0 && m[x-1][y]=='T')
    check=false;
  if(x+1<50 && m[x+1][y]=='T')
    check=false;
  if(y-1>=0 && m[x][y-1]=='T')
    check=false;
  if(y+1<50 && m[x][y+1]=='T')
    check=false;
 
  if(check)
  {
    if(m[x-1][y]=='.' || m[x-1][y]=='G')
     sum+=count_gold(m,x-1,y,0);
    if(m[x+1][y]=='.' || m[x+1][y]=='G')
      sum+=count_gold(m,x+1,y,0);
    if(m[x][y-1]=='.' || m[x][y-1]=='G')
     sum+=count_gold(m,x,y-1,0);
    if(m[x][y+1]=='.' || m[x][y+1]=='G')
     sum+=count_gold(m,x,y+1,0);
  }
  
  return sum;
}
