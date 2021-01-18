//header macros
#include <stdio.h>
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
#include <list>
#include <string>
#include <cmath>
//end header macros
//input macros
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main()
{
    long long int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long double area=abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0L;
    printf("%.1Lf",area);
    long long int n;
    cin >> n;
    long long int count=0;
    while(n--)
    {
        long long int x,y;
        cin >> x >> y;
        long double area1,area2,area3;
        area1=abs(x*(y2-y3)+x2*(y3-y)+x3*(y-y2))/2.0L;
        area2=abs(x1*(y-y3)+x*(y3-y1)+x3*(y1-y))/2.0L;
        area3=abs(x1*(y2-y)+x2*(y-y1)+x*(y1-y2))/2.0L;
        if(area1+area2+area3==area)
            count++;
    }
    cout << endl;
    cout << count << endl;
    return 0;
}
