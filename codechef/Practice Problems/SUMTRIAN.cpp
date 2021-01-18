#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
  lli t;
  cin >> t;
  while(t--)
  {
    lli n;
    cin >> n;
    lli a[n][n],b[n][n];
    for(lli i=0;i<n;i++)
    {
      for(lli j=0;j<i+1;j++)
      {
        cin >> a[i][j];
        b[i][j]=a[i][j];
      }
    }
    for(lli i=0;i<n-1;i++)
    {
      for(lli j=0;j<i+1;j++)
      {
        if(b[i][j]+a[i+1][j]>b[i+1][j])
          b[i+1][j]=b[i][j]+a[i+1][j];
        if(b[i][j]+a[i+1][j+1]>b[i+1][j+1])
          b[i+1][j+1]=b[i][j]+a[i+1][j+1];
      }
    }
    lli max=LLONG_MIN;
    for(lli i=n-1,j=0;j<i+1;j++)
    {
      if(max<b[i][j])
        max=b[i][j];
    }
    cout << max << endl;
  }
  return 0;
}
