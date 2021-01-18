#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,y;
  cin >> x >> y;
  if(x>1 && y>1)
    cout << "1\n";
  else if(x<1 && y>1)
    cout << "2\n";
  else if(x<1 && y<1)
    cout << "3\n";
  else
    cout << "4\n";
  return 0;
}