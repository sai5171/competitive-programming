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
    lli count_z,count_neg1,count_pos1,count_oth;
    count_z=count_neg1=count_pos1=count_oth=0;
    while(n--)
    {
      lli x;
      cin >> x;
      if(x==0)
        count_z++;
      else if(x==-1)
        count_neg1++;
      else if(x==1)
        count_pos1++;
      else
        count_oth++;
    }
    if(count_oth>1)
      cout << "no\n";
    else if(count_oth==1 && count_neg1>0)
      cout << "no\n";
    else if(count_neg1>1 && count_pos1==0)
      cout << "no\n";
    else
      cout << "yes\n";
  }
  return 0;
}

