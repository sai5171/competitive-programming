#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    while(n--)
    {
        long double v,th,x,h1,h2;
        cin >> v >> th >> x >> h1 >> h2;
        long double t = x / (v*cos(th*PI/180.0));
        long double y = (v*t*sin(th*PI/180.0))-(0.5*9.81*t*t);
        if(h2-y>=1.0 && y-h1>=1.0)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
    return 0;
}
