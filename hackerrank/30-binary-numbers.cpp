#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int res=0,count=0;
    while(n>0)
    {
        int r=n%2;
        if(r==0)
        {
            res=max(res,count);
            count=0;
        }
        else
            count++;
        n=n>>1;
    }
     res=max(res,count);
    cout << res << endl;
    return 0;
}
