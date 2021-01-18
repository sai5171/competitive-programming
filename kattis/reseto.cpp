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
int main(){
    long long int n,k;
    cin >> n >> k;
    vector<long long int> v;
    for(long long int i=2;i<=n;i++)
        v.pb(i);
    long long int count=0;
    for(long long int i=0;i<v.size();i++)
    {
        if(v[i]==0)
            continue;
        long long int d=v[i];
        for(long long int j=i;j<v.size();j=j+d)
        {
            int x=0;
            if(v[j]!=0 && v[j]%d==0)
                {count++;x=1;}
            if(count==k)
                {cout << v[j] << endl; return 0;}
            if(x==1)
                v[j]=0;
        }
    }
    return 0;
}