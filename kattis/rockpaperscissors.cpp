//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main(){
    lli n;
    while(cin >> n && n!=0)
    {
        lli k;
        cin >> k;
        k=k*n*(n-1)/2;
        vector<vector<lli> > v(n,vector<lli>(2,0));
        while(k--)
        {
            lli p1,p2;
            string m1,m2;
            cin >> p1 >> m1 >> p2 >> m2;
            lli x=0,y=0;
            if((m1=="rock")&&(m2=="rock"))
                ;
            else if((m1=="rock")&&(m2=="paper"))
                y=1;
            else if((m1=="rock")&&(m2=="scissors"))
                x=1;
            else if((m1=="paper")&&(m2=="rock"))
                x=1;
            else if((m1=="paper")&&(m2=="paper"))
                ;
            else if((m1=="paper")&&(m2=="scissors"))
                y=1;
            else if((m1=="scissors")&&(m2=="rock"))
                y=1;
            else if((m1=="scissors")&&(m2=="paper"))
                x=1;
            else if((m1=="scissors")&&(m2=="scissors"))
                ;
            if(x==1)
            {
                (v[p1-1][1])++;
                (v[p2-1][0])++;
            }
            if(y==1)
            {
                (v[p2-1][1])++;
                (v[p1-1][0])++;
            }
        }
        for(lli i=0;i<n;i++)
        {
            double x=0,y=0;
            x=v[i][1];
            y=x+v[i][0];
            if(y==0)
                printf("-\n");
            else
                printf("%.3f\n",x/y);
        }
        cout << endl;
    }
    return 0;
}
