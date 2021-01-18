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
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int a[102][102];
void fun(int i,int j)
{
    if(a[i][j]==1)
        a[i][j]=3;
    if(a[i-1][j]==1)
        fun(i-1,j);
    if(a[i][j-1]==1)
        fun(i,j-1);
    if(a[i][j+1]==1)
        fun(i,j+1);
    if(a[i+1][j]==1)
        fun(i+1,j);
    
}
int main(){
   long long int n,m;
   long long int t=0;
   while(cin >> n >> m)
   {
       t++;
       int x=getchar();
       for(long long int i=0;i<n+2;i++)
       {
            for(long long int j=0;j<m+2;j++)
                a[i][j]=2;
       }
       for(long long int i=1;i<=n;i++)
       {
           for(long long int j=1;j<=m;j++)
            {
                x=getchar();
                if(x=='#')
                    a[i][j]=2;//2 for #
                else
                    a[i][j]=1;//1 for -
            }
            x=getchar();
       }
       long long int count=0;
       for(long long int i=0;i<n+2;i++)
       {
            for(long long int j=0;j<m+2;j++)
            {
                if(a[i][j]==1)
                {
                    count++;
                    fun(i,j);
                }
            }
       }
       
       cout << "Case " << t << ": ";
       cout << count << endl;
   }
}