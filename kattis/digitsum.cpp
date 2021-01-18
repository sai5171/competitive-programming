//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>
#include <cmath>
//end header macros
//input macros
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
//end input macros 
using namespace std;
unsigned long long int fun(unsigned long long int x)
{
    unsigned long long int co=0,temp;
    temp=x;
    while(temp>0)
    {
        co++;
        temp=temp/10;
    }
    unsigned long long int a,b,c,c1,d,d1,s=0;
    a=x;
    b=1;
    c1=x;
     c=c1%10;
     c--;
    d=0;
    d1=x;
    for(int i=0;i<co;i++)
    {
        a=a/10;
        s=s+(  (a*45*b)+(   ((c*(c+1))/2)  *b   )+    ((c+1)*(d+1))       );//operation
       c1=c1/10;
       c=c1%10;
     c--;
       b=b*10;
       d=d1%b;
    }
    return s;
}
int main(){
    unsigned long long int n;
    cin >> n;
    while(n--)
    {
        unsigned long long int a,b;
        long long int x,y;
        cin >> a >> b;
        x=fun(a);
        y=fun(b);
        long long int temp,co=0;
        temp=a;
        while(temp>0)
        {
            co=co+temp%10;;
         temp=temp/10;
        }
        cout <<y-x+co <<endl;
    }
    return 0;
}